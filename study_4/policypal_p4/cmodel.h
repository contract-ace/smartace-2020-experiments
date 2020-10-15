#pragma once
#include "primitive.h"
void run_model(void);
sol_uint256_t sol_pay(sol_uint256_t *bal, sol_uint256_t amt);
uint8_t sol_send(sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt);
void sol_transfer(sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt);
struct Map_2;
struct Map_1;
struct PolicyPalNetworkToken;
struct Map_3;
struct Map_4;
struct PolicyPalNetworkCrowdsale;
void PolicyPalNetworkCrowdsale_Constructor_1(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___admin,
    sol_address_t func_user___multiSigWallet,
    sol_uint256_t func_user___totalTokenSupply,
    sol_uint256_t func_user___premintedTokenSupply,
    sol_uint256_t func_user___presaleTokenSupply,
    sol_uint256_t func_user___saleStartTime,
    sol_uint256_t func_user___saleEndTime,
    sol_uint256_t func_user___increaseMaxContribTime,
    sol_uint256_t func_user___rate, sol_uint256_t func_user___minContribution,
    sol_uint256_t func_user___maxContribution);
void PolicyPalNetworkCrowdsale_Constructor(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___admin,
    sol_address_t func_model___multiSigWallet,
    sol_uint256_t func_model___totalTokenSupply,
    sol_uint256_t func_model___premintedTokenSupply,
    sol_uint256_t func_model___presaleTokenSupply,
    sol_uint256_t func_model___saleStartTime,
    sol_uint256_t func_model___saleEndTime,
    sol_uint256_t func_model___increaseMaxContribTime,
    sol_uint256_t func_model___rate, sol_uint256_t func_model___minContribution,
    sol_uint256_t func_model___maxContribution);
void CrowdsaleAuthorizer_Constructor_1_For_PolicyPalNetworkCrowdsale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___admin,
    sol_uint256_t func_user___saleStartTime,
    sol_uint256_t func_user___saleEndTime,
    sol_uint256_t func_user___increaseMaxContribTime,
    sol_uint256_t func_user___minContribution,
    sol_uint256_t func_user___maxContribution);
void CrowdsaleAuthorizer_Constructor_For_PolicyPalNetworkCrowdsale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___admin,
    sol_uint256_t func_model___saleStartTime,
    sol_uint256_t func_model___saleEndTime,
    sol_uint256_t func_model___increaseMaxContribTime,
    sol_uint256_t func_model___minContribution,
    sol_uint256_t func_model___maxContribution);
void Init_CrowdsaleAuthorizer_For_PolicyPalNetworkCrowdsale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t user___admin,
    sol_uint256_t user___saleStartTime, sol_uint256_t user___saleEndTime,
    sol_uint256_t user___increaseMaxContribTime,
    sol_uint256_t user___minContribution, sol_uint256_t user___maxContribution);
void Init_PolicyPalNetworkCrowdsale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t user___admin,
    sol_address_t user___multiSigWallet, sol_uint256_t user___totalTokenSupply,
    sol_uint256_t user___premintedTokenSupply,
    sol_uint256_t user___presaleTokenSupply, sol_uint256_t user___saleStartTime,
    sol_uint256_t user___saleEndTime,
    sol_uint256_t user___increaseMaxContribTime, sol_uint256_t user___rate,
    sol_uint256_t user___minContribution, sol_uint256_t user___maxContribution);
void ND_PolicyPalNetworkCrowdsale(struct PolicyPalNetworkCrowdsale *self);
void PolicyPalNetworkCrowdsale_Fallback(struct PolicyPalNetworkCrowdsale *self,
                                        sol_address_t sender,
                                        sol_uint256_t value,
                                        sol_uint256_t blocknum,
                                        sol_uint256_t timestamp,
                                        sol_bool_t paid, sol_address_t origin);
void PolicyPalNetworkCrowdsale_Method_1_setHaltSale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_bool_t func_user___halt);
void PolicyPalNetworkCrowdsale_Method_setHaltSale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_bool_t func_model___halt);
sol_uint256_t PolicyPalNetworkCrowdsale_Method_2_buy(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___recipient);
sol_uint256_t PolicyPalNetworkCrowdsale_Method_1_buy(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_address_t func_model___recipient);
sol_uint256_t PolicyPalNetworkCrowdsale_Method_buy(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_address_t func_model___recipient);
void CrowdsaleAuthorizer_Method_1_For_PolicyPalNetworkCrowdsale_updateWhitelist(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___user,
    sol_bool_t func_user___allow);
void CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_updateWhitelist(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___user,
    sol_bool_t func_model___allow);
sol_uint256_t
CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_eligibleAmount(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_address_t func_user___contributor, sol_uint256_t func_user___amount);
sol_bool_t CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleStarted(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
sol_bool_t CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleEnded(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
void PolicyPalNetworkToken_Constructor_1(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_uint256_t func_user___tokenTotalAmount,
    sol_address_t func_user___adminAddr);
void PolicyPalNetworkToken_Constructor(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_uint256_t func_model___tokenTotalAmount,
    sol_address_t func_model___adminAddr);
void Init_ERC20Basic_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
void Init_ERC20_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
void Init_BasicToken_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
void Init_StandardToken_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
void Init_BurnableToken_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
void Ownable_Constructor_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
void Init_Ownable_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
void Init_PolicyPalNetworkToken(struct PolicyPalNetworkToken *self,
                                sol_address_t sender, sol_uint256_t value,
                                sol_uint256_t blocknum, sol_uint256_t timestamp,
                                sol_bool_t paid, sol_address_t origin,
                                sol_uint256_t user___tokenTotalAmount,
                                sol_address_t user___adminAddr);
void ND_PolicyPalNetworkToken(struct PolicyPalNetworkToken *self);
void PolicyPalNetworkToken_Method_1_toggleTransferable(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_bool_t func_user___toggle);
void PolicyPalNetworkToken_Method_toggleTransferable(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_bool_t func_model___toggle);
sol_bool_t BasicToken_Method_For_PolicyPalNetworkToken_transfer(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t PolicyPalNetworkToken_Method_2_transfer(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t PolicyPalNetworkToken_Method_1_transfer(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value);
sol_bool_t PolicyPalNetworkToken_Method_transfer(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value);
sol_bool_t StandardToken_Method_For_PolicyPalNetworkToken_transferFrom(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t PolicyPalNetworkToken_Method_2_transferFrom(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t PolicyPalNetworkToken_Method_1_transferFrom(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value);
sol_bool_t PolicyPalNetworkToken_Method_transferFrom(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value);
void BurnableToken_Method_For_PolicyPalNetworkToken_burn(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_uint256_t func_user___value);
void PolicyPalNetworkToken_Method_burn(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_uint256_t func_user___value);
void Ownable_Method_1_For_PolicyPalNetworkToken_transferOwnership(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_newOwner);
void Ownable_Method_For_PolicyPalNetworkToken_transferOwnership(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model_newOwner);
sol_bool_t StandardToken_Method_For_PolicyPalNetworkToken_approve(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value);
sol_uint256_t StandardToken_Method_For_PolicyPalNetworkToken_allowance(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___owner,
    sol_address_t func_user___spender);
sol_bool_t StandardToken_Method_For_PolicyPalNetworkToken_increaseApproval(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue);
sol_bool_t StandardToken_Method_For_PolicyPalNetworkToken_decreaseApproval(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue);
sol_uint256_t BasicToken_Method_For_PolicyPalNetworkToken_totalSupply(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
sol_uint256_t BasicToken_Method_For_PolicyPalNetworkToken_balanceOf(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___owner);