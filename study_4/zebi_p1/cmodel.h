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
struct Map_2;
struct Map_1;
struct ZebiCoin;
struct Map_3;
struct Map_4;
struct ZebiCoinCrowdsale;
void ZebiCoinCrowdsale_Constructor(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___startTime,
    sol_uint256_t func_user___endTime, sol_uint256_t func_user___rate,
    sol_address_t func_user___wallet, sol_uint256_t func_user___minTransAmount,
    sol_uint256_t func_user___mintedTokensCap);
void ZCrowdsale_Constructor_For_ZebiCoinCrowdsale(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___startTime,
    sol_uint256_t func_user___endTime, sol_uint256_t func_user___ETHtoZCOrate,
    sol_address_t func_user___wallet, sol_uint256_t func_user___minTransAmount,
    sol_uint256_t func_user___mintedTokensCap);
void Ownable_Constructor_For_ZebiCoinCrowdsale(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_Ownable_For_ZebiCoinCrowdsale(struct ZebiCoinCrowdsale *self,
                                        sol_address_t sender,
                                        sol_uint256_t value,
                                        sol_uint256_t blocknum,
                                        sol_uint256_t timestamp,
                                        sol_bool_t paid, sol_address_t origin);
void Init_ZCrowdsale_For_ZebiCoinCrowdsale(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user___startTime,
    sol_uint256_t user___endTime, sol_uint256_t user___ETHtoZCOrate,
    sol_address_t user___wallet, sol_uint256_t user___minTransAmount,
    sol_uint256_t user___mintedTokensCap);
void Init_ZebiCoinCrowdsale(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user___startTime,
    sol_uint256_t user___endTime, sol_uint256_t user___rate,
    sol_address_t user___wallet, sol_uint256_t user___minTransAmount,
    sol_uint256_t user___mintedTokensCap);
void ZCrowdsale_Fallback_For_ZebiCoinCrowdsale(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_finishMint(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_finishMint(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_resumeMint(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_resumeMint(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_startTransfer(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_startTransfer(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_endTransfer(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_endTransfer(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_transferTokenOwnership(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_transferTokenOwnership(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_owner);
sol_bool_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_viewCancelledList(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_participant);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_buyTokens(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary);
sol_uint256_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_getTokenAmount(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_weiAmount);
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_enableRefundPeriod(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_enableRefundPeriod(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_disableRefundPeriod(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_disableRefundPeriod(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_emergencyStop(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_emergencyStop(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_release(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_release(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_viewContribution(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_participant);
void ZCrowdsale_Method_2_For_ZebiCoinCrowdsale_refund(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_refund(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_refund(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_forcedRefund(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_forcedRefund(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_takeEth(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_withdraw(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___value);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_withdraw(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_model___value);
sol_bool_t ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_addCancellation(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___participant);
sol_bool_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_addCancellation(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___participant);
void Ownable_Method_1_For_ZebiCoinCrowdsale_transferOwnership(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner);
void Ownable_Method_For_ZebiCoinCrowdsale_transferOwnership(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner);
void Init_ERC20Basic_For_ZebiCoin(struct ZebiCoin *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin);
void Init_ERC20_For_ZebiCoin(struct ZebiCoin *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin);
void Init_BasicToken_For_ZebiCoin(struct ZebiCoin *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin);
void Init_StandardToken_For_ZebiCoin(struct ZebiCoin *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin);
void Ownable_Constructor_For_ZebiCoin(struct ZebiCoin *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin);
void Init_Ownable_For_ZebiCoin(struct ZebiCoin *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin);
void Init_MintableToken_For_ZebiCoin(struct ZebiCoin *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin);
void Init_ZebiCoin(struct ZebiCoin *self, sol_address_t sender,
                   sol_uint256_t value, sol_uint256_t blocknum,
                   sol_uint256_t timestamp, sol_bool_t paid,
                   sol_address_t origin);
sol_bool_t MintableToken_Method_2_For_ZebiCoin_mint(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___amount);
sol_bool_t MintableToken_Method_1_For_ZebiCoin_mint(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___amount);
sol_bool_t MintableToken_Method_For_ZebiCoin_mint(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___amount);
sol_bool_t MintableToken_Method_2_For_ZebiCoin_finishMinting(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t MintableToken_Method_1_For_ZebiCoin_finishMinting(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t MintableToken_Method_For_ZebiCoin_finishMinting(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t MintableToken_Method_1_For_ZebiCoin_resumeMinting(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t MintableToken_Method_For_ZebiCoin_resumeMinting(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t MintableToken_Method_1_For_ZebiCoin_burn(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from);
sol_bool_t MintableToken_Method_For_ZebiCoin_burn(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from);
void MintableToken_Method_1_For_ZebiCoin_startTransfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void MintableToken_Method_For_ZebiCoin_startTransfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void MintableToken_Method_1_For_ZebiCoin_endTransfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void MintableToken_Method_For_ZebiCoin_endTransfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t BasicToken_Method_For_ZebiCoin_transfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t MintableToken_Method_For_ZebiCoin_transfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t StandardToken_Method_For_ZebiCoin_transferFrom(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t MintableToken_Method_For_ZebiCoin_transferFrom(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
void Ownable_Method_1_For_ZebiCoin_transferOwnership(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner);
void Ownable_Method_For_ZebiCoin_transferOwnership(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner);
sol_bool_t StandardToken_Method_For_ZebiCoin_approve(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value);
sol_uint256_t StandardToken_Method_For_ZebiCoin_allowance(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner,
    sol_address_t func_user___spender);
sol_bool_t StandardToken_Method_For_ZebiCoin_increaseApproval(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue);
sol_bool_t StandardToken_Method_For_ZebiCoin_decreaseApproval(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue);
sol_uint256_t BasicToken_Method_For_ZebiCoin_totalSupply(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t BasicToken_Method_For_ZebiCoin_balanceOf(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner);