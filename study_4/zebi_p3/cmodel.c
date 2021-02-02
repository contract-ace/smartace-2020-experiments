#include "cmodel.h"
sol_raw_uint160_t g_literal_address_0;
sol_uint256_t sol_pay(sol_uint256_t *bal, sol_uint256_t amt) {
  sol_require(((bal)->v) >= ((amt).v), "Insufficient funds to call.");
  ((bal)->v) -= ((amt).v);
  return amt;
}
uint8_t sol_send(sol_address_t sender, sol_uint256_t value,
                 sol_uint256_t blocknum, sol_uint256_t timestamp,
                 sol_bool_t paid, sol_address_t origin, sol_address_t src,
                 sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt) {
  if (((bal)->v) < ((amt).v))
    return 0;
  if (((dst).v) == (0)) {
    return 0;
  }
  if (((dst).v) == (1)) {
    sol_assert(0, "Fallback not allowed in: ZebiCoinCrowdsale");
  }
  if (((dst).v) == (2)) {
    return 0;
  }
  ((bal)->v) -= ((amt).v);
  return GET_ND_BYTE(0, "Return value for send/transfer.");
}
void sol_transfer(sol_address_t sender, sol_uint256_t value,
                  sol_uint256_t blocknum, sol_uint256_t timestamp,
                  sol_bool_t paid, sol_address_t origin, sol_address_t src,
                  sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt) {
  sol_require(sol_send(sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                       origin, src, bal, dst, amt),
              "Transfer failed.");
}
struct Map_2 {
  sol_uint256_t data_0_0;
  sol_uint256_t data_0_1;
  sol_uint256_t data_0_2;
  sol_uint256_t data_0_3;
  sol_uint256_t data_0_4;
  sol_uint256_t data_0_5;
  sol_uint256_t data_0_6;
  sol_uint256_t data_1_0;
  sol_uint256_t data_1_1;
  sol_uint256_t data_1_2;
  sol_uint256_t data_1_3;
  sol_uint256_t data_1_4;
  sol_uint256_t data_1_5;
  sol_uint256_t data_1_6;
  sol_uint256_t data_2_0;
  sol_uint256_t data_2_1;
  sol_uint256_t data_2_2;
  sol_uint256_t data_2_3;
  sol_uint256_t data_2_4;
  sol_uint256_t data_2_5;
  sol_uint256_t data_2_6;
  sol_uint256_t data_3_0;
  sol_uint256_t data_3_1;
  sol_uint256_t data_3_2;
  sol_uint256_t data_3_3;
  sol_uint256_t data_3_4;
  sol_uint256_t data_3_5;
  sol_uint256_t data_3_6;
  sol_uint256_t data_4_0;
  sol_uint256_t data_4_1;
  sol_uint256_t data_4_2;
  sol_uint256_t data_4_3;
  sol_uint256_t data_4_4;
  sol_uint256_t data_4_5;
  sol_uint256_t data_4_6;
  sol_uint256_t data_5_0;
  sol_uint256_t data_5_1;
  sol_uint256_t data_5_2;
  sol_uint256_t data_5_3;
  sol_uint256_t data_5_4;
  sol_uint256_t data_5_5;
  sol_uint256_t data_5_6;
  sol_uint256_t data_6_0;
  sol_uint256_t data_6_1;
  sol_uint256_t data_6_2;
  sol_uint256_t data_6_3;
  sol_uint256_t data_6_4;
  sol_uint256_t data_6_5;
  sol_uint256_t data_6_6;
};
struct Map_1 {
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
  sol_uint256_t data_6;
};
struct ZebiCoin {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_bool_t user_mintingFinished;
  sol_bool_t user_transferAllowed;
  sol_address_t user_owner;
  struct Map_2 user_allowed;
  struct Map_1 user_balances;
  sol_uint256_t user_totalSupply__;
};
struct Map_3 {
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
  sol_uint256_t data_6;
};
struct Map_4 {
  sol_bool_t data_0;
  sol_bool_t data_1;
  sol_bool_t data_2;
  sol_bool_t data_3;
  sol_bool_t data_4;
  sol_bool_t data_5;
  sol_bool_t data_6;
};
struct ZebiCoinCrowdsale {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct ZebiCoin user_token;
  sol_uint64_t user_tokenDecimals;
  sol_uint256_t user_startTime;
  sol_uint256_t user_endTime;
  sol_uint256_t user_minTransAmount;
  sol_uint256_t user_mintedTokensCap;
  struct Map_3 user_contribution;
  struct Map_4 user_cancelledList;
  sol_address_t user_wallet;
  sol_bool_t user_withinRefundPeriod;
  sol_uint256_t user_ETHtoZCOrate;
  sol_uint256_t user_weiRaised;
  sol_bool_t user_stopped;
  sol_address_t user_owner;
};
// [START] MANUAL SPECIALIZATION FOR ONE SEND.
struct ZebiCoinCrowdsale contract_1;
uint8_t sol_send_2(sol_address_t sender, sol_uint256_t value,
                 sol_uint256_t blocknum, sol_uint256_t timestamp,
                 sol_bool_t paid, sol_address_t origin, sol_address_t src,
                 sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt) {
  if (((bal)->v) < ((amt).v))
    return 0;
  if (((dst).v) == (0)) {
    return 0;
  }
  if (((dst).v) == (1)) {
    ZCrowdsale_Fallback_For_ZebiCoinCrowdsale(&contract_1, sender, value, blocknum, timestamp, paid, origin);
    return 1;
  }
  if (((dst).v) == (2)) {
    return 0;
  }
  ((bal)->v) -= ((amt).v);
  return GET_ND_BYTE(0, "Return value for send/transfer.");
}
void sol_transfer_2(sol_address_t sender, sol_uint256_t value,
                  sol_uint256_t blocknum, sol_uint256_t timestamp,
                  sol_bool_t paid, sol_address_t origin, sol_address_t src,
                  sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt) {
  sol_require(sol_send_2(sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                       origin, src, bal, dst, amt),
              "Transfer failed.");
}
// [END] MANUAL SPECIALIZATION FOR ONE SEND.
sol_uint256_t SafeMath_Method_mul(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
struct Map_3 ZeroInit_Map_3(void);
sol_uint256_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0);
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_uint256_t dat);
struct Map_4 ZeroInit_Map_4(void);
sol_bool_t Read_Map_4(struct Map_4 *arr, sol_address_t key_0);
void Write_Map_4(struct Map_4 *arr, sol_address_t key_0, sol_bool_t dat);
void ZCrowdsale_Fallback_For_ZebiCoinCrowdsale(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_forwardFunds(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_bool_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_validPurchase(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
struct Map_2 ZeroInit_Map_2(void);
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1);
void Write_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
                 sol_uint256_t dat);
struct Map_1 ZeroInit_Map_1(void);
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0);
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
sol_uint256_t SafeMath_Method_mul(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  if (((func_user_a).v) == (0)) {
    {
      return Init_sol_uint256_t(0);
    }
  }
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) * ((func_user_b).v));
  sol_require((((func_user_c).v) / ((func_user_a).v)) == ((func_user_b).v), 0);
  { return Init_sol_uint256_t((func_user_c).v); }
}
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  sol_require(((func_user_b).v) <= ((func_user_a).v), 0);
  { return Init_sol_uint256_t(((func_user_a).v) - ((func_user_b).v)); }
}
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) + ((func_user_b).v));
  sol_require(((func_user_c).v) >= ((func_user_a).v), 0);
  { return Init_sol_uint256_t((func_user_c).v); }
}
struct Map_3 ZeroInit_Map_3(void) {
  struct Map_3 tmp;
  ((tmp).data_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5) = (Init_sol_uint256_t(0));
  ((tmp).data_6) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0) {
  {
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v))
      return (arr)->data_6;
    else if ((5) == ((key_0).v))
      return (arr)->data_5;
    else if ((4) == ((key_0).v))
      return (arr)->data_4;
    else if ((3) == ((key_0).v))
      return (arr)->data_3;
    else if ((2) == ((key_0).v))
      return (arr)->data_2;
    else if ((1) == ((key_0).v))
      return (arr)->data_1;
    else if ((0) == ((key_0).v))
      return (arr)->data_0;
  }
  return Init_sol_uint256_t(0);
}
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_uint256_t dat) {
  {
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v)) {
      ((arr)->data_6) = (dat);
    } else if ((5) == ((key_0).v)) {
      ((arr)->data_5) = (dat);
    } else if ((4) == ((key_0).v)) {
      ((arr)->data_4) = (dat);
    } else if ((3) == ((key_0).v)) {
      ((arr)->data_3) = (dat);
    } else if ((2) == ((key_0).v)) {
      ((arr)->data_2) = (dat);
    } else if ((1) == ((key_0).v)) {
      ((arr)->data_1) = (dat);
    } else if ((0) == ((key_0).v)) {
      ((arr)->data_0) = (dat);
    }
  }
}
struct Map_4 ZeroInit_Map_4(void) {
  struct Map_4 tmp;
  ((tmp).data_0) = (Init_sol_bool_t(0));
  ((tmp).data_1) = (Init_sol_bool_t(0));
  ((tmp).data_2) = (Init_sol_bool_t(0));
  ((tmp).data_3) = (Init_sol_bool_t(0));
  ((tmp).data_4) = (Init_sol_bool_t(0));
  ((tmp).data_5) = (Init_sol_bool_t(0));
  ((tmp).data_6) = (Init_sol_bool_t(0));
  return tmp;
}
sol_bool_t Read_Map_4(struct Map_4 *arr, sol_address_t key_0) {
  {
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v))
      return (arr)->data_6;
    else if ((5) == ((key_0).v))
      return (arr)->data_5;
    else if ((4) == ((key_0).v))
      return (arr)->data_4;
    else if ((3) == ((key_0).v))
      return (arr)->data_3;
    else if ((2) == ((key_0).v))
      return (arr)->data_2;
    else if ((1) == ((key_0).v))
      return (arr)->data_1;
    else if ((0) == ((key_0).v))
      return (arr)->data_0;
  }
  return Init_sol_bool_t(0);
}
void Write_Map_4(struct Map_4 *arr, sol_address_t key_0, sol_bool_t dat) {
  {
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v)) {
      ((arr)->data_6) = (dat);
    } else if ((5) == ((key_0).v)) {
      ((arr)->data_5) = (dat);
    } else if ((4) == ((key_0).v)) {
      ((arr)->data_4) = (dat);
    } else if ((3) == ((key_0).v)) {
      ((arr)->data_3) = (dat);
    } else if ((2) == ((key_0).v)) {
      ((arr)->data_2) = (dat);
    } else if ((1) == ((key_0).v)) {
      ((arr)->data_1) = (dat);
    } else if ((0) == ((key_0).v)) {
      ((arr)->data_0) = (dat);
    }
  }
}
void ZebiCoinCrowdsale_Constructor(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___startTime,
    sol_uint256_t func_user___endTime, sol_uint256_t func_user___rate,
    sol_address_t func_user___wallet, sol_uint256_t func_user___minTransAmount,
    sol_uint256_t func_user___mintedTokensCap) {}
void ZCrowdsale_Constructor_For_ZebiCoinCrowdsale(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___startTime,
    sol_uint256_t func_user___endTime, sol_uint256_t func_user___ETHtoZCOrate,
    sol_address_t func_user___wallet, sol_uint256_t func_user___minTransAmount,
    sol_uint256_t func_user___mintedTokensCap) {
  sol_require(((func_user___startTime).v) >= ((timestamp).v), 0);
  sol_require(((func_user___endTime).v) >= ((func_user___startTime).v), 0);
  sol_require(((func_user___ETHtoZCOrate).v) > (0), 0);
  sol_require(((func_user___wallet).v) != (((int)(g_literal_address_0))), 0);
  Init_ZebiCoin(&(self->user_token), (self)->model_address,
                Init_sol_uint256_t(0), blocknum, timestamp, Init_sol_bool_t(1),
                origin);
  ((self->user_startTime).v) = ((func_user___startTime).v);
  ((self->user_endTime).v) = ((func_user___endTime).v);
  ((self->user_ETHtoZCOrate).v) = ((func_user___ETHtoZCOrate).v);
  ((self->user_wallet).v) = ((func_user___wallet).v);
  ((self->user_minTransAmount).v) = ((func_user___minTransAmount).v);
  ((self->user_tokenDecimals).v) = (2);
  ((self->user_mintedTokensCap).v) =
      ((SafeMath_Method_mul(Init_sol_uint256_t((func_user___mintedTokensCap).v),
                            Init_sol_uint256_t(100)))
           .v);
  sol_require(((func_user___wallet).v) != (((self)->model_address).v),
              "VerX Implicit Requirement");
}
void Ownable_Constructor_For_ZebiCoinCrowdsale(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Ownable_For_ZebiCoinCrowdsale(struct ZebiCoinCrowdsale *self,
                                        sol_address_t sender,
                                        sol_uint256_t value,
                                        sol_uint256_t blocknum,
                                        sol_uint256_t timestamp,
                                        sol_bool_t paid, sol_address_t origin) {
  ((self)->user_owner) = (Init_sol_address_t(0));
  Ownable_Constructor_For_ZebiCoinCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Init_ZCrowdsale_For_ZebiCoinCrowdsale(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user___startTime,
    sol_uint256_t user___endTime, sol_uint256_t user___ETHtoZCOrate,
    sol_address_t user___wallet, sol_uint256_t user___minTransAmount,
    sol_uint256_t user___mintedTokensCap) {
  ((self)->user_tokenDecimals) = (Init_sol_uint64_t(0));
  ((self)->user_startTime) = (Init_sol_uint256_t(0));
  ((self)->user_endTime) = (Init_sol_uint256_t(0));
  ((self)->user_minTransAmount) = (Init_sol_uint256_t(0));
  ((self)->user_mintedTokensCap) = (Init_sol_uint256_t(0));
  ((self)->user_contribution) = (ZeroInit_Map_3());
  ((self)->user_cancelledList) = (ZeroInit_Map_4());
  ((self)->user_wallet) = (Init_sol_address_t(0));
  ((self)->user_withinRefundPeriod) = (Init_sol_bool_t(0));
  ((self)->user_ETHtoZCOrate) = (Init_sol_uint256_t(0));
  ((self)->user_weiRaised) = (Init_sol_uint256_t(0));
  ((self)->user_stopped) = (Init_sol_bool_t(0));
  Init_Ownable_For_ZebiCoinCrowdsale(self, sender, value, blocknum, timestamp,
                                     Init_sol_bool_t(0), origin);
  ZCrowdsale_Constructor_For_ZebiCoinCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      user___startTime, user___endTime, user___ETHtoZCOrate, user___wallet,
      user___minTransAmount, user___mintedTokensCap);
}
void Init_ZebiCoinCrowdsale(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user___startTime,
    sol_uint256_t user___endTime, sol_uint256_t user___rate,
    sol_address_t user___wallet, sol_uint256_t user___minTransAmount,
    sol_uint256_t user___mintedTokensCap) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_ZCrowdsale_For_ZebiCoinCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t((user___startTime).v),
      Init_sol_uint256_t((user___endTime).v),
      Init_sol_uint256_t((user___rate).v),
      Init_sol_address_t((user___wallet).v),
      Init_sol_uint256_t((user___minTransAmount).v),
      Init_sol_uint256_t((user___mintedTokensCap).v));
  ZebiCoinCrowdsale_Constructor(self, sender, value, blocknum, timestamp,
                                Init_sol_bool_t(0), origin, user___startTime,
                                user___endTime, user___rate, user___wallet,
                                user___minTransAmount, user___mintedTokensCap);
}
void ZCrowdsale_Fallback_For_ZebiCoinCrowdsale(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  ZCrowdsale_Method_For_ZebiCoinCrowdsale_buyTokens(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v));
}
sol_bool_t ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_finishMint(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  (MintableToken_Method_For_ZebiCoin_finishMinting(
       &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
       blocknum, timestamp, Init_sol_bool_t(1), origin))
      .v;
  { return Init_sol_bool_t(1); }
}
sol_bool_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_finishMint(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_bool_t func_model_rv;
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  (func_model_rv) = (ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_finishMint(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin));
  return func_model_rv;
}
sol_bool_t ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_resumeMint(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  (MintableToken_Method_For_ZebiCoin_resumeMinting(
       &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
       blocknum, timestamp, Init_sol_bool_t(1), origin))
      .v;
  { return Init_sol_bool_t(1); }
}
sol_bool_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_resumeMint(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_bool_t func_model_rv;
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  (func_model_rv) = (ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_resumeMint(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin));
  return func_model_rv;
}
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_startTransfer(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  MintableToken_Method_For_ZebiCoin_startTransfer(
      &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
      blocknum, timestamp, Init_sol_bool_t(1), origin);
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_startTransfer(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_startTransfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_endTransfer(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  MintableToken_Method_For_ZebiCoin_endTransfer(
      &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
      blocknum, timestamp, Init_sol_bool_t(1), origin);
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_endTransfer(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_endTransfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_transferTokenOwnership(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner) {
  Ownable_Method_For_ZebiCoin_transferOwnership(
      &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
      blocknum, timestamp, Init_sol_bool_t(1), origin,
      Init_sol_address_t((func_user_owner).v));
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_transferTokenOwnership(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_owner) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_transferTokenOwnership(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_owner);
}
sol_bool_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_viewCancelledList(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_participant) {
  {
    return Init_sol_bool_t(
        (Read_Map_4(&(self->user_cancelledList),
                    Init_sol_address_t((func_user_participant).v)))
            .v);
  }
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_buyTokens(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_require(((func_user_beneficiary).v) != (((int)(g_literal_address_0))), 0);
  sol_require((ZCrowdsale_Method_For_ZebiCoinCrowdsale_validPurchase(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin))
                  .v,
              0);
  sol_uint256_t func_user_weiAmount = Init_sol_uint256_t((value).v);
  sol_uint256_t func_user_tokens = Init_sol_uint256_t(
      (ZCrowdsale_Method_For_ZebiCoinCrowdsale_getTokenAmount(
           self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
           Init_sol_uint256_t((func_user_weiAmount).v)))
          .v);
  ((self->user_weiRaised).v) =
      ((SafeMath_Method_add(Init_sol_uint256_t((self->user_weiRaised).v),
                            Init_sol_uint256_t((func_user_weiAmount).v)))
           .v);
  (MintableToken_Method_For_ZebiCoin_mint(
       &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
       blocknum, timestamp, Init_sol_bool_t(1), origin,
       Init_sol_address_t((func_user_beneficiary).v),
       Init_sol_uint256_t((func_user_tokens).v)))
      .v;
  Write_Map_3(
      &(self->user_contribution), Init_sol_address_t((func_user_beneficiary).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_3(&(self->user_contribution),
                               Init_sol_address_t((func_user_beneficiary).v)))
                       .v),
               Init_sol_uint256_t((func_user_weiAmount).v)))
              .v));
  {
    (sender).v;
    (func_user_beneficiary).v;
    (func_user_weiAmount).v;
    (func_user_tokens).v;
    sol_emit("TokenPurchase(msg.sender, beneficiary, weiAmount, tokens)");
  }
  ZCrowdsale_Method_For_ZebiCoinCrowdsale_forwardFunds(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
sol_uint256_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_getTokenAmount(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_weiAmount) {
  sol_uint256_t func_user_ETHtoZweiRate = Init_sol_uint256_t(
      (SafeMath_Method_mul(Init_sol_uint256_t((self->user_ETHtoZCOrate).v),
                           Init_sol_uint256_t(100)))
          .v);
  {
    return Init_sol_uint256_t(
        (SafeMath_Method_mul(Init_sol_uint256_t((func_user_weiAmount).v),
                             Init_sol_uint256_t((func_user_ETHtoZweiRate).v)))
            .v);
  }
}
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_enableRefundPeriod(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_withinRefundPeriod).v) = (1);
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_enableRefundPeriod(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_enableRefundPeriod(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_disableRefundPeriod(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_withinRefundPeriod).v) = (0);
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_disableRefundPeriod(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_disableRefundPeriod(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_emergencyStop(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_stopped).v) = (1);
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_emergencyStop(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_emergencyStop(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_release(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_stopped).v) = (0);
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_release(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_release(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
sol_uint256_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_viewContribution(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_participant) {
  {
    return Init_sol_uint256_t(
        (Read_Map_3(&(self->user_contribution),
                    Init_sol_address_t((func_user_participant).v)))
            .v);
  }
}
void ZCrowdsale_Method_2_For_ZebiCoinCrowdsale_refund(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(
      (((Read_Map_3(&(self->user_contribution), Init_sol_address_t((sender).v)))
            .v) > (0)) &&
          (((BasicToken_Method_For_ZebiCoin_balanceOf(
                 &(self->user_token), (self)->model_address,
                 Init_sol_uint256_t(0), blocknum, timestamp, Init_sol_bool_t(1),
                 origin, Init_sol_address_t((sender).v)))
                .v) > (0)),
      0);
  sol_uint256_t func_user_refundBalance = Init_sol_uint256_t(
      (Read_Map_3(&(self->user_contribution), Init_sol_address_t((sender).v)))
          .v);
  Write_Map_3(&(self->user_contribution), Init_sol_address_t((sender).v),
              Init_sol_uint256_t(0));
  (MintableToken_Method_For_ZebiCoin_burn(
       &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
       blocknum, timestamp, Init_sol_bool_t(1), origin,
       Init_sol_address_t((sender).v)))
      .v;
  sol_transfer_2(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
               Init_sol_address_t((sender).v),
               Init_sol_uint256_t((func_user_refundBalance).v));
  {
    (sender).v;
    (func_user_refundBalance).v;
    sol_emit("Refund(msg.sender, refundBalance)");
  }
}
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_refund(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require((self->user_withinRefundPeriod).v, 0);
  ZCrowdsale_Method_2_For_ZebiCoinCrowdsale_refund(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_refund(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(
      (Read_Map_4(&(self->user_cancelledList), Init_sol_address_t((sender).v)))
          .v,
      0);
  ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_refund(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_forcedRefund(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from) {
  sol_require((Read_Map_4(&(self->user_cancelledList),
                          Init_sol_address_t((func_user___from).v)))
                  .v,
              0);
  sol_require(
      (((Read_Map_3(&(self->user_contribution),
                    Init_sol_address_t((func_user___from).v)))
            .v) > (0)) &&
          (((BasicToken_Method_For_ZebiCoin_balanceOf(
                 &(self->user_token), (self)->model_address,
                 Init_sol_uint256_t(0), blocknum, timestamp, Init_sol_bool_t(1),
                 origin, Init_sol_address_t((func_user___from).v)))
                .v) > (0)),
      0);
  sol_uint256_t func_user_refundBalance =
      Init_sol_uint256_t((Read_Map_3(&(self->user_contribution),
                                     Init_sol_address_t((func_user___from).v)))
                             .v);
  Write_Map_3(&(self->user_contribution),
              Init_sol_address_t((func_user___from).v), Init_sol_uint256_t(0));
  (MintableToken_Method_For_ZebiCoin_burn(
       &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
       blocknum, timestamp, Init_sol_bool_t(1), origin,
       Init_sol_address_t((func_user___from).v)))
      .v;
  sol_transfer_2(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
               Init_sol_address_t((func_user___from).v),
               Init_sol_uint256_t((func_user_refundBalance).v));
  {
    (func_user___from).v;
    (func_user_refundBalance).v;
    sol_emit("Refund(_from,refundBalance)");
  }
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_forcedRefund(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_forcedRefund(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___from);
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_takeEth(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  {
    (sender).v;
    (value).v;
    sol_emit("TakeEth(msg.sender,msg.value)");
  }
}
void ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_withdraw(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___value) {
  sol_transfer(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
               Init_sol_address_t((self->user_wallet).v),
               Init_sol_uint256_t((func_user___value).v));
  {
    (func_user___value).v;
    sol_emit("Withdraw(_value)");
  }
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_withdraw(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_model___value) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_withdraw(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___value);
}
sol_bool_t ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_addCancellation(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___participant) {
  sol_bool_t func_user_success = Init_sol_bool_t(0);
  Write_Map_4(&(self->user_cancelledList),
              Init_sol_address_t((func_user___participant).v),
              Init_sol_bool_t(1));
  { return Init_sol_bool_t(1); }
  return func_user_success;
}
sol_bool_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_addCancellation(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___participant) {
  sol_bool_t func_model_rv;
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  (func_model_rv) = (ZCrowdsale_Method_1_For_ZebiCoinCrowdsale_addCancellation(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___participant));
  return func_model_rv;
}
void Ownable_Method_1_For_ZebiCoinCrowdsale_transferOwnership(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner) {
  sol_require(((func_user_newOwner).v) != (((int)(g_literal_address_0))), 0);
  {
    (self->user_owner).v;
    (func_user_newOwner).v;
    sol_emit("OwnershipTransferred(owner, newOwner)");
  }
  ((self->user_owner).v) = ((func_user_newOwner).v);
}
void Ownable_Method_For_ZebiCoinCrowdsale_transferOwnership(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Ownable_Method_1_For_ZebiCoinCrowdsale_transferOwnership(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_newOwner);
}
void ZCrowdsale_Method_For_ZebiCoinCrowdsale_forwardFunds(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_transfer(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
               Init_sol_address_t((self->user_wallet).v),
               Init_sol_uint256_t((value).v));
}
sol_bool_t ZCrowdsale_Method_For_ZebiCoinCrowdsale_validPurchase(
    struct ZebiCoinCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_bool_t func_user_withinPeriod =
      Init_sol_bool_t((((timestamp).v) >= ((self->user_startTime).v)) &&
                      (((timestamp).v) <= ((self->user_endTime).v)));
  sol_bool_t func_user_validAmount =
      Init_sol_bool_t(((value).v) >= ((self->user_minTransAmount).v));
  sol_bool_t func_user_withinmintedTokensCap = Init_sol_bool_t(
      ((self->user_mintedTokensCap).v) >=
      (((BasicToken_Method_For_ZebiCoin_totalSupply(
             &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
             blocknum, timestamp, Init_sol_bool_t(1), origin))
            .v) +
       ((ZCrowdsale_Method_For_ZebiCoinCrowdsale_getTokenAmount(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_uint256_t((value).v)))
            .v)));
  {
    return Init_sol_bool_t(
        (((func_user_withinPeriod).v) && ((func_user_validAmount).v)) &&
        ((func_user_withinmintedTokensCap).v));
  }
}
struct Map_2 ZeroInit_Map_2(void) {
  struct Map_2 tmp;
  ((tmp).data_0_0) = (Init_sol_uint256_t(0));
  ((tmp).data_0_1) = (Init_sol_uint256_t(0));
  ((tmp).data_0_2) = (Init_sol_uint256_t(0));
  ((tmp).data_0_3) = (Init_sol_uint256_t(0));
  ((tmp).data_0_4) = (Init_sol_uint256_t(0));
  ((tmp).data_0_5) = (Init_sol_uint256_t(0));
  ((tmp).data_0_6) = (Init_sol_uint256_t(0));
  ((tmp).data_1_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1_1) = (Init_sol_uint256_t(0));
  ((tmp).data_1_2) = (Init_sol_uint256_t(0));
  ((tmp).data_1_3) = (Init_sol_uint256_t(0));
  ((tmp).data_1_4) = (Init_sol_uint256_t(0));
  ((tmp).data_1_5) = (Init_sol_uint256_t(0));
  ((tmp).data_1_6) = (Init_sol_uint256_t(0));
  ((tmp).data_2_0) = (Init_sol_uint256_t(0));
  ((tmp).data_2_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2_2) = (Init_sol_uint256_t(0));
  ((tmp).data_2_3) = (Init_sol_uint256_t(0));
  ((tmp).data_2_4) = (Init_sol_uint256_t(0));
  ((tmp).data_2_5) = (Init_sol_uint256_t(0));
  ((tmp).data_2_6) = (Init_sol_uint256_t(0));
  ((tmp).data_3_0) = (Init_sol_uint256_t(0));
  ((tmp).data_3_1) = (Init_sol_uint256_t(0));
  ((tmp).data_3_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3_3) = (Init_sol_uint256_t(0));
  ((tmp).data_3_4) = (Init_sol_uint256_t(0));
  ((tmp).data_3_5) = (Init_sol_uint256_t(0));
  ((tmp).data_3_6) = (Init_sol_uint256_t(0));
  ((tmp).data_4_0) = (Init_sol_uint256_t(0));
  ((tmp).data_4_1) = (Init_sol_uint256_t(0));
  ((tmp).data_4_2) = (Init_sol_uint256_t(0));
  ((tmp).data_4_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4_4) = (Init_sol_uint256_t(0));
  ((tmp).data_4_5) = (Init_sol_uint256_t(0));
  ((tmp).data_4_6) = (Init_sol_uint256_t(0));
  ((tmp).data_5_0) = (Init_sol_uint256_t(0));
  ((tmp).data_5_1) = (Init_sol_uint256_t(0));
  ((tmp).data_5_2) = (Init_sol_uint256_t(0));
  ((tmp).data_5_3) = (Init_sol_uint256_t(0));
  ((tmp).data_5_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5_5) = (Init_sol_uint256_t(0));
  ((tmp).data_5_6) = (Init_sol_uint256_t(0));
  ((tmp).data_6_0) = (Init_sol_uint256_t(0));
  ((tmp).data_6_1) = (Init_sol_uint256_t(0));
  ((tmp).data_6_2) = (Init_sol_uint256_t(0));
  ((tmp).data_6_3) = (Init_sol_uint256_t(0));
  ((tmp).data_6_4) = (Init_sol_uint256_t(0));
  ((tmp).data_6_5) = (Init_sol_uint256_t(0));
  ((tmp).data_6_6) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1) {
  {
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((7) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v)) {
      if ((6) == ((key_1).v))
        return (arr)->data_6_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_6_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_6_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_6_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_6_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_6_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_6_0;
    } else if ((5) == ((key_0).v)) {
      if ((6) == ((key_1).v))
        return (arr)->data_5_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_5_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_5_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_5_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_5_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_5_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_5_0;
    } else if ((4) == ((key_0).v)) {
      if ((6) == ((key_1).v))
        return (arr)->data_4_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_4_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_4_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_4_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_4_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_4_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_4_0;
    } else if ((3) == ((key_0).v)) {
      if ((6) == ((key_1).v))
        return (arr)->data_3_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_3_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_3_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_3_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_3_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_3_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_3_0;
    } else if ((2) == ((key_0).v)) {
      if ((6) == ((key_1).v))
        return (arr)->data_2_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_2_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_2_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_2_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_2_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_2_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_2_0;
    } else if ((1) == ((key_0).v)) {
      if ((6) == ((key_1).v))
        return (arr)->data_1_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_1_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_1_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_1_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_1_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_1_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_1_0;
    } else if ((0) == ((key_0).v)) {
      if ((6) == ((key_1).v))
        return (arr)->data_0_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_0_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_0_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_0_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_0_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_0_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_0_0;
    }
  }
  return Init_sol_uint256_t(0);
}
void Write_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
                 sol_uint256_t dat) {
  {
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((7) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v)) {
      if ((6) == ((key_1).v)) {
        ((arr)->data_6_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_6_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_6_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_6_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_6_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_6_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_6_0) = (dat);
      }
    } else if ((5) == ((key_0).v)) {
      if ((6) == ((key_1).v)) {
        ((arr)->data_5_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_5_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_5_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_5_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_5_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_5_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_5_0) = (dat);
      }
    } else if ((4) == ((key_0).v)) {
      if ((6) == ((key_1).v)) {
        ((arr)->data_4_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_4_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_4_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_4_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_4_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_4_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_4_0) = (dat);
      }
    } else if ((3) == ((key_0).v)) {
      if ((6) == ((key_1).v)) {
        ((arr)->data_3_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_3_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_3_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_3_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_3_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_3_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_3_0) = (dat);
      }
    } else if ((2) == ((key_0).v)) {
      if ((6) == ((key_1).v)) {
        ((arr)->data_2_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_2_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_2_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_2_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_2_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_2_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_2_0) = (dat);
      }
    } else if ((1) == ((key_0).v)) {
      if ((6) == ((key_1).v)) {
        ((arr)->data_1_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_1_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_1_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_1_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_1_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_1_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_1_0) = (dat);
      }
    } else if ((0) == ((key_0).v)) {
      if ((6) == ((key_1).v)) {
        ((arr)->data_0_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_0_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_0_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_0_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_0_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_0_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_0_0) = (dat);
      }
    }
  }
}
struct Map_1 ZeroInit_Map_1(void) {
  struct Map_1 tmp;
  ((tmp).data_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5) = (Init_sol_uint256_t(0));
  ((tmp).data_6) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0) {
  {
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v))
      return (arr)->data_6;
    else if ((5) == ((key_0).v))
      return (arr)->data_5;
    else if ((4) == ((key_0).v))
      return (arr)->data_4;
    else if ((3) == ((key_0).v))
      return (arr)->data_3;
    else if ((2) == ((key_0).v))
      return (arr)->data_2;
    else if ((1) == ((key_0).v))
      return (arr)->data_1;
    else if ((0) == ((key_0).v))
      return (arr)->data_0;
  }
  return Init_sol_uint256_t(0);
}
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat) {
  {
    sol_assert((7) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((6) == ((key_0).v)) {
      ((arr)->data_6) = (dat);
    } else if ((5) == ((key_0).v)) {
      ((arr)->data_5) = (dat);
    } else if ((4) == ((key_0).v)) {
      ((arr)->data_4) = (dat);
    } else if ((3) == ((key_0).v)) {
      ((arr)->data_3) = (dat);
    } else if ((2) == ((key_0).v)) {
      ((arr)->data_2) = (dat);
    } else if ((1) == ((key_0).v)) {
      ((arr)->data_1) = (dat);
    } else if ((0) == ((key_0).v)) {
      ((arr)->data_0) = (dat);
    }
  }
}
void Init_ERC20Basic_For_ZebiCoin(struct ZebiCoin *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {}
void Init_ERC20_For_ZebiCoin(struct ZebiCoin *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin) {
  Init_ERC20Basic_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin);
}
void Init_BasicToken_For_ZebiCoin(struct ZebiCoin *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {
  ((self)->user_balances) = (ZeroInit_Map_1());
  ((self)->user_totalSupply__) = (Init_sol_uint256_t(0));
}
void Init_StandardToken_For_ZebiCoin(struct ZebiCoin *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin) {
  ((self)->user_allowed) = (ZeroInit_Map_2());
  Init_ERC20_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                          Init_sol_bool_t(0), origin);
  Init_BasicToken_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin);
}
void Ownable_Constructor_For_ZebiCoin(struct ZebiCoin *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Ownable_For_ZebiCoin(struct ZebiCoin *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin) {
  ((self)->user_owner) = (Init_sol_address_t(0));
  Ownable_Constructor_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
}
void Init_MintableToken_For_ZebiCoin(struct ZebiCoin *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin) {
  ((self)->user_mintingFinished) = (Init_sol_bool_t(0));
  ((self)->user_transferAllowed) = (Init_sol_bool_t(0));
  Init_StandardToken_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
  Init_Ownable_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                            Init_sol_bool_t(0), origin);
}
void Init_ZebiCoin(struct ZebiCoin *self, sol_address_t sender,
                   sol_uint256_t value, sol_uint256_t blocknum,
                   sol_uint256_t timestamp, sol_bool_t paid,
                   sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_MintableToken_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
}
sol_bool_t MintableToken_Method_2_For_ZebiCoin_mint(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___amount) {
  ((self->user_totalSupply__).v) =
      ((SafeMath_Method_add(Init_sol_uint256_t((self->user_totalSupply__).v),
                            Init_sol_uint256_t((func_user___amount).v)))
           .v);
  Write_Map_1(&(self->user_balances), Init_sol_address_t((func_user___to).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_add(
                       Init_sol_uint256_t(
                           (Read_Map_1(&(self->user_balances),
                                       Init_sol_address_t((func_user___to).v)))
                               .v),
                       Init_sol_uint256_t((func_user___amount).v)))
                      .v));
  {
    (func_user___to).v;
    (func_user___amount).v;
    sol_emit("Mint(_to, _amount)");
  }
  {
    ((int)(g_literal_address_0));
    (func_user___to).v;
    (func_user___amount).v;
    sol_emit("Transfer(address(0), _to, _amount)");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t MintableToken_Method_1_For_ZebiCoin_mint(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___amount) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_mintingFinished).v), 0);
  (func_model_rv) = (MintableToken_Method_2_For_ZebiCoin_mint(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___to, func_model___amount));
  return func_model_rv;
}
sol_bool_t MintableToken_Method_For_ZebiCoin_mint(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___amount) {
  sol_bool_t func_model_rv;
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  (func_model_rv) = (MintableToken_Method_1_For_ZebiCoin_mint(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___to, func_model___amount));
  return func_model_rv;
}
sol_bool_t MintableToken_Method_2_For_ZebiCoin_finishMinting(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_mintingFinished).v) = (1);
  { sol_emit("MintFinished()"); }
  { return Init_sol_bool_t(1); }
}
sol_bool_t MintableToken_Method_1_For_ZebiCoin_finishMinting(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_mintingFinished).v), 0);
  (func_model_rv) = (MintableToken_Method_2_For_ZebiCoin_finishMinting(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin));
  return func_model_rv;
}
sol_bool_t MintableToken_Method_For_ZebiCoin_finishMinting(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_bool_t func_model_rv;
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  (func_model_rv) = (MintableToken_Method_1_For_ZebiCoin_finishMinting(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin));
  return func_model_rv;
}
sol_bool_t MintableToken_Method_1_For_ZebiCoin_resumeMinting(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_mintingFinished).v) = (0);
  { return Init_sol_bool_t(1); }
}
sol_bool_t MintableToken_Method_For_ZebiCoin_resumeMinting(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_bool_t func_model_rv;
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  (func_model_rv) = (MintableToken_Method_1_For_ZebiCoin_resumeMinting(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin));
  return func_model_rv;
}
sol_bool_t MintableToken_Method_1_For_ZebiCoin_burn(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from) {
  sol_bool_t func_user_success = Init_sol_bool_t(0);
  sol_require(((Read_Map_1(&(self->user_balances),
                           Init_sol_address_t((func_user___from).v)))
                   .v) != (0),
              0);
  sol_uint256_t func_user_tokencount =
      Init_sol_uint256_t((Read_Map_1(&(self->user_balances),
                                     Init_sol_address_t((func_user___from).v)))
                             .v);
  Write_Map_1(&(self->user_balances), Init_sol_address_t((func_user___from).v),
              Init_sol_uint256_t(0));
  ((self->user_totalSupply__).v) =
      ((SafeMath_Method_sub(Init_sol_uint256_t((self->user_totalSupply__).v),
                            Init_sol_uint256_t((func_user_tokencount).v)))
           .v);
  {
    (func_user___from).v;
    (func_user_tokencount).v;
    sol_emit("Burn(_from, tokencount)");
  }
  { return Init_sol_bool_t(1); }
  return func_user_success;
}
sol_bool_t MintableToken_Method_For_ZebiCoin_burn(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from) {
  sol_bool_t func_model_rv;
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  (func_model_rv) = (MintableToken_Method_1_For_ZebiCoin_burn(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___from));
  return func_model_rv;
}
void MintableToken_Method_1_For_ZebiCoin_startTransfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_transferAllowed).v) = (1);
}
void MintableToken_Method_For_ZebiCoin_startTransfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  MintableToken_Method_1_For_ZebiCoin_startTransfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void MintableToken_Method_1_For_ZebiCoin_endTransfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_transferAllowed).v) = (0);
}
void MintableToken_Method_For_ZebiCoin_endTransfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  MintableToken_Method_1_For_ZebiCoin_endTransfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
sol_bool_t BasicToken_Method_For_ZebiCoin_transfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value) {
  sol_require(((func_user___to).v) != (((int)(g_literal_address_0))), 0);
  sol_require(
      ((func_user___value).v) <=
          ((Read_Map_1(&(self->user_balances), Init_sol_address_t((sender).v)))
               .v),
      0);
  Write_Map_1(
      &(self->user_balances), Init_sol_address_t((sender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t((Read_Map_1(&(self->user_balances),
                                              Init_sol_address_t((sender).v)))
                                      .v),
               Init_sol_uint256_t((func_user___value).v)))
              .v));
  Write_Map_1(&(self->user_balances), Init_sol_address_t((func_user___to).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_add(
                       Init_sol_uint256_t(
                           (Read_Map_1(&(self->user_balances),
                                       Init_sol_address_t((func_user___to).v)))
                               .v),
                       Init_sol_uint256_t((func_user___value).v)))
                      .v));
  {
    (sender).v;
    (func_user___to).v;
    (func_user___value).v;
    sol_emit("Transfer(msg.sender, _to, _value)");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t MintableToken_Method_For_ZebiCoin_transfer(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value) {
  sol_require((self->user_transferAllowed).v, 0);
  (BasicToken_Method_For_ZebiCoin_transfer(
       self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
       Init_sol_address_t((func_user___to).v),
       Init_sol_uint256_t((func_user___value).v)))
      .v;
  { return Init_sol_bool_t(1); }
}
sol_bool_t StandardToken_Method_For_ZebiCoin_transferFrom(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value) {
  sol_require(((func_user___to).v) != (((int)(g_literal_address_0))), 0);
  sol_require(((func_user___value).v) <=
                  ((Read_Map_1(&(self->user_balances),
                               Init_sol_address_t((func_user___from).v)))
                       .v),
              0);
  sol_require(((func_user___value).v) <=
                  ((Read_Map_2(&(self->user_allowed),
                               Init_sol_address_t((func_user___from).v),
                               Init_sol_address_t((sender).v)))
                       .v),
              0);
  Write_Map_1(
      &(self->user_balances), Init_sol_address_t((func_user___from).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user_balances),
                               Init_sol_address_t((func_user___from).v)))
                       .v),
               Init_sol_uint256_t((func_user___value).v)))
              .v));
  Write_Map_1(&(self->user_balances), Init_sol_address_t((func_user___to).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_add(
                       Init_sol_uint256_t(
                           (Read_Map_1(&(self->user_balances),
                                       Init_sol_address_t((func_user___to).v)))
                               .v),
                       Init_sol_uint256_t((func_user___value).v)))
                      .v));
  Write_Map_2(&(self->user_allowed), Init_sol_address_t((func_user___from).v),
              Init_sol_address_t((sender).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_sub(
                       Init_sol_uint256_t(
                           (Read_Map_2(&(self->user_allowed),
                                       Init_sol_address_t((func_user___from).v),
                                       Init_sol_address_t((sender).v)))
                               .v),
                       Init_sol_uint256_t((func_user___value).v)))
                      .v));
  {
    (func_user___from).v;
    (func_user___to).v;
    (func_user___value).v;
    sol_emit("Transfer(_from, _to, _value)");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t MintableToken_Method_For_ZebiCoin_transferFrom(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value) {
  sol_require((self->user_transferAllowed).v, 0);
  (StandardToken_Method_For_ZebiCoin_transferFrom(
       self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
       Init_sol_address_t((func_user___from).v),
       Init_sol_address_t((func_user___to).v),
       Init_sol_uint256_t((func_user___value).v)))
      .v;
  { return Init_sol_bool_t(1); }
}
void Ownable_Method_1_For_ZebiCoin_transferOwnership(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner) {
  sol_require(((func_user_newOwner).v) != (((int)(g_literal_address_0))), 0);
  {
    (self->user_owner).v;
    (func_user_newOwner).v;
    sol_emit("OwnershipTransferred(owner, newOwner)");
  }
  ((self->user_owner).v) = ((func_user_newOwner).v);
}
void Ownable_Method_For_ZebiCoin_transferOwnership(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Ownable_Method_1_For_ZebiCoin_transferOwnership(self, sender, value, blocknum,
                                                  timestamp, Init_sol_bool_t(0),
                                                  origin, func_model_newOwner);
}
sol_bool_t StandardToken_Method_For_ZebiCoin_approve(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value) {
  Write_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
              Init_sol_address_t((func_user___spender).v),
              Init_sol_uint256_t((func_user___value).v));
  {
    (sender).v;
    (func_user___spender).v;
    (func_user___value).v;
    sol_emit("Approval(msg.sender, _spender, _value)");
  }
  { return Init_sol_bool_t(1); }
}
sol_uint256_t StandardToken_Method_For_ZebiCoin_allowance(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner,
    sol_address_t func_user___spender) {
  {
    return Init_sol_uint256_t(
        (Read_Map_2(&(self->user_allowed),
                    Init_sol_address_t((func_user___owner).v),
                    Init_sol_address_t((func_user___spender).v)))
            .v);
  }
}
sol_bool_t StandardToken_Method_For_ZebiCoin_increaseApproval(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue) {
  Write_Map_2(
      &(self->user_allowed), Init_sol_address_t((sender).v),
      Init_sol_address_t((func_user___spender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user_allowed),
                               Init_sol_address_t((sender).v),
                               Init_sol_address_t((func_user___spender).v)))
                       .v),
               Init_sol_uint256_t((func_user___addedValue).v)))
              .v));
  {
    (sender).v;
    (func_user___spender).v;
    (Read_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
                Init_sol_address_t((func_user___spender).v)))
        .v;
    sol_emit("Approval(msg.sender, _spender, allowed[msg.sender][_spender])");
  }
  { return Init_sol_bool_t(1); }
}
sol_bool_t StandardToken_Method_For_ZebiCoin_decreaseApproval(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue) {
  sol_uint256_t func_user_oldValue = Init_sol_uint256_t(
      (Read_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
                  Init_sol_address_t((func_user___spender).v)))
          .v);
  if (((func_user___subtractedValue).v) > ((func_user_oldValue).v)) {
    Write_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
                Init_sol_address_t((func_user___spender).v),
                Init_sol_uint256_t(0));
  } else {
    Write_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
                Init_sol_address_t((func_user___spender).v),
                Init_sol_uint256_t(
                    (SafeMath_Method_sub(
                         Init_sol_uint256_t((func_user_oldValue).v),
                         Init_sol_uint256_t((func_user___subtractedValue).v)))
                        .v));
  }
  {
    (sender).v;
    (func_user___spender).v;
    (Read_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
                Init_sol_address_t((func_user___spender).v)))
        .v;
    sol_emit("Approval(msg.sender, _spender, allowed[msg.sender][_spender])");
  }
  { return Init_sol_bool_t(1); }
}
sol_uint256_t BasicToken_Method_For_ZebiCoin_totalSupply(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user_totalSupply__).v); }
}
sol_uint256_t BasicToken_Method_For_ZebiCoin_balanceOf(
    struct ZebiCoin *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner) {
  sol_uint256_t func_user_balance = Init_sol_uint256_t(0);
  {
    return Init_sol_uint256_t(
        (Read_Map_1(&(self->user_balances),
                    Init_sol_address_t((func_user___owner).v)))
            .v);
  }
  return func_user_balance;
}
void run_model(void) {
  sol_address_t last_sender;
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(66, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(67, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct ZebiCoinCrowdsale contract_1;
  struct ZebiCoin *contract_2;
  (g_literal_address_0) = (0);
  (((contract_1).model_address).v) = (1);
  (contract_2) = (&((contract_1).user_token));
  (((contract_2)->model_address).v) = (2);
  (((contract_1).user_wallet).v) = (0);
  (((contract_1).user_owner).v) = (0);
  (((contract_2)->user_owner).v) = (0);
  smartace_log("[Initializing contract_1 and children]");
  if (GET_ND_RANGE(70, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(68, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(69, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(71, 3, 7, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_ZebiCoinCrowdsale(
        &(contract_1), sender, value, blocknum, timestamp, paid, sender,
        Init_sol_uint256_t(
            GET_ND_UINT(72, 256, "ZebiCoinCrowdsale:_startTime")),
        Init_sol_uint256_t(GET_ND_UINT(73, 256, "ZebiCoinCrowdsale:_endTime")),
        Init_sol_uint256_t(GET_ND_UINT(74, 256, "ZebiCoinCrowdsale:_rate")),
        Init_sol_address_t(GET_ND_RANGE(75, 0, 7, "ZebiCoinCrowdsale:_wallet")),
        Init_sol_uint256_t(
            GET_ND_UINT(76, 256, "ZebiCoinCrowdsale:_minTransAmount")),
        Init_sol_uint256_t(
            GET_ND_UINT(77, 256, "ZebiCoinCrowdsale:_mintedTokensCap")));
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    sol_bool_t prev_withinRefundPeriod = contract_1.user_withinRefundPeriod;
    if (sol_is_using_reps()) {
      (((contract_1).user_contribution).data_0) = (Init_sol_uint256_t(
          GET_ND_UINT(78, 256, "ZebiCoinCrowdsale::contribution::_0")));
      (((contract_1).user_contribution).data_1) = (Init_sol_uint256_t(
          GET_ND_UINT(79, 256, "ZebiCoinCrowdsale::contribution::_1")));
      (((contract_1).user_contribution).data_2) = (Init_sol_uint256_t(
          GET_ND_UINT(80, 256, "ZebiCoinCrowdsale::contribution::_2")));
      (((contract_1).user_contribution).data_3) = (Init_sol_uint256_t(
          GET_ND_UINT(81, 256, "ZebiCoinCrowdsale::contribution::_3")));
      (((contract_1).user_contribution).data_4) = (Init_sol_uint256_t(
          GET_ND_UINT(82, 256, "ZebiCoinCrowdsale::contribution::_4")));
      (((contract_1).user_contribution).data_5) = (Init_sol_uint256_t(
          GET_ND_UINT(83, 256, "ZebiCoinCrowdsale::contribution::_5")));
      (((contract_1).user_contribution).data_6) = (Init_sol_uint256_t(
          GET_ND_UINT(84, 256, "ZebiCoinCrowdsale::contribution::_6")));
      (((contract_1).user_cancelledList).data_0) = (Init_sol_bool_t(
          GET_ND_RANGE(85, 0, 2, "ZebiCoinCrowdsale::cancelledList::_0")));
      (((contract_1).user_cancelledList).data_1) = (Init_sol_bool_t(
          GET_ND_RANGE(86, 0, 2, "ZebiCoinCrowdsale::cancelledList::_1")));
      (((contract_1).user_cancelledList).data_2) = (Init_sol_bool_t(
          GET_ND_RANGE(87, 0, 2, "ZebiCoinCrowdsale::cancelledList::_2")));
      (((contract_1).user_cancelledList).data_3) = (Init_sol_bool_t(
          GET_ND_RANGE(88, 0, 2, "ZebiCoinCrowdsale::cancelledList::_3")));
      (((contract_1).user_cancelledList).data_4) = (Init_sol_bool_t(
          GET_ND_RANGE(89, 0, 2, "ZebiCoinCrowdsale::cancelledList::_4")));
      (((contract_1).user_cancelledList).data_5) = (Init_sol_bool_t(
          GET_ND_RANGE(90, 0, 2, "ZebiCoinCrowdsale::cancelledList::_5")));
      (((contract_1).user_cancelledList).data_6) = (Init_sol_bool_t(
          GET_ND_RANGE(91, 0, 2, "ZebiCoinCrowdsale::cancelledList::_6")));
      (((contract_2)->user_allowed).data_0_0) =
          (Init_sol_uint256_t(GET_ND_UINT(92, 256, "ZebiCoin::allowed::_0_0")));
      (((contract_2)->user_allowed).data_0_1) =
          (Init_sol_uint256_t(GET_ND_UINT(93, 256, "ZebiCoin::allowed::_0_1")));
      (((contract_2)->user_allowed).data_0_2) =
          (Init_sol_uint256_t(GET_ND_UINT(94, 256, "ZebiCoin::allowed::_0_2")));
      (((contract_2)->user_allowed).data_0_3) =
          (Init_sol_uint256_t(GET_ND_UINT(95, 256, "ZebiCoin::allowed::_0_3")));
      (((contract_2)->user_allowed).data_0_4) =
          (Init_sol_uint256_t(GET_ND_UINT(96, 256, "ZebiCoin::allowed::_0_4")));
      (((contract_2)->user_allowed).data_0_5) =
          (Init_sol_uint256_t(GET_ND_UINT(97, 256, "ZebiCoin::allowed::_0_5")));
      (((contract_2)->user_allowed).data_0_6) =
          (Init_sol_uint256_t(GET_ND_UINT(98, 256, "ZebiCoin::allowed::_0_6")));
      (((contract_2)->user_allowed).data_1_0) =
          (Init_sol_uint256_t(GET_ND_UINT(99, 256, "ZebiCoin::allowed::_1_0")));
      (((contract_2)->user_allowed).data_1_1) = (Init_sol_uint256_t(
          GET_ND_UINT(100, 256, "ZebiCoin::allowed::_1_1")));
      (((contract_2)->user_allowed).data_1_2) = (Init_sol_uint256_t(
          GET_ND_UINT(101, 256, "ZebiCoin::allowed::_1_2")));
      (((contract_2)->user_allowed).data_1_3) = (Init_sol_uint256_t(
          GET_ND_UINT(102, 256, "ZebiCoin::allowed::_1_3")));
      (((contract_2)->user_allowed).data_1_4) = (Init_sol_uint256_t(
          GET_ND_UINT(103, 256, "ZebiCoin::allowed::_1_4")));
      (((contract_2)->user_allowed).data_1_5) = (Init_sol_uint256_t(
          GET_ND_UINT(104, 256, "ZebiCoin::allowed::_1_5")));
      (((contract_2)->user_allowed).data_1_6) = (Init_sol_uint256_t(
          GET_ND_UINT(105, 256, "ZebiCoin::allowed::_1_6")));
      (((contract_2)->user_allowed).data_2_0) = (Init_sol_uint256_t(
          GET_ND_UINT(106, 256, "ZebiCoin::allowed::_2_0")));
      (((contract_2)->user_allowed).data_2_1) = (Init_sol_uint256_t(
          GET_ND_UINT(107, 256, "ZebiCoin::allowed::_2_1")));
      (((contract_2)->user_allowed).data_2_2) = (Init_sol_uint256_t(
          GET_ND_UINT(108, 256, "ZebiCoin::allowed::_2_2")));
      (((contract_2)->user_allowed).data_2_3) = (Init_sol_uint256_t(
          GET_ND_UINT(109, 256, "ZebiCoin::allowed::_2_3")));
      (((contract_2)->user_allowed).data_2_4) = (Init_sol_uint256_t(
          GET_ND_UINT(110, 256, "ZebiCoin::allowed::_2_4")));
      (((contract_2)->user_allowed).data_2_5) = (Init_sol_uint256_t(
          GET_ND_UINT(111, 256, "ZebiCoin::allowed::_2_5")));
      (((contract_2)->user_allowed).data_2_6) = (Init_sol_uint256_t(
          GET_ND_UINT(112, 256, "ZebiCoin::allowed::_2_6")));
      (((contract_2)->user_allowed).data_3_0) = (Init_sol_uint256_t(
          GET_ND_UINT(113, 256, "ZebiCoin::allowed::_3_0")));
      (((contract_2)->user_allowed).data_3_1) = (Init_sol_uint256_t(
          GET_ND_UINT(114, 256, "ZebiCoin::allowed::_3_1")));
      (((contract_2)->user_allowed).data_3_2) = (Init_sol_uint256_t(
          GET_ND_UINT(115, 256, "ZebiCoin::allowed::_3_2")));
      (((contract_2)->user_allowed).data_3_3) = (Init_sol_uint256_t(
          GET_ND_UINT(116, 256, "ZebiCoin::allowed::_3_3")));
      (((contract_2)->user_allowed).data_3_4) = (Init_sol_uint256_t(
          GET_ND_UINT(117, 256, "ZebiCoin::allowed::_3_4")));
      (((contract_2)->user_allowed).data_3_5) = (Init_sol_uint256_t(
          GET_ND_UINT(118, 256, "ZebiCoin::allowed::_3_5")));
      (((contract_2)->user_allowed).data_3_6) = (Init_sol_uint256_t(
          GET_ND_UINT(119, 256, "ZebiCoin::allowed::_3_6")));
      (((contract_2)->user_allowed).data_4_0) = (Init_sol_uint256_t(
          GET_ND_UINT(120, 256, "ZebiCoin::allowed::_4_0")));
      (((contract_2)->user_allowed).data_4_1) = (Init_sol_uint256_t(
          GET_ND_UINT(121, 256, "ZebiCoin::allowed::_4_1")));
      (((contract_2)->user_allowed).data_4_2) = (Init_sol_uint256_t(
          GET_ND_UINT(122, 256, "ZebiCoin::allowed::_4_2")));
      (((contract_2)->user_allowed).data_4_3) = (Init_sol_uint256_t(
          GET_ND_UINT(123, 256, "ZebiCoin::allowed::_4_3")));
      (((contract_2)->user_allowed).data_4_4) = (Init_sol_uint256_t(
          GET_ND_UINT(124, 256, "ZebiCoin::allowed::_4_4")));
      (((contract_2)->user_allowed).data_4_5) = (Init_sol_uint256_t(
          GET_ND_UINT(125, 256, "ZebiCoin::allowed::_4_5")));
      (((contract_2)->user_allowed).data_4_6) = (Init_sol_uint256_t(
          GET_ND_UINT(126, 256, "ZebiCoin::allowed::_4_6")));
      (((contract_2)->user_allowed).data_5_0) = (Init_sol_uint256_t(
          GET_ND_UINT(127, 256, "ZebiCoin::allowed::_5_0")));
      (((contract_2)->user_allowed).data_5_1) = (Init_sol_uint256_t(
          GET_ND_UINT(128, 256, "ZebiCoin::allowed::_5_1")));
      (((contract_2)->user_allowed).data_5_2) = (Init_sol_uint256_t(
          GET_ND_UINT(129, 256, "ZebiCoin::allowed::_5_2")));
      (((contract_2)->user_allowed).data_5_3) = (Init_sol_uint256_t(
          GET_ND_UINT(130, 256, "ZebiCoin::allowed::_5_3")));
      (((contract_2)->user_allowed).data_5_4) = (Init_sol_uint256_t(
          GET_ND_UINT(131, 256, "ZebiCoin::allowed::_5_4")));
      (((contract_2)->user_allowed).data_5_5) = (Init_sol_uint256_t(
          GET_ND_UINT(132, 256, "ZebiCoin::allowed::_5_5")));
      (((contract_2)->user_allowed).data_5_6) = (Init_sol_uint256_t(
          GET_ND_UINT(133, 256, "ZebiCoin::allowed::_5_6")));
      (((contract_2)->user_allowed).data_6_0) = (Init_sol_uint256_t(
          GET_ND_UINT(134, 256, "ZebiCoin::allowed::_6_0")));
      (((contract_2)->user_allowed).data_6_1) = (Init_sol_uint256_t(
          GET_ND_UINT(135, 256, "ZebiCoin::allowed::_6_1")));
      (((contract_2)->user_allowed).data_6_2) = (Init_sol_uint256_t(
          GET_ND_UINT(136, 256, "ZebiCoin::allowed::_6_2")));
      (((contract_2)->user_allowed).data_6_3) = (Init_sol_uint256_t(
          GET_ND_UINT(137, 256, "ZebiCoin::allowed::_6_3")));
      (((contract_2)->user_allowed).data_6_4) = (Init_sol_uint256_t(
          GET_ND_UINT(138, 256, "ZebiCoin::allowed::_6_4")));
      (((contract_2)->user_allowed).data_6_5) = (Init_sol_uint256_t(
          GET_ND_UINT(139, 256, "ZebiCoin::allowed::_6_5")));
      (((contract_2)->user_allowed).data_6_6) = (Init_sol_uint256_t(
          GET_ND_UINT(140, 256, "ZebiCoin::allowed::_6_6")));
      (((contract_2)->user_balances).data_0) =
          (Init_sol_uint256_t(GET_ND_UINT(141, 256, "ZebiCoin::balances::_0")));
      (((contract_2)->user_balances).data_1) =
          (Init_sol_uint256_t(GET_ND_UINT(142, 256, "ZebiCoin::balances::_1")));
      (((contract_2)->user_balances).data_2) =
          (Init_sol_uint256_t(GET_ND_UINT(143, 256, "ZebiCoin::balances::_2")));
      (((contract_2)->user_balances).data_3) =
          (Init_sol_uint256_t(GET_ND_UINT(144, 256, "ZebiCoin::balances::_3")));
      (((contract_2)->user_balances).data_4) =
          (Init_sol_uint256_t(GET_ND_UINT(145, 256, "ZebiCoin::balances::_4")));
      (((contract_2)->user_balances).data_5) =
          (Init_sol_uint256_t(GET_ND_UINT(146, 256, "ZebiCoin::balances::_5")));
      (((contract_2)->user_balances).data_6) =
          (Init_sol_uint256_t(GET_ND_UINT(147, 256, "ZebiCoin::balances::_6")));
    }
    if (GET_ND_RANGE(150, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(148, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(149, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(151, 0, 35, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling finishMint() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(1, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_finishMint(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling resumeMint() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(2, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_resumeMint(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling startTransfer() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(3, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_startTransfer(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling endTransfer() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(4, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_endTransfer(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling transferTokenOwnership(owner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(5, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(6, 0, 7, "owner"));
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_transferTokenOwnership(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_owner);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling viewCancelledList(participant) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(7, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_participant =
          Init_sol_address_t(GET_ND_RANGE(8, 0, 7, "participant"));
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_viewCancelledList(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_participant);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling buyTokens(beneficiary) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(9, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(10, 256, "value"));
      sol_address_t arg_beneficiary =
          Init_sol_address_t(GET_ND_RANGE(11, 0, 7, "beneficiary"));
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_buyTokens(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_beneficiary);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling getTokenAmount(weiAmount) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(12, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg_weiAmount =
          Init_sol_uint256_t(GET_ND_UINT(13, 256, "weiAmount"));
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_getTokenAmount(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_weiAmount);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling enableRefundPeriod() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(14, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_enableRefundPeriod(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling disableRefundPeriod() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(15, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_disableRefundPeriod(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling emergencyStop() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(16, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_emergencyStop(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling release() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(17, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_release(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log("[Calling viewContribution(participant) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(18, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_participant =
          Init_sol_address_t(GET_ND_RANGE(19, 0, 7, "participant"));
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_viewContribution(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_participant);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log("[Calling refund() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(20, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_refund(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log("[Calling forcedRefund(_from) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(21, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(22, 0, 7, "_from"));
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_forcedRefund(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__from);
      smartace_log("[Call successful]");
      break;
    }
    case 15: {
      smartace_log("[Calling takeEth() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(23, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(24, 256, "value"));
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_takeEth(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 16: {
      smartace_log("[Calling withdraw(_value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(25, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(26, 256, "_value"));
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_withdraw(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 17: {
      smartace_log("[Calling addCancellation(_participant) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(27, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__participant =
          Init_sol_address_t(GET_ND_RANGE(28, 0, 7, "_participant"));
      ZCrowdsale_Method_For_ZebiCoinCrowdsale_addCancellation(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__participant);
      smartace_log("[Call successful]");
      break;
    }
    case 18: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(29, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(30, 0, 7, "newOwner"));
      Ownable_Method_For_ZebiCoinCrowdsale_transferOwnership(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 19: {
      smartace_log("[Calling () on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(31, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(32, 256, "value"));
      ZCrowdsale_Fallback_For_ZebiCoinCrowdsale(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 20: {
      smartace_log("[Calling mint(_to, _amount) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(33, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(34, 0, 7, "_to"));
      sol_uint256_t arg__amount =
          Init_sol_uint256_t(GET_ND_UINT(35, 256, "_amount"));
      MintableToken_Method_For_ZebiCoin_mint(contract_2, sender, value,
                                             blocknum, timestamp, paid, sender,
                                             arg__to, arg__amount);
      smartace_log("[Call successful]");
      break;
    }
    case 21: {
      smartace_log("[Calling finishMinting() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(36, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MintableToken_Method_For_ZebiCoin_finishMinting(
          contract_2, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 22: {
      smartace_log("[Calling resumeMinting() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(37, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MintableToken_Method_For_ZebiCoin_resumeMinting(
          contract_2, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 23: {
      smartace_log("[Calling burn(_from) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(38, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(39, 0, 7, "_from"));
      MintableToken_Method_For_ZebiCoin_burn(contract_2, sender, value,
                                             blocknum, timestamp, paid, sender,
                                             arg__from);
      smartace_log("[Call successful]");
      break;
    }
    case 24: {
      smartace_log("[Calling startTransfer() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(40, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MintableToken_Method_For_ZebiCoin_startTransfer(
          contract_2, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 25: {
      smartace_log("[Calling endTransfer() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(41, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MintableToken_Method_For_ZebiCoin_endTransfer(
          contract_2, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 26: {
      smartace_log("[Calling transfer(_to, _value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(42, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(43, 0, 7, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(44, 256, "_value"));
      MintableToken_Method_For_ZebiCoin_transfer(contract_2, sender, value,
                                                 blocknum, timestamp, paid,
                                                 sender, arg__to, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 27: {
      smartace_log("[Calling transferFrom(_from, _to, _value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(45, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(46, 0, 7, "_from"));
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(47, 0, 7, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(48, 256, "_value"));
      MintableToken_Method_For_ZebiCoin_transferFrom(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg__from, arg__to, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 28: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(49, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(50, 0, 7, "newOwner"));
      Ownable_Method_For_ZebiCoin_transferOwnership(contract_2, sender, value,
                                                    blocknum, timestamp, paid,
                                                    sender, arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 29: {
      smartace_log("[Calling approve(_spender, _value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(51, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(52, 0, 7, "_spender"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(53, 256, "_value"));
      StandardToken_Method_For_ZebiCoin_approve(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 30: {
      smartace_log("[Calling allowance(_owner, _spender) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(54, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(55, 0, 7, "_owner"));
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(56, 0, 7, "_spender"));
      StandardToken_Method_For_ZebiCoin_allowance(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg__owner, arg__spender);
      smartace_log("[Call successful]");
      break;
    }
    case 31: {
      smartace_log(
          "[Calling increaseApproval(_spender, _addedValue) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(57, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(58, 0, 7, "_spender"));
      sol_uint256_t arg__addedValue =
          Init_sol_uint256_t(GET_ND_UINT(59, 256, "_addedValue"));
      StandardToken_Method_For_ZebiCoin_increaseApproval(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 32: {
      smartace_log("[Calling decreaseApproval(_spender, _subtractedValue) on "
                   "contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(60, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(61, 0, 7, "_spender"));
      sol_uint256_t arg__subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(62, 256, "_subtractedValue"));
      StandardToken_Method_For_ZebiCoin_decreaseApproval(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 33: {
      smartace_log("[Calling totalSupply() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(63, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      BasicToken_Method_For_ZebiCoin_totalSupply(
          contract_2, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 34: {
      smartace_log("[Calling balanceOf(_owner) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(64, 3, 7, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(65, 0, 7, "_owner"));
      BasicToken_Method_For_ZebiCoin_balanceOf(contract_2, sender, value,
                                               blocknum, timestamp, paid,
                                               sender, arg__owner);
      smartace_log("[Call successful]");
      break;
    }
    default: { sol_require(0, "Model failure, next_call out of bounds."); }
    }
    if (prev_withinRefundPeriod.v != contract_1.user_withinRefundPeriod.v) {
      sol_assert(last_sender.v == contract_1.user_owner.v, "Property.");
    }
  }
}