#pragma once
#include "primitive.h"
void run_model(void);
sol_uint256_t sol_pay(sol_uint256_t *bal, sol_uint256_t amt);
uint8_t sol_send(sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt);
void sol_transfer(sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt);
struct Map_1;
struct Escrow;
struct Crowdsale;
void Crowdsale_Constructor(struct Crowdsale *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin);
void Init_Crowdsale(struct Crowdsale *self, sol_address_t sender,
                    sol_uint256_t value, sol_uint256_t blocknum,
                    sol_uint256_t timestamp, sol_bool_t paid,
                    sol_address_t origin);
void ND_Crowdsale(struct Crowdsale *self);
void Crowdsale_Method_invest(struct Crowdsale *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin);
void Crowdsale_Method_close(struct Crowdsale *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin);
void Escrow_Constructor(struct Escrow *self, sol_address_t sender,
                        sol_uint256_t value, sol_uint256_t blocknum,
                        sol_uint256_t timestamp, sol_bool_t paid,
                        sol_address_t origin, sol_address_t func_user_b);
void Init_Escrow(struct Escrow *self, sol_address_t sender, sol_uint256_t value,
                 sol_uint256_t blocknum, sol_uint256_t timestamp,
                 sol_bool_t paid, sol_address_t origin, sol_address_t user_b);
void ND_Escrow(struct Escrow *self);
void Escrow_Method_1_deposit(struct Escrow *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin, sol_address_t func_user_p);
void Escrow_Method_deposit(struct Escrow *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin, sol_address_t func_model_p);
void Escrow_Method_withdraw(struct Escrow *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin);
void Escrow_Method_claimRefund(struct Escrow *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin, sol_address_t func_user_p);
void Escrow_Method_1_close(struct Escrow *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin);
void Escrow_Method_close(struct Escrow *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin);
void Escrow_Method_1_refund(struct Escrow *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin);
void Escrow_Method_refund(struct Escrow *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin);