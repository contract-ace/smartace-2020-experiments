#pragma once
#include "primitive.h"
void run_model(void);
sol_uint256_t sol_pay(sol_uint256_t *bal, sol_uint256_t amt);
uint8_t sol_send(sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt);
void sol_transfer(sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt);
struct Map_1;
struct Auction;
void Auction_Constructor(struct Auction *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin);
void Init_Auction(struct Auction *self, sol_address_t sender,
                  sol_uint256_t value, sol_uint256_t blocknum,
                  sol_uint256_t timestamp, sol_bool_t paid,
                  sol_address_t origin);
void ND_Auction(struct Auction *self);
void Auction_Method_1_releaseTo(struct Auction *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin,
                                sol_address_t func_user___new);
void Auction_Method_releaseTo(struct Auction *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin,
                              sol_address_t func_model___new);
void Auction_Method_1_open(struct Auction *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin);
void Auction_Method_open(struct Auction *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin);
void Auction_Method_1_close(struct Auction *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin);
void Auction_Method_close(struct Auction *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin);
void Auction_Method_deposit(struct Auction *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin);
void Auction_Method_withdraw(struct Auction *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin);