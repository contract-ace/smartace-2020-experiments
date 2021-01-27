// Manual abstraction.
contract ERC20Basic {
  function totalSupply() public view returns (uint256);
  function balanceOf(address who) public view returns (uint256);
  function transfer(address to, uint256 value) public returns (bool);
  event Transfer(address indexed from, address indexed to, uint256 value);
}

contract ERC20 is ERC20Basic {
  function allowance(address owner, address spender) public view returns (uint256);
  function transferFrom(address from, address to, uint256 value) public returns (bool);
  function approve(address spender, uint256 value) public returns (bool);
  event Approval(address indexed owner, address indexed spender, uint256 value);
}

library SafeMath {
  function mul(uint256 a, uint256 b) internal pure returns (uint256) {
    if (a == 0) {
      return 0;
    }
    uint256 c = a * b;
    // assert(c / a == b);
    require(c / a == b);
    return c;
  }

  function div(uint256 a, uint256 b) internal pure returns (uint256) {
    uint256 c = a / b;
    return c;
  }

  function sub(uint256 a, uint256 b) internal pure returns (uint256) {
    // assert(b <= a);
    require(b <= a);
    return a - b;
  }

  function add(uint256 a, uint256 b) internal pure returns (uint256) {
    uint256 c = a + b;
    // assert(c >= a);
    require(c >= a);
    return c;
  }
}

contract BasicToken is ERC20Basic {
  using SafeMath for uint256;

  mapping(address => uint256) balances;

  uint256 totalSupply_;

  function totalSupply() public view returns (uint256) {
    return totalSupply_;
  }

  function transfer(address _to, uint256 _value) public returns (bool) {
    require(_to != address(0));
    require(_value <= balances[msg.sender]);

    balances[msg.sender] = balances[msg.sender].sub(_value);
    balances[_to] = balances[_to].add(_value);
    emit Transfer(msg.sender, _to, _value);
    return true;
  }

  function balanceOf(address _owner) public view returns (uint256 balance) {
    return balances[_owner];
  }
}

contract BurnableToken is BasicToken {
  event Burn(address indexed burner, uint256 value);

  function burn(uint256 _value) public {
    require(_value <= balances[msg.sender]);

    address burner = msg.sender;
    balances[burner] = balances[burner].sub(_value);
    totalSupply_ = totalSupply_.sub(_value);
    emit Burn(burner, _value);
  }
}

contract Ownable {
  address public owner;

  event OwnershipTransferred(address indexed previousOwner, address indexed newOwner);

  constructor() public {
    owner = msg.sender;
  }

  modifier onlyOwner() {
    require(msg.sender == owner);
    _;
  }

  function transferOwnership(address newOwner) public onlyOwner {
    require(newOwner != address(0));
    emit OwnershipTransferred(owner, newOwner);
    owner = newOwner;
  }
}

contract DetailedERC20 is ERC20 {
  string public name;
  string public symbol;
  uint8 public decimals;

  constructor(string memory _name, string memory _symbol, uint8 _decimals) public {
    name = _name;
    symbol = _symbol;
    decimals = _decimals;
  }
}

contract StandardToken is ERC20, BasicToken {
  mapping (address => mapping (address => uint256)) internal allowed;

  function transferFrom(address _from, address _to, uint256 _value) public returns (bool) {
    require(_to != address(0));
    require(_value <= balances[_from]);
    require(_value <= allowed[_from][msg.sender]);

    balances[_from] = balances[_from].sub(_value);
    balances[_to] = balances[_to].add(_value);
    allowed[_from][msg.sender] = allowed[_from][msg.sender].sub(_value);
    emit Transfer(_from, _to, _value);
    return true;
  }

  function approve(address _spender, uint256 _value) public returns (bool) {
    allowed[msg.sender][_spender] = _value;
    emit Approval(msg.sender, _spender, _value);
    return true;
  }

  function allowance(address _owner, address _spender) public view returns (uint256) {
    return allowed[_owner][_spender];
  }

  function increaseApproval(address _spender, uint _addedValue) public returns (bool) {
    allowed[msg.sender][_spender] = allowed[msg.sender][_spender].add(_addedValue);
    emit Approval(msg.sender, _spender, allowed[msg.sender][_spender]);
    return true;
  }

  function decreaseApproval(address _spender, uint _subtractedValue) public returns (bool) {
    uint oldValue = allowed[msg.sender][_spender];
    if (_subtractedValue > oldValue) {
      allowed[msg.sender][_spender] = 0;
    } else {
      allowed[msg.sender][_spender] = oldValue.sub(_subtractedValue);
    }
    emit Approval(msg.sender, _spender, allowed[msg.sender][_spender]);
    return true;
  }
}

contract Pausable is Ownable {
  event Pause();
  event Unpause();

  bool public paused = false;

  modifier whenNotPaused() {
    require(!paused);
    _;
  }

  modifier whenPaused() {
    require(paused);
    _;
  }

  function pause() onlyOwner whenNotPaused public {
    paused = true;
    emit Pause();
  }

  function unpause() onlyOwner whenPaused public {
    paused = false;
    emit Unpause();
  }
}

contract PausableToken is StandardToken, Pausable {
  function transfer(address _to, uint256 _value) public whenNotPaused returns (bool) {
    return super.transfer(_to, _value);
  }

  function transferFrom(address _from, address _to, uint256 _value) public whenNotPaused returns (bool) {
    return super.transferFrom(_from, _to, _value);
  }

  function approve(address _spender, uint256 _value) public whenNotPaused returns (bool) {
    return super.approve(_spender, _value);
  }

  function increaseApproval(address _spender, uint _addedValue) public whenNotPaused returns (bool success) {
    return super.increaseApproval(_spender, _addedValue);
  }

  function decreaseApproval(address _spender, uint _subtractedValue) public whenNotPaused returns (bool success) {
    return super.decreaseApproval(_spender, _subtractedValue);
  }
}

contract VUToken is DetailedERC20, BurnableToken, PausableToken {
    using SafeMath for uint256;

    // Scaled.
    uint public constant INITIAL_SUPPLY = 1000000000;

    constructor() public DetailedERC20("VU TOKEN", "VU", 18) {
        totalSupply_ = INITIAL_SUPPLY;

        balances[msg.sender] = INITIAL_SUPPLY;
        emit Transfer(address(0x0), msg.sender, INITIAL_SUPPLY);
    }

    /*function massTransfer(address[] _recipients, uint[] _amounts) external returns (bool) {
        require(_recipients.length == _amounts.length);

        for (uint i = 0; i < _recipients.length; i++) {
            require(transfer(_recipients[i], _amounts[i]));
        }

        return true;
    }*/
}

// Tokens moved before crowdsale.

contract Crowdsale {
  using SafeMath for uint256;

  // Explicit downcast.
  VUToken public token;

  address payable public wallet;

  uint256 public rate;
  uint256 public weiRaised;

  event TokenPurchase(address indexed purchaser, address indexed beneficiary, uint256 value, uint256 amount);

  // Token constructed explicitly.
  constructor(uint256 _rate, address payable _wallet) public {
    require(_rate > 0);
    require(_wallet != address(0));
    // Ensures wallet is not crowdsale since this leads to undesired recursion.
    require(_wallet != address(this));

    rate = _rate;
    wallet = _wallet;
    // Explicit allocation.
    token = new VUToken();
    require(address(token) != address(0));
  }

  function () external payable {
    buyTokens(msg.sender);
  }

  function buyTokens(address _beneficiary) public payable {
    uint256 weiAmount = msg.value;
    _preValidatePurchase(_beneficiary, weiAmount);

    uint256 tokens = _getTokenAmount(weiAmount);

    weiRaised = weiRaised.add(weiAmount);

    _processPurchase(_beneficiary, tokens);
    emit TokenPurchase(msg.sender, _beneficiary, weiAmount, tokens);

    _updatePurchasingState(_beneficiary, weiAmount);

    _forwardFunds();
    _postValidatePurchase(_beneficiary, weiAmount);
  }

  function _preValidatePurchase(address _beneficiary, uint256 _weiAmount) internal {
    require(_beneficiary != address(0));
    require(_weiAmount != 0);
  }

  function _postValidatePurchase(address _beneficiary, uint256 _weiAmount) internal {}

  function _deliverTokens(address _beneficiary, uint256 _tokenAmount) internal {
    token.transfer(_beneficiary, _tokenAmount);
  }

  function _processPurchase(address _beneficiary, uint256 _tokenAmount) internal {
    _deliverTokens(_beneficiary, _tokenAmount);
  }

  function _updatePurchasingState(address _beneficiary, uint256 _weiAmount) internal {}

  function _getTokenAmount(uint256 _weiAmount) internal view returns (uint256) {
    return _weiAmount.mul(rate);
  }

  function _forwardFunds() internal {
    wallet.transfer(msg.value);
  }
}

contract AllowanceCrowdsale is Crowdsale {
  using SafeMath for uint256;

  address public tokenWallet;

  constructor(address _tokenWallet) public {
    require(_tokenWallet != address(0));
    tokenWallet = _tokenWallet;
  }

  function remainingTokens() public view returns (uint256) {
    return token.allowance(tokenWallet, address(this));
  }

  function _deliverTokens(address _beneficiary, uint256 _tokenAmount) internal {
    token.transferFrom(tokenWallet, _beneficiary, _tokenAmount);
  }
}

contract TimedCrowdsale is Crowdsale {
  using SafeMath for uint256;

  uint256 public openingTime;
  uint256 public closingTime;

  modifier onlyWhileOpen {
    require(now >= openingTime && now <= closingTime);
    _;
  }

  constructor(uint256 _openingTime, uint256 _closingTime) public {
    require(_openingTime >= now);
    require(_closingTime >= _openingTime);

    openingTime = _openingTime;
    closingTime = _closingTime;
  }

  function hasClosed() public view returns (bool) {
    return now > closingTime;
  }

  function _preValidatePurchase(address _beneficiary, uint256 _weiAmount) internal onlyWhileOpen {
    super._preValidatePurchase(_beneficiary, _weiAmount);
  }
}

contract PostDeliveryCrowdsale is TimedCrowdsale {
  using SafeMath for uint256;

  mapping(address => uint256) public balances;

  function _processPurchase(address _beneficiary, uint256 _tokenAmount) internal {
    balances[_beneficiary] = balances[_beneficiary].add(_tokenAmount);
  }

  function withdrawTokens() public {
    require(hasClosed());
    uint256 amount = balances[msg.sender];
    require(amount > 0);
    balances[msg.sender] = 0;
    _deliverTokens(msg.sender, amount);
  }
}

contract Whitelist is Ownable {
    mapping(address => bool) public whitelist;
    mapping(address => bool) public authorized;

    event UserAllowed(address user);
    event UserDisallowed(address user);

    modifier onlyAuthorized {
        require(msg.sender == owner || authorized[msg.sender]);
        _;
    }

    function authorize(address _admin) external onlyOwner {
        authorized[_admin] = true;
    }

    function reject(address _admin) external onlyOwner {
        authorized[_admin] = false;
    }

    function addToWhitelist(address _beneficiary) external onlyAuthorized {
        whitelist[_beneficiary] = true;
        emit UserAllowed(_beneficiary);
    }

    /*function addManyToWhitelist(address[] _beneficiaries) external onlyAuthorized {
        for (uint i = 0; i < _beneficiaries.length; i++) {
            whitelist[_beneficiaries[i]] = true;
            UserAllowed(_beneficiaries[i]);
        }
    }*/

    function removeFromWhitelist(address _beneficiary) external onlyAuthorized {
        whitelist[_beneficiary] = false;
        emit UserDisallowed(_beneficiary);
    }

    function isWhitelisted(address _beneficiary) public view returns (bool) {
        return whitelist[_beneficiary];
    }
}

contract BaseCrowdsale is AllowanceCrowdsale, PostDeliveryCrowdsale, Ownable {
    Whitelist public whitelist;

    uint public tokensSold = 0;
    uint public deliveryTime;
    uint public limit;

    modifier onlyWhitelisted(address _beneficiary) {
        require(whitelist.isWhitelisted(_beneficiary));
        _;
    }

    // Token constructed explicitly.
    // Whitelist constructed explicitly.
    constructor(address _tokenWallet, address payable _wallet, uint _rate, uint _openingTime, uint _closingTime, uint _deliveryTime, uint _limit)
        public Crowdsale(_rate, _wallet) AllowanceCrowdsale(_tokenWallet) TimedCrowdsale(_openingTime, _closingTime) {
        require(now < _deliveryTime);
        require(_limit > 0);
        require(_deliveryTime < now + 100 days);

        whitelist = new Whitelist();
        require(address(whitelist) != address(0));

        deliveryTime = _deliveryTime;
        limit = _limit;

        _init();
    }

    function withdrawTokens() public {
        require(now >= deliveryTime);
        super.withdrawTokens();
    }

    function _init() internal {}

    function _preValidatePurchase(address _beneficiary, uint _weiAmount) internal onlyWhitelisted(_beneficiary) {
        super._preValidatePurchase(_beneficiary, _weiAmount);
    }

    function _processPurchase(address _beneficiary, uint _tokenAmount) internal {
        tokensSold = tokensSold.add(_tokenAmount);
        require(limit >= tokensSold);

        PostDeliveryCrowdsale._processPurchase(_beneficiary, _tokenAmount);
    }
}

contract PresaleCrowdsale is BaseCrowdsale {
    uint public constant PHASE1_RATE = 7500;
    uint public constant PHASE2_RATE = 6900;
    uint public constant PHASE3_RATE = 6300;

    // Scaled.
    uint public constant PHASE1_CAP = 30000000;
    uint public constant PHASE2_CAP = 40000000;
    uint public constant PHASE3_CAP = 80000000;

    uint public constant PHASE1_LIMIT = PHASE1_CAP;
    uint public constant PHASE2_LIMIT = PHASE1_CAP + PHASE2_CAP;
    uint public constant PHASE3_LIMIT = PHASE1_CAP + PHASE2_CAP + PHASE3_CAP;

    enum PhaseId {Phase1, Phase2, Phase3}

    struct Phase {
        uint rate;
        uint cap;
        uint limit;
    }

    // Phase[] public phases;
    Phase public phases_0;
    Phase public phases_1;
    Phase public phases_2;

    // Token constructed explicitly.
    // Whitelist constructed explicitly.
    constructor(address _tokenWallet, address payable _wallet, uint _openingTime, uint _closingTime, uint _deliveryTime)
        public BaseCrowdsale(_tokenWallet, _wallet, PHASE1_RATE, _openingTime, _closingTime, _deliveryTime, PHASE3_LIMIT) {}

    function getPhase() public view returns (uint) {
        return uint(_getPhase());
    }

    // Inlined array indices.
    function getPhaseRate(PhaseId _phase) public view returns (uint) {
        // uint rate = phases[uint(_phase)].rate;
        // assert(rate > 0);
        // return rate;
        if (uint(_phase) == 0) {
            uint rate = phases_0.rate;
            assert(rate > 0);
            return rate;
        }
        else if (uint(_phase) == 1) {
            uint rate = phases_1.rate;
            assert(rate > 0);
            return rate;
        }
        else if (uint(_phase) == 2) {
            uint rate = phases_2.rate;
            assert(rate > 0);
            return rate;
        }
        else {
            assert(false);
            return 0;
        }
    }

    // Inlined array indices.
    function getPhaseCap(PhaseId _phase) public view returns (uint) {
        // uint cap = phases[uint(_phase)].cap;
        // assert(cap > 0);
        // return cap;
        if (uint(_phase) == 0) {
            uint cap = phases_0.cap;
            assert(cap > 0);
            return cap;
        }
        else if (uint(_phase) == 1) {
            uint cap = phases_1.cap;
            assert(cap > 0);
            return cap;
        }
        else if (uint(_phase) == 2) {
            uint cap = phases_2.cap;
            assert(cap > 0);
            return cap;
        }
        else {
            assert(false);
            return 0;
        }
    }

    function _init() internal {
        super._init();

        // phases.push(Phase(PHASE1_RATE, PHASE1_CAP, PHASE1_LIMIT));
        phases_0 = Phase(PHASE1_RATE, PHASE1_CAP, PHASE1_LIMIT);
        // phases.push(Phase(PHASE2_RATE, PHASE2_CAP, PHASE2_LIMIT));
        phases_1 = Phase(PHASE2_RATE, PHASE2_CAP, PHASE2_LIMIT);
        // phases.push(Phase(PHASE3_RATE, PHASE3_CAP, PHASE3_LIMIT));
        phases_2 = Phase(PHASE3_RATE, PHASE3_CAP, PHASE3_LIMIT);
    }

    function _getPhase() internal view returns (PhaseId) {
        if (tokensSold <= _getPhaseUpperLimit(PhaseId.Phase1)) {
            return PhaseId.Phase1;
        } else if (tokensSold <= _getPhaseUpperLimit(PhaseId.Phase2)) {
            return PhaseId.Phase2;
        } else {
            assert(tokensSold <= _getPhaseUpperLimit(PhaseId.Phase3));
            return PhaseId.Phase3;
        }
    }

    // Inlined array indices.
    function _getPhaseUpperLimit(PhaseId _phase) internal view returns (uint) {
        // uint limit = phases[uint(_phase)].limit;
        // assert(limit > 0);
        // return limit;
        if (uint(_phase) == 0) {
            uint limit = phases_0.limit;
            assert(limit > 0);
            return limit;
        }
        else if (uint(_phase) == 1) {
            uint limit = phases_1.limit;
            assert(limit > 0);
            return limit;
        }
        else if (uint(_phase) == 2) {
            uint limit = phases_2.limit;
            assert(limit > 0);
            return limit;
        }
        else {
            assert(false);
            return 0;
        }
    }

    function _getTokenAmount(uint _weiAmount) internal view returns (uint) {
        PhaseId currentPhase = _getPhase();
        return _calcTokenAmount(currentPhase, _weiAmount, tokensSold);
    }

    function _calcTokenAmount(PhaseId _phase, uint _weiAmount, uint _tokensSold) private view returns (uint tokensBought) {
        if (_phase == PhaseId.Phase1) {
            return _calcTokenAmount_1(_weiAmount, _tokensSold);
        }
        else if (_phase == PhaseId.Phase2) {
            return _calcTokenAmount_2(_weiAmount, _tokensSold);
        }
        else if (_phase == PhaseId.Phase3) {
            return _calcTokenAmount_3(_weiAmount, _tokensSold);
        }
        else {
            assert(false);
            return 0;
        }
    }
    function _calcTokenAmount_1(uint _weiAmount, uint _tokensSold) private view returns (uint tokensBought) {
        PhaseId _phase = PhaseId.Phase1;
        uint rate = getPhaseRate(_phase);

        tokensBought = rate.mul(_weiAmount);

        if (_tokensSold.add(tokensBought) > _getPhaseUpperLimit(_phase)) {
            uint tokens = _getPhaseUpperLimit(_phase).sub(_tokensSold);

            // PhaseId nextPhase = PhaseId(uint(_phase) + 1);
            // tokensBought = _calcTokenAmount(_phase, _weiAmount.sub(tokens.div(rate)), _tokensSold.add(tokens));
            tokensBought = _calcTokenAmount_2(_weiAmount.sub(tokens.div(rate)), _tokensSold.add(tokens));

            tokensBought = tokensBought.add(tokens);
        }

        return tokensBought;
    }
    function _calcTokenAmount_2(uint _weiAmount, uint _tokensSold) private view returns (uint tokensBought) {
        PhaseId _phase = PhaseId.Phase2;
        uint rate = getPhaseRate(_phase);

        tokensBought = rate.mul(_weiAmount);

        if (_tokensSold.add(tokensBought) > _getPhaseUpperLimit(_phase)) {
            uint tokens = _getPhaseUpperLimit(_phase).sub(_tokensSold);

            // PhaseId nextPhase = PhaseId(uint(_phase) + 1);
            // tokensBought = _calcTokenAmount(_phase, _weiAmount.sub(tokens.div(rate)), _tokensSold.add(tokens));
            tokensBought = _calcTokenAmount_3(_weiAmount.sub(tokens.div(rate)), _tokensSold.add(tokens));

            tokensBought = tokensBought.add(tokens);
        }

        return tokensBought;
    }
    function _calcTokenAmount_3(uint _weiAmount, uint _tokensSold) private view returns (uint tokensBought) {
        PhaseId _phase = PhaseId.Phase2;
        uint rate = getPhaseRate(_phase);

        tokensBought = rate.mul(_weiAmount);

        if (_tokensSold.add(tokensBought) > _getPhaseUpperLimit(_phase)) {
            uint tokens = _getPhaseUpperLimit(_phase).sub(_tokensSold);

            // PhaseId nextPhase = PhaseId(uint(_phase) + 1);
            // tokensBought = _calcTokenAmount(_phase, _weiAmount.sub(tokens.div(rate)), _tokensSold.add(tokens));
            require(false);

            tokensBought = tokensBought.add(tokens);
        }

        return tokensBought;
    }
}

contract ICOCrowdsale is BaseCrowdsale {
    // Scaled.
    uint public constant RATE = 6000;
    uint public constant MAX_LIMIT = 450000000;

    // Token constructed explicitly.
    // Whitelist constructed explicitly.
    constructor(address _tokenWallet, address payable _wallet, uint _openingTime, uint _closingTime, uint _deliveryTime)
    	public BaseCrowdsale(_tokenWallet, _wallet, RATE, _openingTime, _closingTime, _deliveryTime, MAX_LIMIT) {}
}

