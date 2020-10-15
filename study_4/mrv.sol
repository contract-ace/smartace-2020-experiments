interface IERC20 {
  function totalSupply() external view returns (uint256);

  function balanceOf(address who) external view returns (uint256);

  function allowance(address owner, address spender)
    external view returns (uint256);

  function transfer(address to, uint256 value) external returns (bool);

  function approve(address spender, uint256 value)
    external returns (bool);

  function transferFrom(address from, address to, uint256 value)
    external returns (bool);

  event Transfer(
    address indexed from,
    address indexed to,
    uint256 value
  );

  event Approval(
    address indexed owner,
    address indexed spender,
    uint256 value
  );
}

library SafeMath {
  function mul(uint256 a, uint256 b) internal pure returns (uint256) {
    if (a == 0) {
      return 0;
    }
    uint256 c = a * b;
    require(c / a == b);
    return c;
  }

  function div(uint256 a, uint256 b) internal pure returns (uint256) {
    require(b > 0); // Solidity only automatically asserts when dividing by 0
    uint256 c = a / b;
    return c;
  }

  function sub(uint256 a, uint256 b) internal pure returns (uint256) {
    require(b <= a);
    uint256 c = a - b;

    return c;
  }

  function add(uint256 a, uint256 b) internal pure returns (uint256) {
    uint256 c = a + b;
    require(c >= a);

    return c;
  }

  function mod(uint256 a, uint256 b) internal pure returns (uint256) {
    require(b != 0);
    return a % b;
  }
}

contract ERC20 is IERC20 {
  using SafeMath for uint256;

  mapping (address => uint256) private _balances;

  mapping (address => mapping (address => uint256)) private _allowed;

  uint256 private _totalSupply;

  function totalSupply() public view returns (uint256) {
    return _totalSupply;
  }

  function balanceOf(address owner) public view returns (uint256) {
    return _balances[owner];
  }

  function allowance(
    address owner,
    address spender
   )
    public
    view
    returns (uint256)
  {
    return _allowed[owner][spender];
  }

  function transfer(address to, uint256 value) public returns (bool) {
    _transfer(msg.sender, to, value);
    return true;
  }

  function approve(address spender, uint256 value) public returns (bool) {
    require(spender != address(0));

    _allowed[msg.sender][spender] = value;
    emit Approval(msg.sender, spender, value);
    return true;
  }

  function transferFrom(
    address from,
    address to,
    uint256 value
  )
    public
    returns (bool)
  {
    require(value <= _allowed[from][msg.sender]);

    _allowed[from][msg.sender] = _allowed[from][msg.sender].sub(value);
    _transfer(from, to, value);
    return true;
  }

  function increaseAllowance(
    address spender,
    uint256 addedValue
  )
    public
    returns (bool)
  {
    require(spender != address(0));

    _allowed[msg.sender][spender] = (
      _allowed[msg.sender][spender].add(addedValue));
    emit Approval(msg.sender, spender, _allowed[msg.sender][spender]);
    return true;
  }

  function decreaseAllowance(
    address spender,
    uint256 subtractedValue
  )
    public
    returns (bool)
  {
    require(spender != address(0));

    _allowed[msg.sender][spender] = (
      _allowed[msg.sender][spender].sub(subtractedValue));
    emit Approval(msg.sender, spender, _allowed[msg.sender][spender]);
    return true;
  }

  function _transfer(address from, address to, uint256 value) internal {
    require(value <= _balances[from]);
    require(to != address(0));

    _balances[from] = _balances[from].sub(value);
    _balances[to] = _balances[to].add(value);
    emit Transfer(from, to, value);
  }

  function _mint(address account, uint256 value) internal {
    // Must be address.
    require(account != address(0));
    _totalSupply = _totalSupply.add(value);
    _balances[account] = _balances[account].add(value);
    emit Transfer(address(0), account, value);
  }

  function _burn(address account, uint256 value) internal {
    // Must be address.
    require(account != address(0));
    require(value <= _balances[account]);

    _totalSupply = _totalSupply.sub(value);
    _balances[account] = _balances[account].sub(value);
    emit Transfer(account, address(0), value);
  }

  function _burnFrom(address account, uint256 value) internal {
    require(value <= _allowed[account][msg.sender]);

    _allowed[account][msg.sender] = _allowed[account][msg.sender].sub(
      value);
    _burn(account, value);
  }
}

contract Ownable {
  // Must be payable
  address payable private _owner;

  event OwnershipTransferred(
    address indexed previousOwner,
    address indexed newOwner
  );

  constructor() internal {
    _owner = msg.sender;
    emit OwnershipTransferred(address(0), _owner);
  }

  // Must be payable
  function owner() public view returns(address payable) {
    return _owner;
  }

  modifier onlyOwner() {
    require(isOwner());
    _;
  }

  function isOwner() public view returns(bool) {
    return msg.sender == _owner;
  }

  function renounceOwnership() public onlyOwner {
    emit OwnershipTransferred(_owner, address(0));
    _owner = address(0);
  }

  // Must be payable
  function transferOwnership(address payable newOwner) public onlyOwner {
    _transferOwnership(newOwner);
  }

  // Must be payable
  function _transferOwnership(address payable newOwner) internal {
    require(newOwner != address(0));
    emit OwnershipTransferred(_owner, newOwner);
    _owner = newOwner;
  }
}

contract HasNoTokens is Ownable {
  // Should be sliced by static analysis.
  // Without slicing this is loosely coupled.
  /*function reclaimToken(address tokenAddr) external onlyOwner {
    IERC20 tokenInst = IERC20(tokenAddr);
    address _owner = owner();
    uint256 balance = tokenInst.balanceOf(this);
    tokenInst.transfer(_owner, balance);
  }*/
}

contract HasNoContracts is Ownable {
  // Should be sliced by static analysis.
  // Without slicing this is loosely coupled.
  /*function reclaimContract(address contractAddr) external onlyOwner {
    Ownable contractInst = Ownable(contractAddr);
    contractInst.transferOwnership(owner());
  }*/
}

contract MRVToken is ERC20, Ownable, HasNoTokens, HasNoContracts {
    string public constant name = "Macroverse Token";
    string public constant symbol = "MRV";
    uint8 public decimals;

    address payable beneficiary; // Must be payable.
    uint public maxCrowdsaleSupplyInWholeTokens;
    uint public constant wholeTokensReserved = 5000;
    uint public constant wholeTokensPerEth = 5000;
    
    bool crowdsaleStarted;
    bool crowdsaleEnded;
    uint public openTimer = 0;
    uint public closeTimer = 0;

    // Must be payable.
    constructor(address payable sendProceedsTo, address sendTokensTo) public {
        beneficiary = sendProceedsTo;

        decimals = 2;

        // Support for **, big values.
        _mint(sendTokensTo, wholeTokensReserved * 100);
        
        crowdsaleStarted = false;
        crowdsaleEnded = false;
        maxCrowdsaleSupplyInWholeTokens = 100000000;
    }

    function() external payable onlyDuringCrowdsale { // Version requires extern.
        createTokens(msg.sender);
    }

    event CrowdsaleOpen(uint time);
    event TokenPurchase(uint time, uint etherAmount, address from);
    event CrowdsaleClose(uint time);
    event DecimalChange(uint8 newDecimals);

    modifier onlyBeforeClosed {
        checkCloseTimer();
        if (crowdsaleEnded) revert();
        _;
    }

    modifier onlyAfterClosed {
        checkCloseTimer();
        if (!crowdsaleEnded) revert();
        _;
    }

    modifier onlyBeforeOpened {
        checkOpenTimer();
        if (crowdsaleStarted) revert();
        _;
    }

    modifier onlyDuringCrowdsale {
        checkOpenTimer();
        checkCloseTimer();
        if (crowdsaleEnded) revert();
        if (!crowdsaleStarted) revert();
        _;
    }

    function openTimerElapsed() public view returns (bool) {
        return (openTimer != 0 && now > openTimer);
    }

    function closeTimerElapsed() public view returns (bool) {
        return (closeTimer != 0 && now > closeTimer);
    }

    function checkOpenTimer() public {
        if (openTimerElapsed()) {
            crowdsaleStarted = true;
            openTimer = 0;
            emit CrowdsaleOpen(now);
        }
    }

    function checkCloseTimer() public {
        if (closeTimerElapsed()) {
            crowdsaleEnded = true;
            closeTimer = 0;
            emit CrowdsaleClose(now);
        }
    }

    function isCrowdsaleActive() public view returns (bool) {
        return ((crowdsaleStarted || openTimerElapsed()) && !(crowdsaleEnded || closeTimerElapsed()));
    }

    function setMaxSupply(uint newMaxInWholeTokens) public onlyOwner onlyBeforeOpened {
        maxCrowdsaleSupplyInWholeTokens = newMaxInWholeTokens;
    }

    function openCrowdsale() public onlyOwner onlyBeforeOpened {
        crowdsaleStarted = true;
        openTimer = 0;
        emit CrowdsaleOpen(now);
    }

    function setCrowdsaleOpenTimerFor(uint minutesFromNow) public onlyOwner onlyBeforeOpened {
        openTimer = now + minutesFromNow * 1 minutes;
    }

    function clearCrowdsaleOpenTimer() public onlyOwner onlyBeforeOpened {
        openTimer = 0;
    }

    function setCrowdsaleCloseTimerFor(uint minutesFromNow) public onlyOwner onlyBeforeClosed {
        closeTimer = now + minutesFromNow * 1 minutes;
    }

    function clearCrowdsaleCloseTimer() public onlyOwner onlyBeforeClosed {
        closeTimer = 0;
    }

    function createTokens(address recipient) internal onlyDuringCrowdsale {
        if (msg.value == 0) {
            revert();
        }

        uint tokens = msg.value.mul(wholeTokensPerEth); // Exploits the fact that we have 18 decimals, like ETH.
        
        uint256 newTotalSupply = totalSupply().add(tokens);
        
        if (newTotalSupply > (wholeTokensReserved + maxCrowdsaleSupplyInWholeTokens) * 100) {
            revert();
        }

        _mint(recipient, tokens);

        emit TokenPurchase(now, msg.value, recipient);

        if (!beneficiary.send(msg.value)) {
            revert();
        }
    }

    function closeCrowdsale() public onlyOwner onlyDuringCrowdsale {
        crowdsaleEnded = true;
        closeTimer = 0;
        emit CrowdsaleClose(now);
    }  

    function setDecimals(uint8 newDecimals) public onlyOwner onlyAfterClosed {
        decimals = newDecimals;
        emit DecimalChange(decimals);
    }

    function reclaimEther() external onlyOwner {
        // Assumption. This assertion passes.
        require(owner().send(address(this).balance));
    }

    function increaseAllowance(address /* spender */, uint256 /* addedValue */) public returns (bool) {
        revert();
    }

    function decreaseAllowance(address /* spender */, uint256 /* addedValue */) public returns (bool) {
        revert();
    }
}
