#pragma once
#include "primitive.h"
void run_model(void);
struct Map_2;
struct Map_1;
struct ZilliqaToken;
void ZilliqaToken_Constructor(struct ZilliqaToken *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin,
                              sol_address_t func_user___admin,
                              sol_uint256_t func_user___totalTokenAmount);
void Init_ERC20Basic_For_ZilliqaToken(struct ZilliqaToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin);
void Init_ERC20_For_ZilliqaToken(struct ZilliqaToken *self,
                                 sol_address_t sender, sol_uint256_t value,
                                 sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin);
void Init_BasicToken_For_ZilliqaToken(struct ZilliqaToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin);
void Init_StandardToken_For_ZilliqaToken(struct ZilliqaToken *self,
                                         sol_address_t sender,
                                         sol_uint256_t value,
                                         sol_uint256_t blocknum,
                                         sol_uint256_t timestamp,
                                         sol_bool_t paid, sol_address_t origin);
void Ownable_Constructor_For_ZilliqaToken(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_Ownable_For_ZilliqaToken(struct ZilliqaToken *self,
                                   sol_address_t sender, sol_uint256_t value,
                                   sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin);
void Init_Pausable_For_ZilliqaToken(struct ZilliqaToken *self,
                                    sol_address_t sender, sol_uint256_t value,
                                    sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin);
void Init_PausableToken_For_ZilliqaToken(struct ZilliqaToken *self,
                                         sol_address_t sender,
                                         sol_uint256_t value,
                                         sol_uint256_t blocknum,
                                         sol_uint256_t timestamp,
                                         sol_bool_t paid, sol_address_t origin);
void Init_ZilliqaToken(struct ZilliqaToken *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin, sol_address_t user___admin,
                       sol_uint256_t user___totalTokenAmount);
void ND_ZilliqaToken(struct ZilliqaToken *self);
sol_bool_t BasicToken_Method_For_ZilliqaToken_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_For_ZilliqaToken_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value);
sol_bool_t ZilliqaToken_Method_1_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t ZilliqaToken_Method_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value);
sol_bool_t StandardToken_Method_For_ZilliqaToken_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_For_ZilliqaToken_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value);
sol_bool_t ZilliqaToken_Method_1_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t ZilliqaToken_Method_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value);
sol_bool_t ZilliqaToken_Method_burn(struct ZilliqaToken *self,
                                    sol_address_t sender, sol_uint256_t value,
                                    sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin,
                                    sol_uint256_t func_user___value);
sol_bool_t ZilliqaToken_Method_burnFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_uint256_t func_user___value);
void ZilliqaToken_Method_1_changeAdmin(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newAdmin);
void ZilliqaToken_Method_changeAdmin(struct ZilliqaToken *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin,
                                     sol_address_t func_model_newAdmin);
sol_bool_t StandardToken_Method_For_ZilliqaToken_approve(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_approve(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value);
sol_bool_t PausableToken_Method_For_ZilliqaToken_approve(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___value);
sol_bool_t StandardToken_Method_For_ZilliqaToken_increaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue);
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_increaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue);
sol_bool_t PausableToken_Method_For_ZilliqaToken_increaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___addedValue);
sol_bool_t StandardToken_Method_For_ZilliqaToken_decreaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue);
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_decreaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue);
sol_bool_t PausableToken_Method_For_ZilliqaToken_decreaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___subtractedValue);
void Pausable_Method_1_For_ZilliqaToken_pause(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_bool_t func_user_newPausedPublic,
    sol_bool_t func_user_newPausedOwnerAdmin);
void Pausable_Method_For_ZilliqaToken_pause(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_bool_t func_model_newPausedPublic,
    sol_bool_t func_model_newPausedOwnerAdmin);
void Ownable_Method_1_For_ZilliqaToken_transferOwnership(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner);
void Ownable_Method_For_ZilliqaToken_transferOwnership(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner);
sol_uint256_t StandardToken_Method_For_ZilliqaToken_allowance(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner,
    sol_address_t func_user___spender);
sol_uint256_t BasicToken_Method_For_ZilliqaToken_balanceOf(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner);