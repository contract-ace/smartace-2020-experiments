#pragma once
#include "primitive.h"
void run_model(void);
sol_uint256_t sol_pay(sol_uint256_t *bal, sol_uint256_t amt);
uint8_t sol_send(sol_address_t sender, sol_uint256_t value,
                 sol_uint256_t blocknum, sol_uint256_t timestamp,
                 sol_bool_t paid, sol_address_t origin, sol_address_t src,
                 sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt);
void sol_transfer(sol_address_t sender, sol_uint256_t value,
                  sol_uint256_t blocknum, sol_uint256_t timestamp,
                  sol_bool_t paid, sol_address_t origin, sol_address_t src,
                  sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt);
struct Map_4;
struct Map_5;
struct Whitelist;
struct Map_2;
struct Map_1;
struct VUToken;
struct PresaleCrowdsale_Struct_Phase;
struct Map_3;
struct PresaleCrowdsale;
void PresaleCrowdsale_Constructor(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___tokenWallet,
    sol_address_t func_user___wallet, sol_uint256_t func_user___openingTime,
    sol_uint256_t func_user___closingTime,
    sol_uint256_t func_user___deliveryTime);
void BaseCrowdsale_Constructor_For_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___tokenWallet,
    sol_address_t func_user___wallet, sol_uint256_t func_user___rate,
    sol_uint256_t func_user___openingTime,
    sol_uint256_t func_user___closingTime,
    sol_uint256_t func_user___deliveryTime, sol_uint256_t func_user___limit);
void Crowdsale_Constructor_For_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___rate,
    sol_address_t func_user___wallet);
void Init_Crowdsale_For_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user___rate,
    sol_address_t user___wallet);
void AllowanceCrowdsale_Constructor_For_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___tokenWallet);
void Init_AllowanceCrowdsale_For_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t user___tokenWallet);
void TimedCrowdsale_Constructor_For_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___openingTime,
    sol_uint256_t func_user___closingTime);
void Init_TimedCrowdsale_For_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user___openingTime,
    sol_uint256_t user___closingTime);
void Init_PostDeliveryCrowdsale_For_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Ownable_Constructor_For_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_Ownable_For_PresaleCrowdsale(struct PresaleCrowdsale *self,
                                       sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin);
void Init_BaseCrowdsale_For_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t user___tokenWallet,
    sol_address_t user___wallet, sol_uint256_t user___rate,
    sol_uint256_t user___openingTime, sol_uint256_t user___closingTime,
    sol_uint256_t user___deliveryTime, sol_uint256_t user___limit);
void Init_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t user___tokenWallet,
    sol_address_t user___wallet, sol_uint256_t user___openingTime,
    sol_uint256_t user___closingTime, sol_uint256_t user___deliveryTime);
void Crowdsale_Fallback_For_PresaleCrowdsale(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t PresaleCrowdsale_Method_getPhase(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t PresaleCrowdsale_Method_getPhaseRate(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint8_t func_user___phase);
sol_uint256_t PresaleCrowdsale_Method_getPhaseCap(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint8_t func_user___phase);
void PostDeliveryCrowdsale_Method_For_PresaleCrowdsale_withdrawTokens(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void BaseCrowdsale_Method_For_PresaleCrowdsale_withdrawTokens(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Ownable_Method_1_For_PresaleCrowdsale_transferOwnership(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner);
void Ownable_Method_For_PresaleCrowdsale_transferOwnership(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner);
sol_bool_t TimedCrowdsale_Method_For_PresaleCrowdsale_hasClosed(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t AllowanceCrowdsale_Method_For_PresaleCrowdsale_remainingTokens(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Crowdsale_Method_For_PresaleCrowdsale_buyTokens(
    struct PresaleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary);
void Ownable_Constructor_For_Whitelist(struct Whitelist *self,
                                       sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin);
void Init_Ownable_For_Whitelist(struct Whitelist *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin);
void Init_Whitelist(struct Whitelist *self, sol_address_t sender,
                    sol_uint256_t value, sol_uint256_t blocknum,
                    sol_uint256_t timestamp, sol_bool_t paid,
                    sol_address_t origin);
void Whitelist_Method_1_authorize(struct Whitelist *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin,
                                  sol_address_t func_user___admin);
void Whitelist_Method_authorize(struct Whitelist *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin,
                                sol_address_t func_model___admin);
void Whitelist_Method_1_reject(struct Whitelist *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin,
                               sol_address_t func_user___admin);
void Whitelist_Method_reject(struct Whitelist *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin,
                             sol_address_t func_model___admin);
void Whitelist_Method_1_addToWhitelist(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary);
void Whitelist_Method_addToWhitelist(struct Whitelist *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin,
                                     sol_address_t func_model___beneficiary);
void Whitelist_Method_1_removeFromWhitelist(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary);
void Whitelist_Method_removeFromWhitelist(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___beneficiary);
sol_bool_t Whitelist_Method_isWhitelisted(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary);
void Ownable_Method_1_For_Whitelist_transferOwnership(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner);
void Ownable_Method_For_Whitelist_transferOwnership(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner);
void VUToken_Constructor(struct VUToken *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin);
void DetailedERC20_Constructor_For_VUToken(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___name,
    sol_uint256_t func_user___symbol, sol_uint8_t func_user___decimals);
void Init_ERC20Basic_For_VUToken(struct VUToken *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin);
void Init_ERC20_For_VUToken(struct VUToken *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin);
void Init_DetailedERC20_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin,
                                    sol_uint256_t user___name,
                                    sol_uint256_t user___symbol,
                                    sol_uint8_t user___decimals);
void Init_BasicToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin);
void Init_BurnableToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin);
void Init_StandardToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin);
void Ownable_Constructor_For_VUToken(struct VUToken *self, sol_address_t sender,
                                     sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin);
void Init_Ownable_For_VUToken(struct VUToken *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin);
void Init_Pausable_For_VUToken(struct VUToken *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin);
void Init_PausableToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin);
void Init_VUToken(struct VUToken *self, sol_address_t sender,
                  sol_uint256_t value, sol_uint256_t blocknum,
                  sol_uint256_t timestamp, sol_bool_t paid,
                  sol_address_t origin);
sol_bool_t BasicToken_Method_For_VUToken_transfer(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_1_For_VUToken_transfer(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_For_VUToken_transfer(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value);
sol_bool_t StandardToken_Method_For_VUToken_transferFrom(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_1_For_VUToken_transferFrom(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_For_VUToken_transferFrom(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value);
sol_bool_t StandardToken_Method_For_VUToken_approve(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_1_For_VUToken_approve(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_For_VUToken_approve(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___value);
sol_bool_t StandardToken_Method_For_VUToken_increaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue);
sol_bool_t PausableToken_Method_1_For_VUToken_increaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue);
sol_bool_t PausableToken_Method_For_VUToken_increaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___addedValue);
sol_bool_t StandardToken_Method_For_VUToken_decreaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue);
sol_bool_t PausableToken_Method_1_For_VUToken_decreaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue);
sol_bool_t PausableToken_Method_For_VUToken_decreaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___subtractedValue);
void Pausable_Method_2_For_VUToken_pause(struct VUToken *self,
                                         sol_address_t sender,
                                         sol_uint256_t value,
                                         sol_uint256_t blocknum,
                                         sol_uint256_t timestamp,
                                         sol_bool_t paid, sol_address_t origin);
void Pausable_Method_1_For_VUToken_pause(struct VUToken *self,
                                         sol_address_t sender,
                                         sol_uint256_t value,
                                         sol_uint256_t blocknum,
                                         sol_uint256_t timestamp,
                                         sol_bool_t paid, sol_address_t origin);
void Pausable_Method_For_VUToken_pause(struct VUToken *self,
                                       sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin);
void Pausable_Method_2_For_VUToken_unpause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Pausable_Method_1_For_VUToken_unpause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Pausable_Method_For_VUToken_unpause(struct VUToken *self,
                                         sol_address_t sender,
                                         sol_uint256_t value,
                                         sol_uint256_t blocknum,
                                         sol_uint256_t timestamp,
                                         sol_bool_t paid, sol_address_t origin);
void Ownable_Method_1_For_VUToken_transferOwnership(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner);
void Ownable_Method_For_VUToken_transferOwnership(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner);
sol_uint256_t StandardToken_Method_For_VUToken_allowance(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner,
    sol_address_t func_user___spender);
void BurnableToken_Method_For_VUToken_burn(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___value);
sol_uint256_t BasicToken_Method_For_VUToken_totalSupply(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t BasicToken_Method_For_VUToken_balanceOf(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner);