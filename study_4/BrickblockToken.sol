// After manual preprocessing.
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

contract ERC20Basic {
  uint256 public totalSupply;
  function balanceOf(address who) public view returns (uint256);
  function transfer(address to, uint256 value) public returns (bool);
  event Transfer(address indexed from, address indexed to, uint256 value);
}

contract BasicToken is ERC20Basic {
  using SafeMath for uint256;

  mapping(address => uint256) balances;

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

contract ERC20 is ERC20Basic {
  function allowance(address owner, address spender) public view returns (uint256);
  function transferFrom(address from, address to, uint256 value) public returns (bool);
  function approve(address spender, uint256 value) public returns (bool);
  event Approval(address indexed owner, address indexed spender, uint256 value);
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

contract BrickblockToken is PausableToken {
  string public constant name = "BrickblockToken";
  string public constant symbol = "BBK";
  // Reduced to 64 bits.
  uint256 public constant initialSupply = 50000000000000000;
  uint8 public constant contributorsShare = 51;
  uint8 public constant companyShare = 35;
  uint8 public constant bonusShare = 14;
  // Reduced accordingly.
  uint8 public constant decimals = 8;
  address public bonusDistributionAddress;
  address public fountainContractAddress;
  address public successorAddress;
  address public predecessorAddress;
  bool public tokenSaleActive;
  bool public dead;

  event TokenSaleFinished(uint256 totalSupply, uint256 distributedTokens,  uint256 bonusTokens, uint256 companyTokens);
  event Burn(address indexed burner, uint256 value);
  event Upgrade(address successorAddress);
  event Evacuated(address user);
  event Rescued(address user, uint256 rescuedBalance, uint256 newBalance);

  modifier only(address caller) {
    require(msg.sender == caller);
    _;
  }

  modifier supplyAvailable(uint256 _value) {
    uint256 _distributedTokens = initialSupply.sub(balances[address(this)]);
    uint256 _maxDistributedAmount = initialSupply.mul(contributorsShare).div(100);
    require(_distributedTokens.add(_value) <= _maxDistributedAmount);
    _;
  }

  constructor(address _predecessorAddress) public {
    paused = true;

    // From deployer.
    require(_predecessorAddress == address(0), "Deployer");

    if (_predecessorAddress != address(0)) {
      // VerX considers the case where _predecessorAddress = address(0).
      // SmartACE does not support some instructions in the _predecessorAddress != address(0).
      // Since it is never executed, it has been elided.
      assert(false);
    } else {
      totalSupply = initialSupply;
      balances[address(this)] = initialSupply;
      emit Transfer(address(0), address(this), initialSupply);
      tokenSaleActive = true;
    }
  }

  function unpause() public onlyOwner whenPaused {
    require(dead == false);
    super.unpause();
  }

  // Unsupported by SmartACE.
  // However, SmartACE uses an abstract address domain.
  // In effect, this code is a no-op.
  /*function isContract(address addr) private view returns (bool) {
    uint _size;
    assembly { _size := extcodesize(addr) }
    return _size > 0;
  }*/

  function changeBonusDistributionAddress(address _newAddress) public onlyOwner returns (bool) {
    require(_newAddress != address(this));
    bonusDistributionAddress = _newAddress;
    return true;
  }

  function changeFountainContractAddress(address _newAddress) public onlyOwner returns (bool) {
    // require(isContract(_newAddress));
    require(_newAddress != address(this));
    require(_newAddress != owner);
    fountainContractAddress = _newAddress;
    return true;
  }

  function distributeTokens(address _contributor, uint256 _value) public onlyOwner supplyAvailable(_value) returns (bool) {
    require(tokenSaleActive == true);
    require(_contributor != address(0));
    require(_contributor != owner);
    balances[address(this)] = balances[address(this)].sub(_value);
    balances[_contributor] = balances[_contributor].add(_value);
    emit Transfer(address(this), _contributor, _value);
    return true;
  }

  function finalizeTokenSale() public onlyOwner returns (bool) {
    require(tokenSaleActive == true);
    require(bonusDistributionAddress != address(0));
    require(fountainContractAddress != address(0));

    uint256 _distributedTokens = initialSupply.sub(balances[address(this)]);
    uint256 _companyTokens = initialSupply.mul(companyShare).div(100);
    uint256 _bonusTokens = initialSupply.mul(bonusShare).div(100);
    uint256 _newTotalSupply = _distributedTokens.add(_bonusTokens.add(_companyTokens));
    uint256 _burnAmount = totalSupply.sub(_newTotalSupply);

    balances[address(this)] = balances[address(this)].sub(_bonusTokens);
    balances[bonusDistributionAddress] = balances[bonusDistributionAddress].add(_bonusTokens);
    emit Transfer(address(this), bonusDistributionAddress, _bonusTokens);

    balances[address(this)] = balances[address(this)].sub(_burnAmount);
    emit Burn(address(this), _burnAmount);

    allowed[address(this)][fountainContractAddress] = _companyTokens;
    emit Approval(address(this), fountainContractAddress, _companyTokens);

    totalSupply = _newTotalSupply;
    tokenSaleActive = false;
    emit TokenSaleFinished(totalSupply, _distributedTokens, _bonusTokens, _companyTokens);
    return true;
  }

  function evacuate(address _user) public only(successorAddress) returns (bool) {
    require(dead);
    uint256 _balance = balances[_user];
    balances[_user] = 0;
    totalSupply = totalSupply.sub(_balance);
    emit Evacuated(_user);
    return true;
  }

  function upgrade(address _successorAddress) public onlyOwner returns (bool) {
    require(_successorAddress != address(0));
    // require(isContract(_successorAddress));
    successorAddress = _successorAddress;
    dead = true;
    paused = true;
    emit Upgrade(successorAddress);
    return true;
  }

  function rescue() public returns (bool) {
    require(predecessorAddress != address(0));
    // Once again, this code is not supported by SmartACE.
    // Since it is never executed, it has been elided.
    assert(false);
    return false;
  }

  function() external {
    revert();
  }
}

