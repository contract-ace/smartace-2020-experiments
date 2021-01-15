// After manual preprocessing.
contract ERC20Basic {
  uint256 public totalSupply;
  function balanceOf(address who) public view returns (uint256);
  function transfer(address to, uint256 value) public returns (bool);
  event Transfer(address indexed from, address indexed to, uint256 value);
}

library SafeMath {
  function mul(uint256 a, uint256 b) internal pure returns (uint256) {
    uint256 c = a * b;
    // This can be violated, it should be a require.
    require(a == 0 || c / a == b);
    return c;
  }

  function div(uint256 a, uint256 b) internal pure returns (uint256) {
    uint256 c = a / b;
    return c;
  }

  function sub(uint256 a, uint256 b) internal pure returns (uint256) {
    // This can be violated, it should be a require.
    require(b <= a);
    return a - b;
  }

  function add(uint256 a, uint256 b) internal pure returns (uint256) {
    uint256 c = a + b;
    // This can be violated, it should be a require.
    require(c >= a);
    return c;
  }
}

contract BasicToken is ERC20Basic {
  using SafeMath for uint256;

  mapping(address => uint256) balances;

  function transfer(address _to, uint256 _value) public returns (bool) {
    balances[msg.sender] = balances[msg.sender].sub(_value);
    balances[_to] = balances[_to].add(_value);
    emit Transfer(msg.sender, _to, _value);
    return true;
  }

  function balanceOf(address _owner) public view returns (uint256 balance) {
    return balances[_owner];
  }
}

contract ERC20 is ERC20Basic {
  function allowance(address owner, address spender) public view returns (uint256);
  function transferFrom(address from, address to, uint256 value) public returns (bool);
  function approve(address spender, uint256 value) public returns (bool);
  event Approval(address indexed owner, address indexed spender, uint256 value);
}

contract StandardToken is ERC20, BasicToken {
  mapping (address => mapping (address => uint256)) allowed;

  function transferFrom(address _from, address _to, uint256 _value) public returns (bool) {
    uint _allowance = allowed[_from][msg.sender];

    balances[_to] = balances[_to].add(_value);
    balances[_from] = balances[_from].sub(_value);
    allowed[_from][msg.sender] = _allowance.sub(_value);
    emit Transfer(_from, _to, _value);
    return true;
  }

  function approve(address _spender, uint256 _value) public returns (bool) {
    require((_value == 0) || (allowed[msg.sender][_spender] == 0));

    allowed[msg.sender][_spender] = _value;
    emit Approval(msg.sender, _spender, _value);
    return true;
  }

  function allowance(address _owner, address _spender) public view returns (uint256 remaining) {
    return allowed[_owner][_spender];
  }

}

contract MigrationAgent {
    function migrateFrom(address _from, uint _value) public;
}

contract GVToken is StandardToken {
    string public constant name = "Genesis Vision Token";
    string public constant symbol = "GVT";
    uint   public constant decimals = 18;
    // Scaled by magnitude of 8.
    uint   constant TOKEN_LIMIT = 440000000000000000; 
    
    address public ico;

    bool public isFrozen = true;

    address public migrationMaster;
    address public migrationAgent;
    uint public totalMigrated;

    event Migrate(address indexed _from, address indexed _to, uint _value);

    constructor(address _ico, address _migrationMaster) public {
        require(_ico != address(0));
        require(_migrationMaster != address(0));
        ico = _ico;
        migrationMaster = _migrationMaster;
    }

    function mint(address holder, uint value) public {
        require(msg.sender == ico);
        require(value > 0);
        require(totalSupply + value <= TOKEN_LIMIT);

        balances[holder] += value;
        totalSupply += value;
        emit Transfer(address(0), holder, value);
    }

    function unfreeze() public {
        require(msg.sender == ico);
        isFrozen = false;
    }

    function transfer(address _to, uint _value) public returns (bool) {
        require(_to != address(0));
        require(!isFrozen);
        return super.transfer(_to, _value);
    }

    function transferFrom(address _from, address _to, uint _value) public returns (bool) {
        require(!isFrozen);
        return super.transferFrom(_from, _to, _value);
    }

    function approve(address _spender, uint _value) public returns (bool) {
        require(!isFrozen);
        return super.approve(_spender, _value);
    }

    function migrate(uint value) external {
        require(migrationAgent != address(0));
        require(value > 0);
        require(value <= balances[msg.sender]);

        balances[msg.sender] -= value;
        totalSupply -= value;
        totalMigrated += value;
        address agent = migrationAgent;
        // In general this function should be replaced by a stub with non-deterministic rv.
        // However, the stub would be a no-op in this case and be optimized away.
        // MigrationAgent(agent).migrateFrom(msg.sender, value);
        emit Migrate(msg.sender, agent, value);
    }

    function setMigrationAgent(address _agent) external {
        require(migrationAgent == address(0));
        require(msg.sender == migrationMaster);
        migrationAgent = _agent;
    }

    function setMigrationMaster(address _master) external {
        require(msg.sender == migrationMaster);
        require(_master != address(0));
        migrationMaster = _master;
    }
}

contract GVOptionToken is StandardToken {
    address public optionProgram;

    string public name;
    string public symbol;

    // Scaled by magnitude of 8.
    uint   public constant decimals = 10;

    uint TOKEN_LIMIT;

    modifier optionProgramOnly { require(msg.sender == optionProgram); _; }

    constructor(
        address _optionProgram,
        string memory _name,
        string memory _symbol,
        uint _TOKEN_LIMIT
    ) public {
        require(_optionProgram != address(0));
        optionProgram = _optionProgram;
        name = _name;
        symbol = _symbol;
        TOKEN_LIMIT = _TOKEN_LIMIT;
    }

    function buyOptions(address buyer, uint value) public optionProgramOnly {
        require(value > 0);
        require(totalSupply + value <= TOKEN_LIMIT);

        balances[buyer] += value;
        totalSupply += value;
        emit Transfer(address(0), buyer, value);
    }
    
    function remainingTokensCount() public returns(uint) {
        return TOKEN_LIMIT - totalSupply;
    }
    
    function executeOption(address addr, uint optionsCount) public
        optionProgramOnly
        returns (uint) {
        if (balances[addr] < optionsCount) {
            optionsCount = balances[addr];
        }
        if (optionsCount == 0) {
            return 0;
        }

        balances[addr] -= optionsCount;
        totalSupply -= optionsCount;

        return optionsCount;
    }
}

// Removed explicit aliases introduced by VerX.

contract GVOptionProgram {
    // Scaled by magnitude of 8 (or ~8).
    uint constant option30perCent = 2600000000;
    uint constant option20perCent = 2400000000;
    uint constant option10perCent = 2200000000;
    uint constant token30perCent  = 136842100;
    uint constant token20perCent  = 126315700;
    uint constant token10perCent  = 115789400;

    string public constant option30name = "30% GVOT";
    string public constant option20name = "20% GVOT";
    string public constant option10name = "10% GVOT";

    string public constant option30symbol = "GVOT30";
    string public constant option20symbol = "GVOT20";
    string public constant option10symbol = "GVOT10";

    // Scaled by magnitude of 8.
    uint constant option30_TOKEN_LIMIT = 26000000000000000;
    uint constant option20_TOKEN_LIMIT = 36000000000000000;
    uint constant option10_TOKEN_LIMIT = 55000000000000000;

    event BuyOptions(address buyer, uint amount, string tx, uint8 optionType);
    event ExecuteOptions(address buyer, uint amount, string tx, uint8 optionType);

    address public gvAgent;
    address public team;
    address public ico;     

    // Consequence of removing aliases.
    GVOptionToken public gvOptionToken30;
    GVOptionToken public gvOptionToken20;
    GVOptionToken public gvOptionToken10;

    modifier icoOnly { require(msg.sender == ico); _; }
    
    constructor(address _ico, address _gvAgent, address _team) public {
        // Consequence of removing aliases.
        gvOptionToken30 = new GVOptionToken(address(this), option30name, option30symbol, option30_TOKEN_LIMIT);
        gvOptionToken20 = new GVOptionToken(address(this), option20name, option20symbol, option20_TOKEN_LIMIT);
        gvOptionToken10 = new GVOptionToken(address(this), option10name, option10symbol, option10_TOKEN_LIMIT);
        gvAgent = _gvAgent;
        team = _team;
        ico = _ico;
    }

    function getBalance() public returns (uint, uint, uint) {
        return (gvOptionToken30.remainingTokensCount(), gvOptionToken20.remainingTokensCount(), gvOptionToken10.remainingTokensCount());
    }

    function executeOptions(address buyer, uint usdCents, string memory txHash) public icoOnly
        returns (uint executedTokens, uint remainingCents) {
        require(usdCents > 0);

        (executedTokens, remainingCents) = executeIfAvailable(buyer, usdCents, txHash, gvOptionToken30, 0, token30perCent);
        if (remainingCents == 0) {
            return (executedTokens, 0);
        }

        uint executed20;
        (executed20, remainingCents) = executeIfAvailable(buyer, remainingCents, txHash, gvOptionToken20, 1, token20perCent);
        if (remainingCents == 0) {
            return (executedTokens + executed20, 0);
        }

        uint executed10;
        (executed10, remainingCents) = executeIfAvailable(buyer, remainingCents, txHash, gvOptionToken10, 2, token10perCent);
        
        return (executedTokens + executed20 + executed10, remainingCents);
    }

    function buyOptions(address buyer, uint usdCents, string memory txHash) public icoOnly {
        require(usdCents > 0);

        uint remainUsdCents = buyIfAvailable(buyer, usdCents, txHash, gvOptionToken30, 0, option30perCent);
        if (remainUsdCents == 0) {
            return;
        }

        remainUsdCents = buyIfAvailable(buyer, remainUsdCents, txHash, gvOptionToken20, 1, option20perCent);
        if (remainUsdCents == 0) {
            return;
        }

        remainUsdCents = buyIfAvailable(buyer, remainUsdCents, txHash, gvOptionToken10, 2, option10perCent);
    }   

    function executeIfAvailable(address buyer, uint usdCents, string memory txHash,
        GVOptionToken optionToken, uint8 optionType, uint optionPerCent)
        private returns (uint executedTokens, uint remainingCents) {
        
        uint optionsAmount = usdCents * optionPerCent;
        executedTokens = optionToken.executeOption(buyer, optionsAmount);
        remainingCents = usdCents - (executedTokens / optionPerCent);
        if (executedTokens > 0) {
            emit ExecuteOptions(buyer, executedTokens, txHash, optionType);
        }
        return (executedTokens, remainingCents);
    }

    function buyIfAvailable(address buyer, uint usdCents, string memory txHash,
        GVOptionToken optionToken, uint8 optionType, uint optionsPerCent)
        private returns (uint) {
        
        uint availableTokens = optionToken.remainingTokensCount(); 
        if (availableTokens > 0) {
            uint tokens = usdCents * optionsPerCent;
            if(availableTokens >= tokens) {
                optionToken.buyOptions(buyer, tokens);
                emit BuyOptions(buyer, tokens, txHash, optionType);
                return 0;
            }
            else {
                optionToken.buyOptions(buyer, availableTokens);
                emit BuyOptions(buyer, availableTokens, txHash, optionType);
                return usdCents - availableTokens / optionsPerCent;
            }
        }
        return usdCents;
    }
}

contract Initable {
    function init(address token) public;
}

contract ICO {
    // Scaled by magnitude of 8.
    uint public constant TOKENS_FOR_SALE = 330000000000000000;

    event StartOptionsSelling();
    event StartICOForOptionsHolders();
    event RunIco();
    event PauseIco();
    event ResumeIco();
    event FinishIco();

    event BuyTokens(address buyer, uint amount, string txHash);

    address public gvAgent;
    address public team;

    GVToken public gvToken;
    GVOptionProgram public optionProgram;
    // Casting is unsupported but teamAllocator is never used as an Initable.
    address public teamAllocator;
    address public migrationMaster;

    modifier teamOnly { require(msg.sender == team); _; }
    modifier gvAgentOnly { require(msg.sender == gvAgent); _; }

    uint tokensSold = 0;

    bool public isPaused = false;
    enum IcoState { Created, RunningOptionsSelling, RunningForOptionsHolders, Running, Finished }
    IcoState public icoState = IcoState.Created;

    constructor(address _team, address _gvAgent, address _migrationMaster, address _teamAllocator) public {
        gvAgent = _gvAgent;
        team = _team;
        // No need to cast.
        teamAllocator = _teamAllocator;
        migrationMaster = _migrationMaster;
        gvToken = new GVToken(address(this), migrationMaster);
        // Following line is added due to call to initOptionProgram() in Deployer.
        optionProgram = new GVOptionProgram(address(this), gvAgent, team);
    }

    function initOptionProgram() external teamOnly {
        if (address(optionProgram) == address(0)) {
            // In the Deployer, initOptionProgram() is called once.
            // After the first call, this line should never be reached.
            // 
            // However, SmartACE does not support dynamic allocation.
            // As an alternative, we have inlined initOptionProgram in the constructor.
            // We've replaced the following line with `assert(false)` to validate our instrumentation.
            assert(false);
        }
    }

    function startOptionsSelling() external teamOnly {
        require(icoState == IcoState.Created);
        require(address(optionProgram) != address(0));    
        icoState = IcoState.RunningOptionsSelling;
        emit StartOptionsSelling();
    }

    function startIcoForOptionsHolders() external teamOnly {
        require(icoState == IcoState.RunningOptionsSelling);       
        icoState = IcoState.RunningForOptionsHolders;
        emit StartICOForOptionsHolders();
    }

    function startIco() external teamOnly {
        require(icoState == IcoState.RunningForOptionsHolders);
        icoState = IcoState.Running;
        emit RunIco();
    }

    function pauseIco() external teamOnly {
        require(!isPaused);
        require(icoState == IcoState.Running || icoState == IcoState.RunningForOptionsHolders || icoState == IcoState.RunningOptionsSelling);
        isPaused = true;
        emit PauseIco();
    }

    function resumeIco() external teamOnly {
        require(isPaused);
        require(icoState == IcoState.Running || icoState == IcoState.RunningForOptionsHolders || icoState == IcoState.RunningOptionsSelling);
        isPaused = false;
        emit ResumeIco();
    }

    function finishIco(address _fund, address _bounty) external teamOnly {
        require(icoState == IcoState.Running);
        icoState = IcoState.Finished;

        uint mintedTokens = gvToken.totalSupply();
        if (mintedTokens > 0) {
            uint totalAmount = mintedTokens * 4 / 3;
            gvToken.mint(teamAllocator, 11 * totalAmount / 100);
            gvToken.mint(_fund, totalAmount / 20);
            gvToken.mint(_bounty, 9 * totalAmount / 100);
            gvToken.unfreeze();
        }
        
        emit FinishIco();
    }    

    function buyTokens(address buyer, uint usdCents, string calldata txHash)
        external gvAgentOnly returns (uint) {
        require(icoState == IcoState.Running);
        require(!isPaused);
        return buyTokensInternal(buyer, usdCents, txHash);
    }

    function buyTokensByOptions(address buyer, uint usdCents, string calldata txHash)
        external gvAgentOnly returns (uint) {
        require(!isPaused);
        require(icoState == IcoState.Running || icoState == IcoState.RunningForOptionsHolders);
        require(usdCents > 0);

        uint executedTokens; 
        uint remainingCents;
        (executedTokens, remainingCents) = optionProgram.executeOptions(buyer, usdCents, txHash);

        if (executedTokens > 0) {
            require(tokensSold + executedTokens <= TOKENS_FOR_SALE);
            tokensSold += executedTokens;
            
            gvToken.mint(buyer, executedTokens);
            emit BuyTokens(buyer, executedTokens, txHash);
        }

        if (icoState == IcoState.Running) {
            return buyTokensInternal(buyer, remainingCents, txHash);
        } else {
            return remainingCents;
        }
    }

    function buyOptions(address buyer, uint usdCents, string calldata txHash)
        external gvAgentOnly {
        require(!isPaused);
        require(icoState == IcoState.RunningOptionsSelling);
        optionProgram.buyOptions(buyer, usdCents, txHash);
    }

    function buyTokensInternal(address buyer, uint usdCents, string memory txHash)
    private returns (uint) {
        require(usdCents > 0);
        // No scaling. Preserves counter-examples.
        uint tokens = usdCents;
        require(tokensSold + tokens <= TOKENS_FOR_SALE);
        tokensSold += tokens;
            
        gvToken.mint(buyer, tokens);
        emit BuyTokens(buyer, tokens, txHash);

        return 0;
    }
}

