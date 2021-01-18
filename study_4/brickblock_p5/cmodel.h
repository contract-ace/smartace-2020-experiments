#pragma once
#include "primitive.h"
void run_model(void);
struct Map_2;
struct Map_1;
struct BrickblockToken;
void BrickblockToken_Constructor(struct BrickblockToken *self,
                                 sol_address_t sender, sol_uint256_t value,
                                 sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin,
                                 sol_address_t func_user___predecessorAddress);
void Init_ERC20Basic_For_BrickblockToken(struct BrickblockToken *self,
                                         sol_address_t sender,
                                         sol_uint256_t value,
                                         sol_uint256_t blocknum,
                                         sol_uint256_t timestamp,
                                         sol_bool_t paid, sol_address_t origin);
void Init_ERC20_For_BrickblockToken(struct BrickblockToken *self,
                                    sol_address_t sender, sol_uint256_t value,
                                    sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin);
void Init_BasicToken_For_BrickblockToken(struct BrickblockToken *self,
                                         sol_address_t sender,
                                         sol_uint256_t value,
                                         sol_uint256_t blocknum,
                                         sol_uint256_t timestamp,
                                         sol_bool_t paid, sol_address_t origin);
void Init_StandardToken_For_BrickblockToken(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Ownable_Constructor_For_BrickblockToken(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_Ownable_For_BrickblockToken(struct BrickblockToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin);
void Init_Pausable_For_BrickblockToken(struct BrickblockToken *self,
                                       sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin);
void Init_PausableToken_For_BrickblockToken(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_BrickblockToken(struct BrickblockToken *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin,
                          sol_address_t user___predecessorAddress);
void BrickblockToken_Fallback(struct BrickblockToken *self,
                              sol_address_t sender, sol_uint256_t value,
                              sol_uint256_t blocknum, sol_uint256_t timestamp,
                              sol_bool_t paid, sol_address_t origin);
void Pausable_Method_2_For_BrickblockToken_unpause(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Pausable_Method_1_For_BrickblockToken_unpause(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Pausable_Method_For_BrickblockToken_unpause(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void BrickblockToken_Method_2_unpause(struct BrickblockToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin);
void BrickblockToken_Method_1_unpause(struct BrickblockToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin);
void BrickblockToken_Method_unpause(struct BrickblockToken *self,
                                    sol_address_t sender, sol_uint256_t value,
                                    sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin);
sol_bool_t BrickblockToken_Method_1_changeBonusDistributionAddress(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___newAddress);
sol_bool_t BrickblockToken_Method_changeBonusDistributionAddress(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___newAddress);
sol_bool_t BrickblockToken_Method_1_changeFountainContractAddress(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___newAddress);
sol_bool_t BrickblockToken_Method_changeFountainContractAddress(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___newAddress);
sol_bool_t BrickblockToken_Method_2_distributeTokens(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___contributor,
    sol_uint256_t func_user___value);
sol_bool_t BrickblockToken_Method_1_distributeTokens(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___contributor,
    sol_uint256_t func_model___value);
sol_bool_t BrickblockToken_Method_distributeTokens(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___contributor,
    sol_uint256_t func_model___value);
sol_bool_t BrickblockToken_Method_1_finalizeTokenSale(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t BrickblockToken_Method_finalizeTokenSale(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t BrickblockToken_Method_1_evacuate(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___user);
sol_bool_t BrickblockToken_Method_evacuate(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___user);
sol_bool_t BrickblockToken_Method_1_upgrade(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___successorAddress);
sol_bool_t BrickblockToken_Method_upgrade(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___successorAddress);
sol_bool_t BrickblockToken_Method_rescue(struct BrickblockToken *self,
                                         sol_address_t sender,
                                         sol_uint256_t value,
                                         sol_uint256_t blocknum,
                                         sol_uint256_t timestamp,
                                         sol_bool_t paid, sol_address_t origin);
sol_bool_t BasicToken_Method_For_BrickblockToken_transfer(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_1_For_BrickblockToken_transfer(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_For_BrickblockToken_transfer(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value);
sol_bool_t StandardToken_Method_For_BrickblockToken_transferFrom(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_1_For_BrickblockToken_transferFrom(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_For_BrickblockToken_transferFrom(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value);
sol_bool_t StandardToken_Method_For_BrickblockToken_approve(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_1_For_BrickblockToken_approve(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_For_BrickblockToken_approve(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___value);
sol_bool_t StandardToken_Method_For_BrickblockToken_increaseApproval(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue);
sol_bool_t PausableToken_Method_1_For_BrickblockToken_increaseApproval(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue);
sol_bool_t PausableToken_Method_For_BrickblockToken_increaseApproval(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___addedValue);
sol_bool_t StandardToken_Method_For_BrickblockToken_decreaseApproval(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue);
sol_bool_t PausableToken_Method_1_For_BrickblockToken_decreaseApproval(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue);
sol_bool_t PausableToken_Method_For_BrickblockToken_decreaseApproval(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___subtractedValue);
void Pausable_Method_2_For_BrickblockToken_pause(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Pausable_Method_1_For_BrickblockToken_pause(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Pausable_Method_For_BrickblockToken_pause(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Ownable_Method_1_For_BrickblockToken_transferOwnership(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner);
void Ownable_Method_For_BrickblockToken_transferOwnership(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner);
sol_uint256_t StandardToken_Method_For_BrickblockToken_allowance(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner,
    sol_address_t func_user___spender);
sol_uint256_t BasicToken_Method_For_BrickblockToken_balanceOf(
    struct BrickblockToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner);