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
struct Map_3;
struct Roles_Struct_Role;
struct Map_1;
struct Map_2;
struct SampleCrowdsaleToken;
struct Map_4;
struct RefundEscrow;
struct SampleCrowdsale;
void SampleCrowdsale_Constructor(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_openingTime,
    sol_uint256_t func_user_closingTime, sol_uint256_t func_user_rate,
    sol_address_t func_user_wallet, sol_uint256_t func_user_cap,
    sol_uint256_t func_user_goal, sol_address_t func_user_verxSender);
void Crowdsale_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_rate,
    sol_address_t func_user_wallet);
void ReentrancyGuard_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_ReentrancyGuard_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_Crowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user_rate, sol_address_t user_wallet);
void CappedCrowdsale_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_cap);
void Init_CappedCrowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user_cap);
void TimedCrowdsale_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_openingTime,
    sol_uint256_t func_user_closingTime);
void Init_TimedCrowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user_openingTime,
    sol_uint256_t user_closingTime);
void RefundableCrowdsale_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_goal);
void FinalizableCrowdsale_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_FinalizableCrowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_RefundableCrowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user_goal);
void Init_MintedCrowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_SampleCrowdsale(struct SampleCrowdsale *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin, sol_uint256_t user_openingTime,
                          sol_uint256_t user_closingTime,
                          sol_uint256_t user_rate, sol_address_t user_wallet,
                          sol_uint256_t user_cap, sol_uint256_t user_goal,
                          sol_address_t user_verxSender);
void Crowdsale_Fallback_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t RefundableCrowdsale_Method_For_SampleCrowdsale_goal(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void RefundableCrowdsale_Method_For_SampleCrowdsale_claimRefund(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_refundee);
sol_bool_t RefundableCrowdsale_Method_For_SampleCrowdsale_goalReached(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t FinalizableCrowdsale_Method_For_SampleCrowdsale_finalized(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void FinalizableCrowdsale_Method_For_SampleCrowdsale_finalize(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t TimedCrowdsale_Method_For_SampleCrowdsale_openingTime(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t TimedCrowdsale_Method_For_SampleCrowdsale_closingTime(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t TimedCrowdsale_Method_For_SampleCrowdsale_isOpen(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t TimedCrowdsale_Method_For_SampleCrowdsale_hasClosed(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t CappedCrowdsale_Method_For_SampleCrowdsale_cap(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t CappedCrowdsale_Method_For_SampleCrowdsale_capReached(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
struct SampleCrowdsaleToken *Crowdsale_Method_For_SampleCrowdsale_token(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_address_t Crowdsale_Method_For_SampleCrowdsale_wallet(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t Crowdsale_Method_For_SampleCrowdsale_rate(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t Crowdsale_Method_For_SampleCrowdsale_weiRaised(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Crowdsale_Method_1_For_SampleCrowdsale_buyTokens(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary);
void Crowdsale_Method_For_SampleCrowdsale_buyTokens(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_beneficiary);
void SampleCrowdsaleToken_Constructor(struct SampleCrowdsaleToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin);
void ERC20Detailed_Constructor_For_SampleCrowdsaleToken(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_uint256_t func_user_name,
    sol_uint256_t func_user_symbol, sol_uint8_t func_user_decimals);
void Init_ERC20Detailed_For_SampleCrowdsaleToken(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_uint256_t user_name,
    sol_uint256_t user_symbol, sol_uint8_t user_decimals);
void Init_ERC20_For_SampleCrowdsaleToken(struct SampleCrowdsaleToken *self,
                                         sol_address_t sender,
                                         sol_uint256_t value,
                                         sol_uint256_t blocknum,
                                         sol_uint256_t timestamp,
                                         sol_bool_t paid, sol_address_t origin);
void MinterRole_Constructor_For_SampleCrowdsaleToken(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
void Init_MinterRole_For_SampleCrowdsaleToken(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
void Init_ERC20Mintable_For_SampleCrowdsaleToken(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
void Init_SampleCrowdsaleToken(struct SampleCrowdsaleToken *self,
                               sol_address_t sender, sol_uint256_t value,
                               sol_uint256_t blocknum, sol_uint256_t timestamp,
                               sol_bool_t paid, sol_address_t origin);
sol_uint256_t ERC20Detailed_Method_For_SampleCrowdsaleToken_name(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
sol_uint256_t ERC20Detailed_Method_For_SampleCrowdsaleToken_symbol(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
sol_uint8_t ERC20Detailed_Method_For_SampleCrowdsaleToken_decimals(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
sol_bool_t ERC20Mintable_Method_1_For_SampleCrowdsaleToken_mint(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_to,
    sol_uint256_t func_user_value);
sol_bool_t ERC20Mintable_Method_For_SampleCrowdsaleToken_mint(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model_to,
    sol_uint256_t func_model_value);
sol_bool_t MinterRole_Method_For_SampleCrowdsaleToken_isMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_account);
void MinterRole_Method_1_For_SampleCrowdsaleToken_addMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_account);
void MinterRole_Method_For_SampleCrowdsaleToken_addMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model_account);
void MinterRole_Method_For_SampleCrowdsaleToken_renounceMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
sol_uint256_t ERC20_Method_For_SampleCrowdsaleToken_totalSupply(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin);
sol_uint256_t ERC20_Method_For_SampleCrowdsaleToken_balanceOf(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_owner);
sol_uint256_t ERC20_Method_For_SampleCrowdsaleToken_allowance(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_owner,
    sol_address_t func_user_spender);
sol_bool_t ERC20_Method_For_SampleCrowdsaleToken_transfer(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_to,
    sol_uint256_t func_user_value);
sol_bool_t ERC20_Method_For_SampleCrowdsaleToken_approve(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_value);
sol_bool_t ERC20_Method_For_SampleCrowdsaleToken_transferFrom(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_from,
    sol_address_t func_user_to, sol_uint256_t func_user_value);
sol_bool_t ERC20_Method_For_SampleCrowdsaleToken_increaseAllowance(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_addedValue);
sol_bool_t ERC20_Method_For_SampleCrowdsaleToken_decreaseAllowance(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_subtractedValue);
void RefundEscrow_Constructor(struct RefundEscrow *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin,
                              sol_address_t func_user_beneficiary);
void Secondary_Constructor_For_RefundEscrow(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_Secondary_For_RefundEscrow(struct RefundEscrow *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin);
void Init_Escrow_For_RefundEscrow(struct RefundEscrow *self,
                                  sol_address_t sender, sol_uint256_t value,
                                  sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin);
void Init_ConditionalEscrow_For_RefundEscrow(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_RefundEscrow(struct RefundEscrow *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin, sol_address_t user_beneficiary);
sol_uint8_t RefundEscrow_Method_state(struct RefundEscrow *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin);
sol_address_t
RefundEscrow_Method_beneficiary(struct RefundEscrow *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin);
void Escrow_Method_1_For_RefundEscrow_deposit(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_payee);
void Escrow_Method_For_RefundEscrow_deposit(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_payee);
void RefundEscrow_Method_deposit(struct RefundEscrow *self,
                                 sol_address_t sender, sol_uint256_t value,
                                 sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin,
                                 sol_address_t func_user_refundee);
void RefundEscrow_Method_1_close(struct RefundEscrow *self,
                                 sol_address_t sender, sol_uint256_t value,
                                 sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin);
void RefundEscrow_Method_close(struct RefundEscrow *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin);
void RefundEscrow_Method_1_enableRefunds(struct RefundEscrow *self,
                                         sol_address_t sender,
                                         sol_uint256_t value,
                                         sol_uint256_t blocknum,
                                         sol_uint256_t timestamp,
                                         sol_bool_t paid, sol_address_t origin);
void RefundEscrow_Method_enableRefunds(struct RefundEscrow *self,
                                       sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin);
void RefundEscrow_Method_beneficiaryWithdraw(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t RefundEscrow_Method_withdrawalAllowed(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_var0);
void Escrow_Method_1_For_RefundEscrow_withdraw(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_payee);
void Escrow_Method_For_RefundEscrow_withdraw(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_payee);
void ConditionalEscrow_Method_For_RefundEscrow_withdraw(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_payee);
sol_uint256_t Escrow_Method_For_RefundEscrow_depositsOf(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_payee);
sol_address_t Secondary_Method_For_RefundEscrow_primary(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Secondary_Method_1_For_RefundEscrow_transferPrimary(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_recipient);
void Secondary_Method_For_RefundEscrow_transferPrimary(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_recipient);