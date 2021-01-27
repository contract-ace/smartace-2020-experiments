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
    sol_assert(0, "Fallback not allowed in: ICOCrowdsale");
  }
  if (((dst).v) == (2)) {
    return 0;
  }
  if (((dst).v) == (3)) {
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
struct Map_4 {
  sol_bool_t data_0;
  sol_bool_t data_1;
  sol_bool_t data_2;
  sol_bool_t data_3;
  sol_bool_t data_4;
  sol_bool_t data_5;
  sol_bool_t data_6;
  sol_bool_t data_7;
  sol_bool_t data_8;
  sol_bool_t data_9;
};
struct Map_5 {
  sol_bool_t data_0;
  sol_bool_t data_1;
  sol_bool_t data_2;
  sol_bool_t data_3;
  sol_bool_t data_4;
  sol_bool_t data_5;
  sol_bool_t data_6;
  sol_bool_t data_7;
  sol_bool_t data_8;
  sol_bool_t data_9;
};
struct Whitelist {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct Map_4 user_whitelist;
  struct Map_5 user_authorized;
  sol_address_t user_owner;
};
struct Map_2 {
  sol_uint256_t data_0_0;
  sol_uint256_t data_0_1;
  sol_uint256_t data_0_2;
  sol_uint256_t data_0_3;
  sol_uint256_t data_0_4;
  sol_uint256_t data_0_5;
  sol_uint256_t data_0_6;
  sol_uint256_t data_0_7;
  sol_uint256_t data_0_8;
  sol_uint256_t data_0_9;
  sol_uint256_t data_1_0;
  sol_uint256_t data_1_1;
  sol_uint256_t data_1_2;
  sol_uint256_t data_1_3;
  sol_uint256_t data_1_4;
  sol_uint256_t data_1_5;
  sol_uint256_t data_1_6;
  sol_uint256_t data_1_7;
  sol_uint256_t data_1_8;
  sol_uint256_t data_1_9;
  sol_uint256_t data_2_0;
  sol_uint256_t data_2_1;
  sol_uint256_t data_2_2;
  sol_uint256_t data_2_3;
  sol_uint256_t data_2_4;
  sol_uint256_t data_2_5;
  sol_uint256_t data_2_6;
  sol_uint256_t data_2_7;
  sol_uint256_t data_2_8;
  sol_uint256_t data_2_9;
  sol_uint256_t data_3_0;
  sol_uint256_t data_3_1;
  sol_uint256_t data_3_2;
  sol_uint256_t data_3_3;
  sol_uint256_t data_3_4;
  sol_uint256_t data_3_5;
  sol_uint256_t data_3_6;
  sol_uint256_t data_3_7;
  sol_uint256_t data_3_8;
  sol_uint256_t data_3_9;
  sol_uint256_t data_4_0;
  sol_uint256_t data_4_1;
  sol_uint256_t data_4_2;
  sol_uint256_t data_4_3;
  sol_uint256_t data_4_4;
  sol_uint256_t data_4_5;
  sol_uint256_t data_4_6;
  sol_uint256_t data_4_7;
  sol_uint256_t data_4_8;
  sol_uint256_t data_4_9;
  sol_uint256_t data_5_0;
  sol_uint256_t data_5_1;
  sol_uint256_t data_5_2;
  sol_uint256_t data_5_3;
  sol_uint256_t data_5_4;
  sol_uint256_t data_5_5;
  sol_uint256_t data_5_6;
  sol_uint256_t data_5_7;
  sol_uint256_t data_5_8;
  sol_uint256_t data_5_9;
  sol_uint256_t data_6_0;
  sol_uint256_t data_6_1;
  sol_uint256_t data_6_2;
  sol_uint256_t data_6_3;
  sol_uint256_t data_6_4;
  sol_uint256_t data_6_5;
  sol_uint256_t data_6_6;
  sol_uint256_t data_6_7;
  sol_uint256_t data_6_8;
  sol_uint256_t data_6_9;
  sol_uint256_t data_7_0;
  sol_uint256_t data_7_1;
  sol_uint256_t data_7_2;
  sol_uint256_t data_7_3;
  sol_uint256_t data_7_4;
  sol_uint256_t data_7_5;
  sol_uint256_t data_7_6;
  sol_uint256_t data_7_7;
  sol_uint256_t data_7_8;
  sol_uint256_t data_7_9;
  sol_uint256_t data_8_0;
  sol_uint256_t data_8_1;
  sol_uint256_t data_8_2;
  sol_uint256_t data_8_3;
  sol_uint256_t data_8_4;
  sol_uint256_t data_8_5;
  sol_uint256_t data_8_6;
  sol_uint256_t data_8_7;
  sol_uint256_t data_8_8;
  sol_uint256_t data_8_9;
  sol_uint256_t data_9_0;
  sol_uint256_t data_9_1;
  sol_uint256_t data_9_2;
  sol_uint256_t data_9_3;
  sol_uint256_t data_9_4;
  sol_uint256_t data_9_5;
  sol_uint256_t data_9_6;
  sol_uint256_t data_9_7;
  sol_uint256_t data_9_8;
  sol_uint256_t data_9_9;
};
struct Map_1 {
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
  sol_uint256_t data_6;
  sol_uint256_t data_7;
  sol_uint256_t data_8;
  sol_uint256_t data_9;
};
struct VUToken {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_bool_t user_paused;
  sol_address_t user_owner;
  struct Map_2 user_allowed;
  struct Map_1 user_balances;
  sol_uint256_t user_totalSupply__;
  sol_uint256_t user_name;
  sol_uint256_t user_symbol;
  sol_uint8_t user_decimals;
};
struct Map_3 {
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
  sol_uint256_t data_6;
  sol_uint256_t data_7;
  sol_uint256_t data_8;
  sol_uint256_t data_9;
};
struct ICOCrowdsale {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct Whitelist user_whitelist;
  sol_uint256_t user_tokensSold;
  sol_uint256_t user_deliveryTime;
  sol_uint256_t user_limit;
  sol_address_t user_owner;
  struct Map_3 user_balances;
  sol_uint256_t user_openingTime;
  sol_uint256_t user_closingTime;
  sol_address_t user_tokenWallet;
  struct VUToken user_token;
  sol_address_t user_wallet;
  sol_uint256_t user_rate;
  sol_uint256_t user_weiRaised;
};
sol_uint256_t SafeMath_Method_mul(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
struct Map_3 ZeroInit_Map_3(void);
sol_uint256_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0);
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_uint256_t dat);
void Crowdsale_Fallback_For_ICOCrowdsale(struct ICOCrowdsale *self,
                                         sol_address_t sender,
                                         sol_uint256_t value,
                                         sol_uint256_t blocknum,
                                         sol_uint256_t timestamp,
                                         sol_bool_t paid, sol_address_t origin);
void Crowdsale_Method_For_ICOCrowdsale___preValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___weiAmount);
void TimedCrowdsale_Method_1_For_ICOCrowdsale___preValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___weiAmount);
void TimedCrowdsale_Method_For_ICOCrowdsale___preValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___beneficiary,
    sol_uint256_t func_model___weiAmount);
void BaseCrowdsale_Method_1_For_ICOCrowdsale___preValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___weiAmount);
void BaseCrowdsale_Method_For_ICOCrowdsale___preValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___beneficiary,
    sol_uint256_t func_model___weiAmount);
void Crowdsale_Method_For_ICOCrowdsale___postValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___weiAmount);
void Crowdsale_Method_For_ICOCrowdsale___updatePurchasingState(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___weiAmount);
sol_uint256_t Crowdsale_Method_For_ICOCrowdsale___getTokenAmount(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___weiAmount);
void Crowdsale_Method_For_ICOCrowdsale___forwardFunds(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void AllowanceCrowdsale_Method_For_ICOCrowdsale___deliverTokens(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___tokenAmount);
void PostDeliveryCrowdsale_Method_For_ICOCrowdsale___processPurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___tokenAmount);
void BaseCrowdsale_Method_For_ICOCrowdsale___processPurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___tokenAmount);
void BaseCrowdsale_Method_For_ICOCrowdsale___init(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
struct Map_4 ZeroInit_Map_4(void);
sol_bool_t Read_Map_4(struct Map_4 *arr, sol_address_t key_0);
void Write_Map_4(struct Map_4 *arr, sol_address_t key_0, sol_bool_t dat);
struct Map_5 ZeroInit_Map_5(void);
sol_bool_t Read_Map_5(struct Map_5 *arr, sol_address_t key_0);
void Write_Map_5(struct Map_5 *arr, sol_address_t key_0, sol_bool_t dat);
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
  ((tmp).data_7) = (Init_sol_uint256_t(0));
  ((tmp).data_8) = (Init_sol_uint256_t(0));
  ((tmp).data_9) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0) {
  {
    sol_assert((10) >= ((key_0).v),
               "Model failure, mapping key out of bounds.");
    if ((9) == ((key_0).v))
      return (arr)->data_9;
    else if ((8) == ((key_0).v))
      return (arr)->data_8;
    else if ((7) == ((key_0).v))
      return (arr)->data_7;
    else if ((6) == ((key_0).v))
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
    sol_assert((10) >= ((key_0).v),
               "Model failure, mapping key out of bounds.");
    if ((9) == ((key_0).v)) {
      ((arr)->data_9) = (dat);
    } else if ((8) == ((key_0).v)) {
      ((arr)->data_8) = (dat);
    } else if ((7) == ((key_0).v)) {
      ((arr)->data_7) = (dat);
    } else if ((6) == ((key_0).v)) {
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
void ICOCrowdsale_Constructor(struct ICOCrowdsale *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin,
                              sol_address_t func_user___tokenWallet,
                              sol_address_t func_user___wallet,
                              sol_uint256_t func_user___openingTime,
                              sol_uint256_t func_user___closingTime,
                              sol_uint256_t func_user___deliveryTime) {}
void BaseCrowdsale_Constructor_For_ICOCrowdsale(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___tokenWallet,
    sol_address_t func_user___wallet, sol_uint256_t func_user___rate,
    sol_uint256_t func_user___openingTime,
    sol_uint256_t func_user___closingTime,
    sol_uint256_t func_user___deliveryTime, sol_uint256_t func_user___limit) {
  sol_require(((timestamp).v) < ((func_user___deliveryTime).v), 0);
  sol_require(((func_user___limit).v) > (0), 0);
  sol_require(((func_user___deliveryTime).v) < (((timestamp).v) + (8640000)),
              0);
  Init_Whitelist(&(self->user_whitelist), (self)->model_address,
                 Init_sol_uint256_t(0), blocknum, timestamp, Init_sol_bool_t(1),
                 origin);
  sol_require((((self->user_whitelist).model_address).v) !=
                  (((int)(g_literal_address_0))),
              0);
  ((self->user_deliveryTime).v) = ((func_user___deliveryTime).v);
  ((self->user_limit).v) = ((func_user___limit).v);
  BaseCrowdsale_Method_For_ICOCrowdsale___init(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Crowdsale_Constructor_For_ICOCrowdsale(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___rate,
    sol_address_t func_user___wallet) {
  sol_require(((func_user___rate).v) > (0), 0);
  sol_require(((func_user___wallet).v) != (((int)(g_literal_address_0))), 0);
  sol_require(((func_user___wallet).v) != (((self)->model_address).v), 0);
  ((self->user_rate).v) = ((func_user___rate).v);
  ((self->user_wallet).v) = ((func_user___wallet).v);
  Init_VUToken(&(self->user_token), (self)->model_address,
               Init_sol_uint256_t(0), blocknum, timestamp, Init_sol_bool_t(1),
               origin);
  sol_require((((self->user_token).model_address).v) !=
                  (((int)(g_literal_address_0))),
              0);
}
void Init_Crowdsale_For_ICOCrowdsale(struct ICOCrowdsale *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin,
                                     sol_uint256_t user___rate,
                                     sol_address_t user___wallet) {
  ((self)->user_wallet) = (Init_sol_address_t(0));
  ((self)->user_rate) = (Init_sol_uint256_t(0));
  ((self)->user_weiRaised) = (Init_sol_uint256_t(0));
  Crowdsale_Constructor_For_ICOCrowdsale(self, sender, value, blocknum,
                                         timestamp, Init_sol_bool_t(0), origin,
                                         user___rate, user___wallet);
}
void AllowanceCrowdsale_Constructor_For_ICOCrowdsale(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___tokenWallet) {
  sol_require(((func_user___tokenWallet).v) != (((int)(g_literal_address_0))),
              0);
  ((self->user_tokenWallet).v) = ((func_user___tokenWallet).v);
}
void Init_AllowanceCrowdsale_For_ICOCrowdsale(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t user___tokenWallet) {
  ((self)->user_tokenWallet) = (Init_sol_address_t(0));
  AllowanceCrowdsale_Constructor_For_ICOCrowdsale(self, sender, value, blocknum,
                                                  timestamp, Init_sol_bool_t(0),
                                                  origin, user___tokenWallet);
}
void TimedCrowdsale_Constructor_For_ICOCrowdsale(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___openingTime,
    sol_uint256_t func_user___closingTime) {
  sol_require(((func_user___openingTime).v) >= ((timestamp).v), 0);
  sol_require(((func_user___closingTime).v) >= ((func_user___openingTime).v),
              0);
  ((self->user_openingTime).v) = ((func_user___openingTime).v);
  ((self->user_closingTime).v) = ((func_user___closingTime).v);
}
void Init_TimedCrowdsale_For_ICOCrowdsale(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user___openingTime,
    sol_uint256_t user___closingTime) {
  ((self)->user_openingTime) = (Init_sol_uint256_t(0));
  ((self)->user_closingTime) = (Init_sol_uint256_t(0));
  TimedCrowdsale_Constructor_For_ICOCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      user___openingTime, user___closingTime);
}
void Init_PostDeliveryCrowdsale_For_ICOCrowdsale(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self)->user_balances) = (ZeroInit_Map_3());
}
void Ownable_Constructor_For_ICOCrowdsale(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Ownable_For_ICOCrowdsale(struct ICOCrowdsale *self,
                                   sol_address_t sender, sol_uint256_t value,
                                   sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin) {
  ((self)->user_owner) = (Init_sol_address_t(0));
  Ownable_Constructor_For_ICOCrowdsale(self, sender, value, blocknum, timestamp,
                                       Init_sol_bool_t(0), origin);
}
void Init_BaseCrowdsale_For_ICOCrowdsale(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t user___tokenWallet,
    sol_address_t user___wallet, sol_uint256_t user___rate,
    sol_uint256_t user___openingTime, sol_uint256_t user___closingTime,
    sol_uint256_t user___deliveryTime, sol_uint256_t user___limit) {
  Init_Crowdsale_For_ICOCrowdsale(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin,
                                  Init_sol_uint256_t((user___rate).v),
                                  Init_sol_address_t((user___wallet).v));
  Init_AllowanceCrowdsale_For_ICOCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((user___tokenWallet).v));
  Init_TimedCrowdsale_For_ICOCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t((user___openingTime).v),
      Init_sol_uint256_t((user___closingTime).v));
  Init_PostDeliveryCrowdsale_For_ICOCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  Init_Ownable_For_ICOCrowdsale(self, sender, value, blocknum, timestamp,
                                Init_sol_bool_t(0), origin);
  ((self)->user_tokensSold) = (Init_sol_uint256_t(0));
  ((self)->user_deliveryTime) = (Init_sol_uint256_t(0));
  ((self)->user_limit) = (Init_sol_uint256_t(0));
  BaseCrowdsale_Constructor_For_ICOCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      user___tokenWallet, user___wallet, user___rate, user___openingTime,
      user___closingTime, user___deliveryTime, user___limit);
}
void Init_ICOCrowdsale(struct ICOCrowdsale *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin, sol_address_t user___tokenWallet,
                       sol_address_t user___wallet,
                       sol_uint256_t user___openingTime,
                       sol_uint256_t user___closingTime,
                       sol_uint256_t user___deliveryTime) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_BaseCrowdsale_For_ICOCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((user___tokenWallet).v),
      Init_sol_address_t((user___wallet).v), Init_sol_uint256_t(6000),
      Init_sol_uint256_t((user___openingTime).v),
      Init_sol_uint256_t((user___closingTime).v),
      Init_sol_uint256_t((user___deliveryTime).v),
      Init_sol_uint256_t(450000000));
  ICOCrowdsale_Constructor(self, sender, value, blocknum, timestamp,
                           Init_sol_bool_t(0), origin, user___tokenWallet,
                           user___wallet, user___openingTime,
                           user___closingTime, user___deliveryTime);
}
void Crowdsale_Fallback_For_ICOCrowdsale(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  Crowdsale_Method_For_ICOCrowdsale_buyTokens(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v));
}
void PostDeliveryCrowdsale_Method_For_ICOCrowdsale_withdrawTokens(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require((TimedCrowdsale_Method_For_ICOCrowdsale_hasClosed(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin))
                  .v,
              0);
  sol_uint256_t func_user_amount = Init_sol_uint256_t(
      (Read_Map_3(&(self->user_balances), Init_sol_address_t((sender).v))).v);
  sol_require(((func_user_amount).v) > (0), 0);
  Write_Map_3(&(self->user_balances), Init_sol_address_t((sender).v),
              Init_sol_uint256_t(0));
  AllowanceCrowdsale_Method_For_ICOCrowdsale___deliverTokens(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_uint256_t((func_user_amount).v));
}
void BaseCrowdsale_Method_For_ICOCrowdsale_withdrawTokens(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((timestamp).v) >= ((self->user_deliveryTime).v), 0);
  PostDeliveryCrowdsale_Method_For_ICOCrowdsale_withdrawTokens(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Ownable_Method_1_For_ICOCrowdsale_transferOwnership(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner) {
  sol_require(((func_user_newOwner).v) != (((int)(g_literal_address_0))), 0);
  sol_emit("OwnershipTransferred(owner, newOwner)");
  ((self->user_owner).v) = ((func_user_newOwner).v);
}
void Ownable_Method_For_ICOCrowdsale_transferOwnership(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Ownable_Method_1_For_ICOCrowdsale_transferOwnership(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_newOwner);
}
sol_bool_t TimedCrowdsale_Method_For_ICOCrowdsale_hasClosed(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_bool_t(((timestamp).v) > ((self->user_closingTime).v)); }
}
sol_uint256_t AllowanceCrowdsale_Method_For_ICOCrowdsale_remainingTokens(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  {
    return Init_sol_uint256_t(
        (StandardToken_Method_For_VUToken_allowance(
             &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
             blocknum, timestamp, Init_sol_bool_t(1), origin,
             Init_sol_address_t((self->user_tokenWallet).v),
             Init_sol_address_t(((self)->model_address).v)))
            .v);
  }
}
void Crowdsale_Method_For_ICOCrowdsale_buyTokens(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_uint256_t func_user_weiAmount = Init_sol_uint256_t((value).v);
  BaseCrowdsale_Method_For_ICOCrowdsale___preValidatePurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user___beneficiary).v),
      Init_sol_uint256_t((func_user_weiAmount).v));
  sol_uint256_t func_user_tokens = Init_sol_uint256_t(
      (Crowdsale_Method_For_ICOCrowdsale___getTokenAmount(
           self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
           Init_sol_uint256_t((func_user_weiAmount).v)))
          .v);
  ((self->user_weiRaised).v) =
      ((SafeMath_Method_add(Init_sol_uint256_t((self->user_weiRaised).v),
                            Init_sol_uint256_t((func_user_weiAmount).v)))
           .v);
  BaseCrowdsale_Method_For_ICOCrowdsale___processPurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user___beneficiary).v),
      Init_sol_uint256_t((func_user_tokens).v));
  sol_emit("TokenPurchase(msg.sender, _beneficiary, weiAmount, tokens)");
  Crowdsale_Method_For_ICOCrowdsale___updatePurchasingState(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user___beneficiary).v),
      Init_sol_uint256_t((func_user_weiAmount).v));
  Crowdsale_Method_For_ICOCrowdsale___forwardFunds(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  Crowdsale_Method_For_ICOCrowdsale___postValidatePurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user___beneficiary).v),
      Init_sol_uint256_t((func_user_weiAmount).v));
}
void Crowdsale_Method_For_ICOCrowdsale___preValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___weiAmount) {
  sol_require(((func_user___beneficiary).v) != (((int)(g_literal_address_0))),
              0);
  sol_require(((func_user___weiAmount).v) != (0), 0);
}
void TimedCrowdsale_Method_1_For_ICOCrowdsale___preValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___weiAmount) {
  Crowdsale_Method_For_ICOCrowdsale___preValidatePurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user___beneficiary).v),
      Init_sol_uint256_t((func_user___weiAmount).v));
}
void TimedCrowdsale_Method_For_ICOCrowdsale___preValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___beneficiary,
    sol_uint256_t func_model___weiAmount) {
  sol_require((((timestamp).v) >= ((self->user_openingTime).v)) &&
                  (((timestamp).v) <= ((self->user_closingTime).v)),
              0);
  TimedCrowdsale_Method_1_For_ICOCrowdsale___preValidatePurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___beneficiary, func_model___weiAmount);
}
void BaseCrowdsale_Method_1_For_ICOCrowdsale___preValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___weiAmount) {
  TimedCrowdsale_Method_For_ICOCrowdsale___preValidatePurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user___beneficiary).v),
      Init_sol_uint256_t((func_user___weiAmount).v));
}
void BaseCrowdsale_Method_For_ICOCrowdsale___preValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___beneficiary,
    sol_uint256_t func_model___weiAmount) {
  sol_address_t func_user___beneficiary =
      Init_sol_address_t((func_model___beneficiary).v);
  sol_require(
      (Whitelist_Method_isWhitelisted(
           &(self->user_whitelist), (self)->model_address,
           Init_sol_uint256_t(0), blocknum, timestamp, Init_sol_bool_t(1),
           origin, Init_sol_address_t((func_user___beneficiary).v)))
          .v,
      0);
  BaseCrowdsale_Method_1_For_ICOCrowdsale___preValidatePurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___beneficiary, func_model___weiAmount);
}
void Crowdsale_Method_For_ICOCrowdsale___postValidatePurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___weiAmount) {}
void Crowdsale_Method_For_ICOCrowdsale___updatePurchasingState(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___weiAmount) {}
sol_uint256_t Crowdsale_Method_For_ICOCrowdsale___getTokenAmount(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___weiAmount) {
  {
    return Init_sol_uint256_t(
        (SafeMath_Method_mul(Init_sol_uint256_t((func_user___weiAmount).v),
                             Init_sol_uint256_t((self->user_rate).v)))
            .v);
  }
}
void Crowdsale_Method_For_ICOCrowdsale___forwardFunds(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_transfer(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
               Init_sol_address_t((self->user_wallet).v),
               Init_sol_uint256_t((value).v));
}
void AllowanceCrowdsale_Method_For_ICOCrowdsale___deliverTokens(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___tokenAmount) {
  (PausableToken_Method_For_VUToken_transferFrom(
       &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
       blocknum, timestamp, Init_sol_bool_t(1), origin,
       Init_sol_address_t((self->user_tokenWallet).v),
       Init_sol_address_t((func_user___beneficiary).v),
       Init_sol_uint256_t((func_user___tokenAmount).v)))
      .v;
}
void PostDeliveryCrowdsale_Method_For_ICOCrowdsale___processPurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___tokenAmount) {
  Write_Map_3(
      &(self->user_balances), Init_sol_address_t((func_user___beneficiary).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_3(&(self->user_balances),
                               Init_sol_address_t((func_user___beneficiary).v)))
                       .v),
               Init_sol_uint256_t((func_user___tokenAmount).v)))
              .v));
}
void BaseCrowdsale_Method_For_ICOCrowdsale___processPurchase(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary,
    sol_uint256_t func_user___tokenAmount) {
  ((self->user_tokensSold).v) =
      ((SafeMath_Method_add(Init_sol_uint256_t((self->user_tokensSold).v),
                            Init_sol_uint256_t((func_user___tokenAmount).v)))
           .v);
  sol_require(((self->user_limit).v) >= ((self->user_tokensSold).v), 0);
  PostDeliveryCrowdsale_Method_For_ICOCrowdsale___processPurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user___beneficiary).v),
      Init_sol_uint256_t((func_user___tokenAmount).v));
}
void BaseCrowdsale_Method_For_ICOCrowdsale___init(
    struct ICOCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {}
struct Map_4 ZeroInit_Map_4(void) {
  struct Map_4 tmp;
  ((tmp).data_0) = (Init_sol_bool_t(0));
  ((tmp).data_1) = (Init_sol_bool_t(0));
  ((tmp).data_2) = (Init_sol_bool_t(0));
  ((tmp).data_3) = (Init_sol_bool_t(0));
  ((tmp).data_4) = (Init_sol_bool_t(0));
  ((tmp).data_5) = (Init_sol_bool_t(0));
  ((tmp).data_6) = (Init_sol_bool_t(0));
  ((tmp).data_7) = (Init_sol_bool_t(0));
  ((tmp).data_8) = (Init_sol_bool_t(0));
  ((tmp).data_9) = (Init_sol_bool_t(0));
  return tmp;
}
sol_bool_t Read_Map_4(struct Map_4 *arr, sol_address_t key_0) {
  {
    sol_assert((10) >= ((key_0).v),
               "Model failure, mapping key out of bounds.");
    if ((9) == ((key_0).v))
      return (arr)->data_9;
    else if ((8) == ((key_0).v))
      return (arr)->data_8;
    else if ((7) == ((key_0).v))
      return (arr)->data_7;
    else if ((6) == ((key_0).v))
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
    sol_assert((10) >= ((key_0).v),
               "Model failure, mapping key out of bounds.");
    if ((9) == ((key_0).v)) {
      ((arr)->data_9) = (dat);
    } else if ((8) == ((key_0).v)) {
      ((arr)->data_8) = (dat);
    } else if ((7) == ((key_0).v)) {
      ((arr)->data_7) = (dat);
    } else if ((6) == ((key_0).v)) {
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
struct Map_5 ZeroInit_Map_5(void) {
  struct Map_5 tmp;
  ((tmp).data_0) = (Init_sol_bool_t(0));
  ((tmp).data_1) = (Init_sol_bool_t(0));
  ((tmp).data_2) = (Init_sol_bool_t(0));
  ((tmp).data_3) = (Init_sol_bool_t(0));
  ((tmp).data_4) = (Init_sol_bool_t(0));
  ((tmp).data_5) = (Init_sol_bool_t(0));
  ((tmp).data_6) = (Init_sol_bool_t(0));
  ((tmp).data_7) = (Init_sol_bool_t(0));
  ((tmp).data_8) = (Init_sol_bool_t(0));
  ((tmp).data_9) = (Init_sol_bool_t(0));
  return tmp;
}
sol_bool_t Read_Map_5(struct Map_5 *arr, sol_address_t key_0) {
  {
    sol_assert((10) >= ((key_0).v),
               "Model failure, mapping key out of bounds.");
    if ((9) == ((key_0).v))
      return (arr)->data_9;
    else if ((8) == ((key_0).v))
      return (arr)->data_8;
    else if ((7) == ((key_0).v))
      return (arr)->data_7;
    else if ((6) == ((key_0).v))
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
void Write_Map_5(struct Map_5 *arr, sol_address_t key_0, sol_bool_t dat) {
  {
    sol_assert((10) >= ((key_0).v),
               "Model failure, mapping key out of bounds.");
    if ((9) == ((key_0).v)) {
      ((arr)->data_9) = (dat);
    } else if ((8) == ((key_0).v)) {
      ((arr)->data_8) = (dat);
    } else if ((7) == ((key_0).v)) {
      ((arr)->data_7) = (dat);
    } else if ((6) == ((key_0).v)) {
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
void Ownable_Constructor_For_Whitelist(struct Whitelist *self,
                                       sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Ownable_For_Whitelist(struct Whitelist *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin) {
  ((self)->user_owner) = (Init_sol_address_t(0));
  Ownable_Constructor_For_Whitelist(self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin);
}
void Init_Whitelist(struct Whitelist *self, sol_address_t sender,
                    sol_uint256_t value, sol_uint256_t blocknum,
                    sol_uint256_t timestamp, sol_bool_t paid,
                    sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_Ownable_For_Whitelist(self, sender, value, blocknum, timestamp,
                             Init_sol_bool_t(0), origin);
  ((self)->user_whitelist) = (ZeroInit_Map_4());
  ((self)->user_authorized) = (ZeroInit_Map_5());
}
void Whitelist_Method_1_authorize(struct Whitelist *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin,
                                  sol_address_t func_user___admin) {
  Write_Map_5(&(self->user_authorized),
              Init_sol_address_t((func_user___admin).v), Init_sol_bool_t(1));
}
void Whitelist_Method_authorize(struct Whitelist *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin,
                                sol_address_t func_model___admin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Whitelist_Method_1_authorize(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin, func_model___admin);
}
void Whitelist_Method_1_reject(struct Whitelist *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin,
                               sol_address_t func_user___admin) {
  Write_Map_5(&(self->user_authorized),
              Init_sol_address_t((func_user___admin).v), Init_sol_bool_t(0));
}
void Whitelist_Method_reject(struct Whitelist *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin,
                             sol_address_t func_model___admin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Whitelist_Method_1_reject(self, sender, value, blocknum, timestamp,
                            Init_sol_bool_t(0), origin, func_model___admin);
}
void Whitelist_Method_1_addToWhitelist(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary) {
  Write_Map_4(&(self->user_whitelist),
              Init_sol_address_t((func_user___beneficiary).v),
              Init_sol_bool_t(1));
  sol_emit("UserAllowed(_beneficiary)");
}
void Whitelist_Method_addToWhitelist(struct Whitelist *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin,
                                     sol_address_t func_model___beneficiary) {
  sol_require((((sender).v) == ((self->user_owner).v)) ||
                  ((Read_Map_5(&(self->user_authorized),
                               Init_sol_address_t((sender).v)))
                       .v),
              0);
  Whitelist_Method_1_addToWhitelist(self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin,
                                    func_model___beneficiary);
}
void Whitelist_Method_1_removeFromWhitelist(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary) {
  Write_Map_4(&(self->user_whitelist),
              Init_sol_address_t((func_user___beneficiary).v),
              Init_sol_bool_t(0));
  sol_emit("UserDisallowed(_beneficiary)");
}
void Whitelist_Method_removeFromWhitelist(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___beneficiary) {
  sol_require((((sender).v) == ((self->user_owner).v)) ||
                  ((Read_Map_5(&(self->user_authorized),
                               Init_sol_address_t((sender).v)))
                       .v),
              0);
  Whitelist_Method_1_removeFromWhitelist(self, sender, value, blocknum,
                                         timestamp, Init_sol_bool_t(0), origin,
                                         func_model___beneficiary);
}
sol_bool_t Whitelist_Method_isWhitelisted(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___beneficiary) {
  {
    return Init_sol_bool_t(
        (Read_Map_4(&(self->user_whitelist),
                    Init_sol_address_t((func_user___beneficiary).v)))
            .v);
  }
}
void Ownable_Method_1_For_Whitelist_transferOwnership(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner) {
  sol_require(((func_user_newOwner).v) != (((int)(g_literal_address_0))), 0);
  sol_emit("OwnershipTransferred(owner, newOwner)");
  ((self->user_owner).v) = ((func_user_newOwner).v);
}
void Ownable_Method_For_Whitelist_transferOwnership(
    struct Whitelist *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Ownable_Method_1_For_Whitelist_transferOwnership(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_newOwner);
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
  ((tmp).data_0_7) = (Init_sol_uint256_t(0));
  ((tmp).data_0_8) = (Init_sol_uint256_t(0));
  ((tmp).data_0_9) = (Init_sol_uint256_t(0));
  ((tmp).data_1_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1_1) = (Init_sol_uint256_t(0));
  ((tmp).data_1_2) = (Init_sol_uint256_t(0));
  ((tmp).data_1_3) = (Init_sol_uint256_t(0));
  ((tmp).data_1_4) = (Init_sol_uint256_t(0));
  ((tmp).data_1_5) = (Init_sol_uint256_t(0));
  ((tmp).data_1_6) = (Init_sol_uint256_t(0));
  ((tmp).data_1_7) = (Init_sol_uint256_t(0));
  ((tmp).data_1_8) = (Init_sol_uint256_t(0));
  ((tmp).data_1_9) = (Init_sol_uint256_t(0));
  ((tmp).data_2_0) = (Init_sol_uint256_t(0));
  ((tmp).data_2_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2_2) = (Init_sol_uint256_t(0));
  ((tmp).data_2_3) = (Init_sol_uint256_t(0));
  ((tmp).data_2_4) = (Init_sol_uint256_t(0));
  ((tmp).data_2_5) = (Init_sol_uint256_t(0));
  ((tmp).data_2_6) = (Init_sol_uint256_t(0));
  ((tmp).data_2_7) = (Init_sol_uint256_t(0));
  ((tmp).data_2_8) = (Init_sol_uint256_t(0));
  ((tmp).data_2_9) = (Init_sol_uint256_t(0));
  ((tmp).data_3_0) = (Init_sol_uint256_t(0));
  ((tmp).data_3_1) = (Init_sol_uint256_t(0));
  ((tmp).data_3_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3_3) = (Init_sol_uint256_t(0));
  ((tmp).data_3_4) = (Init_sol_uint256_t(0));
  ((tmp).data_3_5) = (Init_sol_uint256_t(0));
  ((tmp).data_3_6) = (Init_sol_uint256_t(0));
  ((tmp).data_3_7) = (Init_sol_uint256_t(0));
  ((tmp).data_3_8) = (Init_sol_uint256_t(0));
  ((tmp).data_3_9) = (Init_sol_uint256_t(0));
  ((tmp).data_4_0) = (Init_sol_uint256_t(0));
  ((tmp).data_4_1) = (Init_sol_uint256_t(0));
  ((tmp).data_4_2) = (Init_sol_uint256_t(0));
  ((tmp).data_4_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4_4) = (Init_sol_uint256_t(0));
  ((tmp).data_4_5) = (Init_sol_uint256_t(0));
  ((tmp).data_4_6) = (Init_sol_uint256_t(0));
  ((tmp).data_4_7) = (Init_sol_uint256_t(0));
  ((tmp).data_4_8) = (Init_sol_uint256_t(0));
  ((tmp).data_4_9) = (Init_sol_uint256_t(0));
  ((tmp).data_5_0) = (Init_sol_uint256_t(0));
  ((tmp).data_5_1) = (Init_sol_uint256_t(0));
  ((tmp).data_5_2) = (Init_sol_uint256_t(0));
  ((tmp).data_5_3) = (Init_sol_uint256_t(0));
  ((tmp).data_5_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5_5) = (Init_sol_uint256_t(0));
  ((tmp).data_5_6) = (Init_sol_uint256_t(0));
  ((tmp).data_5_7) = (Init_sol_uint256_t(0));
  ((tmp).data_5_8) = (Init_sol_uint256_t(0));
  ((tmp).data_5_9) = (Init_sol_uint256_t(0));
  ((tmp).data_6_0) = (Init_sol_uint256_t(0));
  ((tmp).data_6_1) = (Init_sol_uint256_t(0));
  ((tmp).data_6_2) = (Init_sol_uint256_t(0));
  ((tmp).data_6_3) = (Init_sol_uint256_t(0));
  ((tmp).data_6_4) = (Init_sol_uint256_t(0));
  ((tmp).data_6_5) = (Init_sol_uint256_t(0));
  ((tmp).data_6_6) = (Init_sol_uint256_t(0));
  ((tmp).data_6_7) = (Init_sol_uint256_t(0));
  ((tmp).data_6_8) = (Init_sol_uint256_t(0));
  ((tmp).data_6_9) = (Init_sol_uint256_t(0));
  ((tmp).data_7_0) = (Init_sol_uint256_t(0));
  ((tmp).data_7_1) = (Init_sol_uint256_t(0));
  ((tmp).data_7_2) = (Init_sol_uint256_t(0));
  ((tmp).data_7_3) = (Init_sol_uint256_t(0));
  ((tmp).data_7_4) = (Init_sol_uint256_t(0));
  ((tmp).data_7_5) = (Init_sol_uint256_t(0));
  ((tmp).data_7_6) = (Init_sol_uint256_t(0));
  ((tmp).data_7_7) = (Init_sol_uint256_t(0));
  ((tmp).data_7_8) = (Init_sol_uint256_t(0));
  ((tmp).data_7_9) = (Init_sol_uint256_t(0));
  ((tmp).data_8_0) = (Init_sol_uint256_t(0));
  ((tmp).data_8_1) = (Init_sol_uint256_t(0));
  ((tmp).data_8_2) = (Init_sol_uint256_t(0));
  ((tmp).data_8_3) = (Init_sol_uint256_t(0));
  ((tmp).data_8_4) = (Init_sol_uint256_t(0));
  ((tmp).data_8_5) = (Init_sol_uint256_t(0));
  ((tmp).data_8_6) = (Init_sol_uint256_t(0));
  ((tmp).data_8_7) = (Init_sol_uint256_t(0));
  ((tmp).data_8_8) = (Init_sol_uint256_t(0));
  ((tmp).data_8_9) = (Init_sol_uint256_t(0));
  ((tmp).data_9_0) = (Init_sol_uint256_t(0));
  ((tmp).data_9_1) = (Init_sol_uint256_t(0));
  ((tmp).data_9_2) = (Init_sol_uint256_t(0));
  ((tmp).data_9_3) = (Init_sol_uint256_t(0));
  ((tmp).data_9_4) = (Init_sol_uint256_t(0));
  ((tmp).data_9_5) = (Init_sol_uint256_t(0));
  ((tmp).data_9_6) = (Init_sol_uint256_t(0));
  ((tmp).data_9_7) = (Init_sol_uint256_t(0));
  ((tmp).data_9_8) = (Init_sol_uint256_t(0));
  ((tmp).data_9_9) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1) {
  {
    sol_assert((10) >= ((key_0).v),
               "Model failure, mapping key out of bounds.");
    sol_assert((10) >= ((key_1).v),
               "Model failure, mapping key out of bounds.");
    if ((9) == ((key_0).v)) {
      if ((9) == ((key_1).v))
        return (arr)->data_9_9;
      else if ((8) == ((key_1).v))
        return (arr)->data_9_8;
      else if ((7) == ((key_1).v))
        return (arr)->data_9_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_9_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_9_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_9_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_9_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_9_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_9_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_9_0;
    } else if ((8) == ((key_0).v)) {
      if ((9) == ((key_1).v))
        return (arr)->data_8_9;
      else if ((8) == ((key_1).v))
        return (arr)->data_8_8;
      else if ((7) == ((key_1).v))
        return (arr)->data_8_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_8_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_8_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_8_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_8_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_8_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_8_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_8_0;
    } else if ((7) == ((key_0).v)) {
      if ((9) == ((key_1).v))
        return (arr)->data_7_9;
      else if ((8) == ((key_1).v))
        return (arr)->data_7_8;
      else if ((7) == ((key_1).v))
        return (arr)->data_7_7;
      else if ((6) == ((key_1).v))
        return (arr)->data_7_6;
      else if ((5) == ((key_1).v))
        return (arr)->data_7_5;
      else if ((4) == ((key_1).v))
        return (arr)->data_7_4;
      else if ((3) == ((key_1).v))
        return (arr)->data_7_3;
      else if ((2) == ((key_1).v))
        return (arr)->data_7_2;
      else if ((1) == ((key_1).v))
        return (arr)->data_7_1;
      else if ((0) == ((key_1).v))
        return (arr)->data_7_0;
    } else if ((6) == ((key_0).v)) {
      if ((9) == ((key_1).v))
        return (arr)->data_6_9;
      else if ((8) == ((key_1).v))
        return (arr)->data_6_8;
      else if ((7) == ((key_1).v))
        return (arr)->data_6_7;
      else if ((6) == ((key_1).v))
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
      if ((9) == ((key_1).v))
        return (arr)->data_5_9;
      else if ((8) == ((key_1).v))
        return (arr)->data_5_8;
      else if ((7) == ((key_1).v))
        return (arr)->data_5_7;
      else if ((6) == ((key_1).v))
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
      if ((9) == ((key_1).v))
        return (arr)->data_4_9;
      else if ((8) == ((key_1).v))
        return (arr)->data_4_8;
      else if ((7) == ((key_1).v))
        return (arr)->data_4_7;
      else if ((6) == ((key_1).v))
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
      if ((9) == ((key_1).v))
        return (arr)->data_3_9;
      else if ((8) == ((key_1).v))
        return (arr)->data_3_8;
      else if ((7) == ((key_1).v))
        return (arr)->data_3_7;
      else if ((6) == ((key_1).v))
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
      if ((9) == ((key_1).v))
        return (arr)->data_2_9;
      else if ((8) == ((key_1).v))
        return (arr)->data_2_8;
      else if ((7) == ((key_1).v))
        return (arr)->data_2_7;
      else if ((6) == ((key_1).v))
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
      if ((9) == ((key_1).v))
        return (arr)->data_1_9;
      else if ((8) == ((key_1).v))
        return (arr)->data_1_8;
      else if ((7) == ((key_1).v))
        return (arr)->data_1_7;
      else if ((6) == ((key_1).v))
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
      if ((9) == ((key_1).v))
        return (arr)->data_0_9;
      else if ((8) == ((key_1).v))
        return (arr)->data_0_8;
      else if ((7) == ((key_1).v))
        return (arr)->data_0_7;
      else if ((6) == ((key_1).v))
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
    sol_assert((10) >= ((key_0).v),
               "Model failure, mapping key out of bounds.");
    sol_assert((10) >= ((key_1).v),
               "Model failure, mapping key out of bounds.");
    if ((9) == ((key_0).v)) {
      if ((9) == ((key_1).v)) {
        ((arr)->data_9_9) = (dat);
      } else if ((8) == ((key_1).v)) {
        ((arr)->data_9_8) = (dat);
      } else if ((7) == ((key_1).v)) {
        ((arr)->data_9_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_9_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_9_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_9_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_9_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_9_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_9_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_9_0) = (dat);
      }
    } else if ((8) == ((key_0).v)) {
      if ((9) == ((key_1).v)) {
        ((arr)->data_8_9) = (dat);
      } else if ((8) == ((key_1).v)) {
        ((arr)->data_8_8) = (dat);
      } else if ((7) == ((key_1).v)) {
        ((arr)->data_8_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_8_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_8_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_8_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_8_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_8_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_8_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_8_0) = (dat);
      }
    } else if ((7) == ((key_0).v)) {
      if ((9) == ((key_1).v)) {
        ((arr)->data_7_9) = (dat);
      } else if ((8) == ((key_1).v)) {
        ((arr)->data_7_8) = (dat);
      } else if ((7) == ((key_1).v)) {
        ((arr)->data_7_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        ((arr)->data_7_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        ((arr)->data_7_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        ((arr)->data_7_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        ((arr)->data_7_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        ((arr)->data_7_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        ((arr)->data_7_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        ((arr)->data_7_0) = (dat);
      }
    } else if ((6) == ((key_0).v)) {
      if ((9) == ((key_1).v)) {
        ((arr)->data_6_9) = (dat);
      } else if ((8) == ((key_1).v)) {
        ((arr)->data_6_8) = (dat);
      } else if ((7) == ((key_1).v)) {
        ((arr)->data_6_7) = (dat);
      } else if ((6) == ((key_1).v)) {
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
      if ((9) == ((key_1).v)) {
        ((arr)->data_5_9) = (dat);
      } else if ((8) == ((key_1).v)) {
        ((arr)->data_5_8) = (dat);
      } else if ((7) == ((key_1).v)) {
        ((arr)->data_5_7) = (dat);
      } else if ((6) == ((key_1).v)) {
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
      if ((9) == ((key_1).v)) {
        ((arr)->data_4_9) = (dat);
      } else if ((8) == ((key_1).v)) {
        ((arr)->data_4_8) = (dat);
      } else if ((7) == ((key_1).v)) {
        ((arr)->data_4_7) = (dat);
      } else if ((6) == ((key_1).v)) {
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
      if ((9) == ((key_1).v)) {
        ((arr)->data_3_9) = (dat);
      } else if ((8) == ((key_1).v)) {
        ((arr)->data_3_8) = (dat);
      } else if ((7) == ((key_1).v)) {
        ((arr)->data_3_7) = (dat);
      } else if ((6) == ((key_1).v)) {
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
      if ((9) == ((key_1).v)) {
        ((arr)->data_2_9) = (dat);
      } else if ((8) == ((key_1).v)) {
        ((arr)->data_2_8) = (dat);
      } else if ((7) == ((key_1).v)) {
        ((arr)->data_2_7) = (dat);
      } else if ((6) == ((key_1).v)) {
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
      if ((9) == ((key_1).v)) {
        ((arr)->data_1_9) = (dat);
      } else if ((8) == ((key_1).v)) {
        ((arr)->data_1_8) = (dat);
      } else if ((7) == ((key_1).v)) {
        ((arr)->data_1_7) = (dat);
      } else if ((6) == ((key_1).v)) {
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
      if ((9) == ((key_1).v)) {
        ((arr)->data_0_9) = (dat);
      } else if ((8) == ((key_1).v)) {
        ((arr)->data_0_8) = (dat);
      } else if ((7) == ((key_1).v)) {
        ((arr)->data_0_7) = (dat);
      } else if ((6) == ((key_1).v)) {
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
  ((tmp).data_7) = (Init_sol_uint256_t(0));
  ((tmp).data_8) = (Init_sol_uint256_t(0));
  ((tmp).data_9) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0) {
  {
    sol_assert((10) >= ((key_0).v),
               "Model failure, mapping key out of bounds.");
    if ((9) == ((key_0).v))
      return (arr)->data_9;
    else if ((8) == ((key_0).v))
      return (arr)->data_8;
    else if ((7) == ((key_0).v))
      return (arr)->data_7;
    else if ((6) == ((key_0).v))
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
    sol_assert((10) >= ((key_0).v),
               "Model failure, mapping key out of bounds.");
    if ((9) == ((key_0).v)) {
      ((arr)->data_9) = (dat);
    } else if ((8) == ((key_0).v)) {
      ((arr)->data_8) = (dat);
    } else if ((7) == ((key_0).v)) {
      ((arr)->data_7) = (dat);
    } else if ((6) == ((key_0).v)) {
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
void VUToken_Constructor(struct VUToken *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  ((self->user_totalSupply__).v) = (1000000000);
  Write_Map_1(&(self->user_balances), Init_sol_address_t((sender).v),
              Init_sol_uint256_t(1000000000));
  sol_emit("Transfer(address(0x0), msg.sender, INITIAL_SUPPLY)");
}
void DetailedERC20_Constructor_For_VUToken(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___name,
    sol_uint256_t func_user___symbol, sol_uint8_t func_user___decimals) {
  ((self->user_name).v) = ((func_user___name).v);
  ((self->user_symbol).v) = ((func_user___symbol).v);
  ((self->user_decimals).v) = ((func_user___decimals).v);
}
void Init_ERC20Basic_For_VUToken(struct VUToken *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin) {}
void Init_ERC20_For_VUToken(struct VUToken *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin) {
  Init_ERC20Basic_For_VUToken(self, sender, value, blocknum, timestamp,
                              Init_sol_bool_t(0), origin);
}
void Init_DetailedERC20_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin,
                                    sol_uint256_t user___name,
                                    sol_uint256_t user___symbol,
                                    sol_uint8_t user___decimals) {
  Init_ERC20_For_VUToken(self, sender, value, blocknum, timestamp,
                         Init_sol_bool_t(0), origin);
  ((self)->user_name) = (Init_sol_uint256_t(0));
  ((self)->user_symbol) = (Init_sol_uint256_t(0));
  ((self)->user_decimals) = (Init_sol_uint8_t(0));
  DetailedERC20_Constructor_For_VUToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      user___name, user___symbol, user___decimals);
}
void Init_BasicToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin) {
  ((self)->user_balances) = (ZeroInit_Map_1());
  ((self)->user_totalSupply__) = (Init_sol_uint256_t(0));
}
void Init_BurnableToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  Init_BasicToken_For_VUToken(self, sender, value, blocknum, timestamp,
                              Init_sol_bool_t(0), origin);
}
void Init_StandardToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  ((self)->user_allowed) = (ZeroInit_Map_2());
}
void Ownable_Constructor_For_VUToken(struct VUToken *self, sol_address_t sender,
                                     sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Ownable_For_VUToken(struct VUToken *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin) {
  ((self)->user_owner) = (Init_sol_address_t(0));
  Ownable_Constructor_For_VUToken(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
}
void Init_Pausable_For_VUToken(struct VUToken *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin) {
  Init_Ownable_For_VUToken(self, sender, value, blocknum, timestamp,
                           Init_sol_bool_t(0), origin);
  ((self)->user_paused) = (Init_sol_bool_t(0));
}
void Init_PausableToken_For_VUToken(struct VUToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  Init_StandardToken_For_VUToken(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  Init_Pausable_For_VUToken(self, sender, value, blocknum, timestamp,
                            Init_sol_bool_t(0), origin);
}
void Init_VUToken(struct VUToken *self, sol_address_t sender,
                  sol_uint256_t value, sol_uint256_t blocknum,
                  sol_uint256_t timestamp, sol_bool_t paid,
                  sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_DetailedERC20_For_VUToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t(209594487637908626),
      Init_sol_uint256_t(6598568037464626504), Init_sol_uint8_t(18));
  Init_BurnableToken_For_VUToken(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  Init_PausableToken_For_VUToken(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
  VUToken_Constructor(self, sender, value, blocknum, timestamp,
                      Init_sol_bool_t(0), origin);
}
sol_bool_t BasicToken_Method_For_VUToken_transfer(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
  sol_emit("Transfer(msg.sender, _to, _value)");
  { return Init_sol_bool_t(1); }
}
sol_bool_t PausableToken_Method_1_For_VUToken_transfer(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (BasicToken_Method_For_VUToken_transfer(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_VUToken_transfer(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_paused).v), 0);
  (func_model_rv) = (PausableToken_Method_1_For_VUToken_transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_VUToken_transferFrom(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
  sol_emit("Transfer(_from, _to, _value)");
  { return Init_sol_bool_t(1); }
}
sol_bool_t PausableToken_Method_1_For_VUToken_transferFrom(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_VUToken_transferFrom(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___from).v),
             Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_VUToken_transferFrom(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_paused).v), 0);
  (func_model_rv) = (PausableToken_Method_1_For_VUToken_transferFrom(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___from, func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_VUToken_approve(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value) {
  Write_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
              Init_sol_address_t((func_user___spender).v),
              Init_sol_uint256_t((func_user___value).v));
  sol_emit("Approval(msg.sender, _spender, _value)");
  { return Init_sol_bool_t(1); }
}
sol_bool_t PausableToken_Method_1_For_VUToken_approve(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_VUToken_approve(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_VUToken_approve(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_paused).v), 0);
  (func_model_rv) = (PausableToken_Method_1_For_VUToken_approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___value));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_VUToken_increaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
  sol_emit("Approval(msg.sender, _spender, allowed[msg.sender][_spender])");
  { return Init_sol_bool_t(1); }
}
sol_bool_t PausableToken_Method_1_For_VUToken_increaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue) {
  sol_bool_t func_user_success = Init_sol_bool_t(0);
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_VUToken_increaseApproval(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___addedValue).v)))
            .v);
  }
  return func_user_success;
}
sol_bool_t PausableToken_Method_For_VUToken_increaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___addedValue) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_paused).v), 0);
  (func_model_rv) = (PausableToken_Method_1_For_VUToken_increaseApproval(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___addedValue));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_VUToken_decreaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
  sol_emit("Approval(msg.sender, _spender, allowed[msg.sender][_spender])");
  { return Init_sol_bool_t(1); }
}
sol_bool_t PausableToken_Method_1_For_VUToken_decreaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue) {
  sol_bool_t func_user_success = Init_sol_bool_t(0);
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_VUToken_decreaseApproval(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___subtractedValue).v)))
            .v);
  }
  return func_user_success;
}
sol_bool_t PausableToken_Method_For_VUToken_decreaseApproval(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___subtractedValue) {
  sol_bool_t func_model_rv;
  sol_require(!((self->user_paused).v), 0);
  (func_model_rv) = (PausableToken_Method_1_For_VUToken_decreaseApproval(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___subtractedValue));
  return func_model_rv;
}
void Pausable_Method_2_For_VUToken_pause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_paused).v) = (1);
  sol_emit("Pause()");
}
void Pausable_Method_1_For_VUToken_pause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(!((self->user_paused).v), 0);
  Pausable_Method_2_For_VUToken_pause(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin);
}
void Pausable_Method_For_VUToken_pause(struct VUToken *self,
                                       sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Pausable_Method_1_For_VUToken_pause(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin);
}
void Pausable_Method_2_For_VUToken_unpause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_paused).v) = (0);
  sol_emit("Unpause()");
}
void Pausable_Method_1_For_VUToken_unpause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require((self->user_paused).v, 0);
  Pausable_Method_2_For_VUToken_unpause(self, sender, value, blocknum,
                                        timestamp, Init_sol_bool_t(0), origin);
}
void Pausable_Method_For_VUToken_unpause(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Pausable_Method_1_For_VUToken_unpause(self, sender, value, blocknum,
                                        timestamp, Init_sol_bool_t(0), origin);
}
void Ownable_Method_1_For_VUToken_transferOwnership(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner) {
  sol_require(((func_user_newOwner).v) != (((int)(g_literal_address_0))), 0);
  sol_emit("OwnershipTransferred(owner, newOwner)");
  ((self->user_owner).v) = ((func_user_newOwner).v);
}
void Ownable_Method_For_VUToken_transferOwnership(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Ownable_Method_1_For_VUToken_transferOwnership(self, sender, value, blocknum,
                                                 timestamp, Init_sol_bool_t(0),
                                                 origin, func_model_newOwner);
}
sol_uint256_t StandardToken_Method_For_VUToken_allowance(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
void BurnableToken_Method_For_VUToken_burn(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user___value) {
  sol_require(
      ((func_user___value).v) <=
          ((Read_Map_1(&(self->user_balances), Init_sol_address_t((sender).v)))
               .v),
      0);
  sol_address_t func_user_burner = Init_sol_address_t((sender).v);
  Write_Map_1(
      &(self->user_balances), Init_sol_address_t((func_user_burner).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user_balances),
                               Init_sol_address_t((func_user_burner).v)))
                       .v),
               Init_sol_uint256_t((func_user___value).v)))
              .v));
  ((self->user_totalSupply__).v) =
      ((SafeMath_Method_sub(Init_sol_uint256_t((self->user_totalSupply__).v),
                            Init_sol_uint256_t((func_user___value).v)))
           .v);
  sol_emit("Burn(burner, _value)");
}
sol_uint256_t BasicToken_Method_For_VUToken_totalSupply(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user_totalSupply__).v); }
}
sol_uint256_t BasicToken_Method_For_VUToken_balanceOf(
    struct VUToken *self, sol_address_t sender, sol_uint256_t value,
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
  ((blocknum).v) = (GET_ND_UINT(51, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(52, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct ICOCrowdsale contract_1;
  struct Whitelist *contract_2;
  struct VUToken *contract_3;
  (g_literal_address_0) = (0);
  (((contract_1).model_address).v) = (1);
  (contract_2) = (&((contract_1).user_whitelist));
  (((contract_2)->model_address).v) = (2);
  (contract_3) = (&((contract_1).user_token));
  (((contract_3)->model_address).v) = (3);
  (((contract_1).user_owner).v) = (0);
  (((contract_1).user_tokenWallet).v) = (0);
  (((contract_1).user_wallet).v) = (0);
  (((contract_2)->user_owner).v) = (0);
  (((contract_3)->user_owner).v) = (0);
  smartace_log("[Initializing contract_1 and children]");
  if (GET_ND_RANGE(55, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(53, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(54, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(56, 4, 10, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_ICOCrowdsale(
        &(contract_1), sender, value, blocknum, timestamp, paid, sender,
        Init_sol_address_t(
            GET_ND_RANGE(57, 0, 10, "ICOCrowdsale:_tokenWallet")),
        Init_sol_address_t(GET_ND_RANGE(58, 0, 10, "ICOCrowdsale:_wallet")),
        Init_sol_uint256_t(GET_ND_UINT(59, 256, "ICOCrowdsale:_openingTime")),
        Init_sol_uint256_t(GET_ND_UINT(60, 256, "ICOCrowdsale:_closingTime")),
        Init_sol_uint256_t(GET_ND_UINT(61, 256, "ICOCrowdsale:_deliveryTime")));
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    if (sol_is_using_reps()) {
      (((contract_1).user_balances).data_0) = (Init_sol_uint256_t(
          GET_ND_UINT(62, 256, "ICOCrowdsale::balances::_0")));
      (((contract_1).user_balances).data_1) = (Init_sol_uint256_t(
          GET_ND_UINT(63, 256, "ICOCrowdsale::balances::_1")));
      (((contract_1).user_balances).data_2) = (Init_sol_uint256_t(
          GET_ND_UINT(64, 256, "ICOCrowdsale::balances::_2")));
      (((contract_1).user_balances).data_3) = (Init_sol_uint256_t(
          GET_ND_UINT(65, 256, "ICOCrowdsale::balances::_3")));
      (((contract_1).user_balances).data_4) = (Init_sol_uint256_t(
          GET_ND_UINT(66, 256, "ICOCrowdsale::balances::_4")));
      (((contract_1).user_balances).data_5) = (Init_sol_uint256_t(
          GET_ND_UINT(67, 256, "ICOCrowdsale::balances::_5")));
      (((contract_1).user_balances).data_6) = (Init_sol_uint256_t(
          GET_ND_UINT(68, 256, "ICOCrowdsale::balances::_6")));
      (((contract_1).user_balances).data_7) = (Init_sol_uint256_t(
          GET_ND_UINT(69, 256, "ICOCrowdsale::balances::_7")));
      (((contract_1).user_balances).data_8) = (Init_sol_uint256_t(
          GET_ND_UINT(70, 256, "ICOCrowdsale::balances::_8")));
      (((contract_1).user_balances).data_9) = (Init_sol_uint256_t(
          GET_ND_UINT(71, 256, "ICOCrowdsale::balances::_9")));
      (((contract_2)->user_whitelist).data_0) =
          (Init_sol_bool_t(GET_ND_RANGE(72, 0, 2, "Whitelist::whitelist::_0")));
      (((contract_2)->user_whitelist).data_1) =
          (Init_sol_bool_t(GET_ND_RANGE(73, 0, 2, "Whitelist::whitelist::_1")));
      (((contract_2)->user_whitelist).data_2) =
          (Init_sol_bool_t(GET_ND_RANGE(74, 0, 2, "Whitelist::whitelist::_2")));
      (((contract_2)->user_whitelist).data_3) =
          (Init_sol_bool_t(GET_ND_RANGE(75, 0, 2, "Whitelist::whitelist::_3")));
      (((contract_2)->user_whitelist).data_4) =
          (Init_sol_bool_t(GET_ND_RANGE(76, 0, 2, "Whitelist::whitelist::_4")));
      (((contract_2)->user_whitelist).data_5) =
          (Init_sol_bool_t(GET_ND_RANGE(77, 0, 2, "Whitelist::whitelist::_5")));
      (((contract_2)->user_whitelist).data_6) =
          (Init_sol_bool_t(GET_ND_RANGE(78, 0, 2, "Whitelist::whitelist::_6")));
      (((contract_2)->user_whitelist).data_7) =
          (Init_sol_bool_t(GET_ND_RANGE(79, 0, 2, "Whitelist::whitelist::_7")));
      (((contract_2)->user_whitelist).data_8) =
          (Init_sol_bool_t(GET_ND_RANGE(80, 0, 2, "Whitelist::whitelist::_8")));
      (((contract_2)->user_whitelist).data_9) =
          (Init_sol_bool_t(GET_ND_RANGE(81, 0, 2, "Whitelist::whitelist::_9")));
      (((contract_2)->user_authorized).data_0) = (Init_sol_bool_t(
          GET_ND_RANGE(82, 0, 2, "Whitelist::authorized::_0")));
      (((contract_2)->user_authorized).data_1) = (Init_sol_bool_t(
          GET_ND_RANGE(83, 0, 2, "Whitelist::authorized::_1")));
      (((contract_2)->user_authorized).data_2) = (Init_sol_bool_t(
          GET_ND_RANGE(84, 0, 2, "Whitelist::authorized::_2")));
      (((contract_2)->user_authorized).data_3) = (Init_sol_bool_t(
          GET_ND_RANGE(85, 0, 2, "Whitelist::authorized::_3")));
      (((contract_2)->user_authorized).data_4) = (Init_sol_bool_t(
          GET_ND_RANGE(86, 0, 2, "Whitelist::authorized::_4")));
      (((contract_2)->user_authorized).data_5) = (Init_sol_bool_t(
          GET_ND_RANGE(87, 0, 2, "Whitelist::authorized::_5")));
      (((contract_2)->user_authorized).data_6) = (Init_sol_bool_t(
          GET_ND_RANGE(88, 0, 2, "Whitelist::authorized::_6")));
      (((contract_2)->user_authorized).data_7) = (Init_sol_bool_t(
          GET_ND_RANGE(89, 0, 2, "Whitelist::authorized::_7")));
      (((contract_2)->user_authorized).data_8) = (Init_sol_bool_t(
          GET_ND_RANGE(90, 0, 2, "Whitelist::authorized::_8")));
      (((contract_2)->user_authorized).data_9) = (Init_sol_bool_t(
          GET_ND_RANGE(91, 0, 2, "Whitelist::authorized::_9")));
      (((contract_3)->user_allowed).data_0_0) =
          (Init_sol_uint256_t(GET_ND_UINT(92, 256, "VUToken::allowed::_0_0")));
      (((contract_3)->user_allowed).data_0_1) =
          (Init_sol_uint256_t(GET_ND_UINT(93, 256, "VUToken::allowed::_0_1")));
      (((contract_3)->user_allowed).data_0_2) =
          (Init_sol_uint256_t(GET_ND_UINT(94, 256, "VUToken::allowed::_0_2")));
      (((contract_3)->user_allowed).data_0_3) =
          (Init_sol_uint256_t(GET_ND_UINT(95, 256, "VUToken::allowed::_0_3")));
      (((contract_3)->user_allowed).data_0_4) =
          (Init_sol_uint256_t(GET_ND_UINT(96, 256, "VUToken::allowed::_0_4")));
      (((contract_3)->user_allowed).data_0_5) =
          (Init_sol_uint256_t(GET_ND_UINT(97, 256, "VUToken::allowed::_0_5")));
      (((contract_3)->user_allowed).data_0_6) =
          (Init_sol_uint256_t(GET_ND_UINT(98, 256, "VUToken::allowed::_0_6")));
      (((contract_3)->user_allowed).data_0_7) =
          (Init_sol_uint256_t(GET_ND_UINT(99, 256, "VUToken::allowed::_0_7")));
      (((contract_3)->user_allowed).data_0_8) =
          (Init_sol_uint256_t(GET_ND_UINT(100, 256, "VUToken::allowed::_0_8")));
      (((contract_3)->user_allowed).data_0_9) =
          (Init_sol_uint256_t(GET_ND_UINT(101, 256, "VUToken::allowed::_0_9")));
      (((contract_3)->user_allowed).data_1_0) =
          (Init_sol_uint256_t(GET_ND_UINT(102, 256, "VUToken::allowed::_1_0")));
      (((contract_3)->user_allowed).data_1_1) =
          (Init_sol_uint256_t(GET_ND_UINT(103, 256, "VUToken::allowed::_1_1")));
      (((contract_3)->user_allowed).data_1_2) =
          (Init_sol_uint256_t(GET_ND_UINT(104, 256, "VUToken::allowed::_1_2")));
      (((contract_3)->user_allowed).data_1_3) =
          (Init_sol_uint256_t(GET_ND_UINT(105, 256, "VUToken::allowed::_1_3")));
      (((contract_3)->user_allowed).data_1_4) =
          (Init_sol_uint256_t(GET_ND_UINT(106, 256, "VUToken::allowed::_1_4")));
      (((contract_3)->user_allowed).data_1_5) =
          (Init_sol_uint256_t(GET_ND_UINT(107, 256, "VUToken::allowed::_1_5")));
      (((contract_3)->user_allowed).data_1_6) =
          (Init_sol_uint256_t(GET_ND_UINT(108, 256, "VUToken::allowed::_1_6")));
      (((contract_3)->user_allowed).data_1_7) =
          (Init_sol_uint256_t(GET_ND_UINT(109, 256, "VUToken::allowed::_1_7")));
      (((contract_3)->user_allowed).data_1_8) =
          (Init_sol_uint256_t(GET_ND_UINT(110, 256, "VUToken::allowed::_1_8")));
      (((contract_3)->user_allowed).data_1_9) =
          (Init_sol_uint256_t(GET_ND_UINT(111, 256, "VUToken::allowed::_1_9")));
      (((contract_3)->user_allowed).data_2_0) =
          (Init_sol_uint256_t(GET_ND_UINT(112, 256, "VUToken::allowed::_2_0")));
      (((contract_3)->user_allowed).data_2_1) =
          (Init_sol_uint256_t(GET_ND_UINT(113, 256, "VUToken::allowed::_2_1")));
      (((contract_3)->user_allowed).data_2_2) =
          (Init_sol_uint256_t(GET_ND_UINT(114, 256, "VUToken::allowed::_2_2")));
      (((contract_3)->user_allowed).data_2_3) =
          (Init_sol_uint256_t(GET_ND_UINT(115, 256, "VUToken::allowed::_2_3")));
      (((contract_3)->user_allowed).data_2_4) =
          (Init_sol_uint256_t(GET_ND_UINT(116, 256, "VUToken::allowed::_2_4")));
      (((contract_3)->user_allowed).data_2_5) =
          (Init_sol_uint256_t(GET_ND_UINT(117, 256, "VUToken::allowed::_2_5")));
      (((contract_3)->user_allowed).data_2_6) =
          (Init_sol_uint256_t(GET_ND_UINT(118, 256, "VUToken::allowed::_2_6")));
      (((contract_3)->user_allowed).data_2_7) =
          (Init_sol_uint256_t(GET_ND_UINT(119, 256, "VUToken::allowed::_2_7")));
      (((contract_3)->user_allowed).data_2_8) =
          (Init_sol_uint256_t(GET_ND_UINT(120, 256, "VUToken::allowed::_2_8")));
      (((contract_3)->user_allowed).data_2_9) =
          (Init_sol_uint256_t(GET_ND_UINT(121, 256, "VUToken::allowed::_2_9")));
      (((contract_3)->user_allowed).data_3_0) =
          (Init_sol_uint256_t(GET_ND_UINT(122, 256, "VUToken::allowed::_3_0")));
      (((contract_3)->user_allowed).data_3_1) =
          (Init_sol_uint256_t(GET_ND_UINT(123, 256, "VUToken::allowed::_3_1")));
      (((contract_3)->user_allowed).data_3_2) =
          (Init_sol_uint256_t(GET_ND_UINT(124, 256, "VUToken::allowed::_3_2")));
      (((contract_3)->user_allowed).data_3_3) =
          (Init_sol_uint256_t(GET_ND_UINT(125, 256, "VUToken::allowed::_3_3")));
      (((contract_3)->user_allowed).data_3_4) =
          (Init_sol_uint256_t(GET_ND_UINT(126, 256, "VUToken::allowed::_3_4")));
      (((contract_3)->user_allowed).data_3_5) =
          (Init_sol_uint256_t(GET_ND_UINT(127, 256, "VUToken::allowed::_3_5")));
      (((contract_3)->user_allowed).data_3_6) =
          (Init_sol_uint256_t(GET_ND_UINT(128, 256, "VUToken::allowed::_3_6")));
      (((contract_3)->user_allowed).data_3_7) =
          (Init_sol_uint256_t(GET_ND_UINT(129, 256, "VUToken::allowed::_3_7")));
      (((contract_3)->user_allowed).data_3_8) =
          (Init_sol_uint256_t(GET_ND_UINT(130, 256, "VUToken::allowed::_3_8")));
      (((contract_3)->user_allowed).data_3_9) =
          (Init_sol_uint256_t(GET_ND_UINT(131, 256, "VUToken::allowed::_3_9")));
      (((contract_3)->user_allowed).data_4_0) =
          (Init_sol_uint256_t(GET_ND_UINT(132, 256, "VUToken::allowed::_4_0")));
      (((contract_3)->user_allowed).data_4_1) =
          (Init_sol_uint256_t(GET_ND_UINT(133, 256, "VUToken::allowed::_4_1")));
      (((contract_3)->user_allowed).data_4_2) =
          (Init_sol_uint256_t(GET_ND_UINT(134, 256, "VUToken::allowed::_4_2")));
      (((contract_3)->user_allowed).data_4_3) =
          (Init_sol_uint256_t(GET_ND_UINT(135, 256, "VUToken::allowed::_4_3")));
      (((contract_3)->user_allowed).data_4_4) =
          (Init_sol_uint256_t(GET_ND_UINT(136, 256, "VUToken::allowed::_4_4")));
      (((contract_3)->user_allowed).data_4_5) =
          (Init_sol_uint256_t(GET_ND_UINT(137, 256, "VUToken::allowed::_4_5")));
      (((contract_3)->user_allowed).data_4_6) =
          (Init_sol_uint256_t(GET_ND_UINT(138, 256, "VUToken::allowed::_4_6")));
      (((contract_3)->user_allowed).data_4_7) =
          (Init_sol_uint256_t(GET_ND_UINT(139, 256, "VUToken::allowed::_4_7")));
      (((contract_3)->user_allowed).data_4_8) =
          (Init_sol_uint256_t(GET_ND_UINT(140, 256, "VUToken::allowed::_4_8")));
      (((contract_3)->user_allowed).data_4_9) =
          (Init_sol_uint256_t(GET_ND_UINT(141, 256, "VUToken::allowed::_4_9")));
      (((contract_3)->user_allowed).data_5_0) =
          (Init_sol_uint256_t(GET_ND_UINT(142, 256, "VUToken::allowed::_5_0")));
      (((contract_3)->user_allowed).data_5_1) =
          (Init_sol_uint256_t(GET_ND_UINT(143, 256, "VUToken::allowed::_5_1")));
      (((contract_3)->user_allowed).data_5_2) =
          (Init_sol_uint256_t(GET_ND_UINT(144, 256, "VUToken::allowed::_5_2")));
      (((contract_3)->user_allowed).data_5_3) =
          (Init_sol_uint256_t(GET_ND_UINT(145, 256, "VUToken::allowed::_5_3")));
      (((contract_3)->user_allowed).data_5_4) =
          (Init_sol_uint256_t(GET_ND_UINT(146, 256, "VUToken::allowed::_5_4")));
      (((contract_3)->user_allowed).data_5_5) =
          (Init_sol_uint256_t(GET_ND_UINT(147, 256, "VUToken::allowed::_5_5")));
      (((contract_3)->user_allowed).data_5_6) =
          (Init_sol_uint256_t(GET_ND_UINT(148, 256, "VUToken::allowed::_5_6")));
      (((contract_3)->user_allowed).data_5_7) =
          (Init_sol_uint256_t(GET_ND_UINT(149, 256, "VUToken::allowed::_5_7")));
      (((contract_3)->user_allowed).data_5_8) =
          (Init_sol_uint256_t(GET_ND_UINT(150, 256, "VUToken::allowed::_5_8")));
      (((contract_3)->user_allowed).data_5_9) =
          (Init_sol_uint256_t(GET_ND_UINT(151, 256, "VUToken::allowed::_5_9")));
      (((contract_3)->user_allowed).data_6_0) =
          (Init_sol_uint256_t(GET_ND_UINT(152, 256, "VUToken::allowed::_6_0")));
      (((contract_3)->user_allowed).data_6_1) =
          (Init_sol_uint256_t(GET_ND_UINT(153, 256, "VUToken::allowed::_6_1")));
      (((contract_3)->user_allowed).data_6_2) =
          (Init_sol_uint256_t(GET_ND_UINT(154, 256, "VUToken::allowed::_6_2")));
      (((contract_3)->user_allowed).data_6_3) =
          (Init_sol_uint256_t(GET_ND_UINT(155, 256, "VUToken::allowed::_6_3")));
      (((contract_3)->user_allowed).data_6_4) =
          (Init_sol_uint256_t(GET_ND_UINT(156, 256, "VUToken::allowed::_6_4")));
      (((contract_3)->user_allowed).data_6_5) =
          (Init_sol_uint256_t(GET_ND_UINT(157, 256, "VUToken::allowed::_6_5")));
      (((contract_3)->user_allowed).data_6_6) =
          (Init_sol_uint256_t(GET_ND_UINT(158, 256, "VUToken::allowed::_6_6")));
      (((contract_3)->user_allowed).data_6_7) =
          (Init_sol_uint256_t(GET_ND_UINT(159, 256, "VUToken::allowed::_6_7")));
      (((contract_3)->user_allowed).data_6_8) =
          (Init_sol_uint256_t(GET_ND_UINT(160, 256, "VUToken::allowed::_6_8")));
      (((contract_3)->user_allowed).data_6_9) =
          (Init_sol_uint256_t(GET_ND_UINT(161, 256, "VUToken::allowed::_6_9")));
      (((contract_3)->user_allowed).data_7_0) =
          (Init_sol_uint256_t(GET_ND_UINT(162, 256, "VUToken::allowed::_7_0")));
      (((contract_3)->user_allowed).data_7_1) =
          (Init_sol_uint256_t(GET_ND_UINT(163, 256, "VUToken::allowed::_7_1")));
      (((contract_3)->user_allowed).data_7_2) =
          (Init_sol_uint256_t(GET_ND_UINT(164, 256, "VUToken::allowed::_7_2")));
      (((contract_3)->user_allowed).data_7_3) =
          (Init_sol_uint256_t(GET_ND_UINT(165, 256, "VUToken::allowed::_7_3")));
      (((contract_3)->user_allowed).data_7_4) =
          (Init_sol_uint256_t(GET_ND_UINT(166, 256, "VUToken::allowed::_7_4")));
      (((contract_3)->user_allowed).data_7_5) =
          (Init_sol_uint256_t(GET_ND_UINT(167, 256, "VUToken::allowed::_7_5")));
      (((contract_3)->user_allowed).data_7_6) =
          (Init_sol_uint256_t(GET_ND_UINT(168, 256, "VUToken::allowed::_7_6")));
      (((contract_3)->user_allowed).data_7_7) =
          (Init_sol_uint256_t(GET_ND_UINT(169, 256, "VUToken::allowed::_7_7")));
      (((contract_3)->user_allowed).data_7_8) =
          (Init_sol_uint256_t(GET_ND_UINT(170, 256, "VUToken::allowed::_7_8")));
      (((contract_3)->user_allowed).data_7_9) =
          (Init_sol_uint256_t(GET_ND_UINT(171, 256, "VUToken::allowed::_7_9")));
      (((contract_3)->user_allowed).data_8_0) =
          (Init_sol_uint256_t(GET_ND_UINT(172, 256, "VUToken::allowed::_8_0")));
      (((contract_3)->user_allowed).data_8_1) =
          (Init_sol_uint256_t(GET_ND_UINT(173, 256, "VUToken::allowed::_8_1")));
      (((contract_3)->user_allowed).data_8_2) =
          (Init_sol_uint256_t(GET_ND_UINT(174, 256, "VUToken::allowed::_8_2")));
      (((contract_3)->user_allowed).data_8_3) =
          (Init_sol_uint256_t(GET_ND_UINT(175, 256, "VUToken::allowed::_8_3")));
      (((contract_3)->user_allowed).data_8_4) =
          (Init_sol_uint256_t(GET_ND_UINT(176, 256, "VUToken::allowed::_8_4")));
      (((contract_3)->user_allowed).data_8_5) =
          (Init_sol_uint256_t(GET_ND_UINT(177, 256, "VUToken::allowed::_8_5")));
      (((contract_3)->user_allowed).data_8_6) =
          (Init_sol_uint256_t(GET_ND_UINT(178, 256, "VUToken::allowed::_8_6")));
      (((contract_3)->user_allowed).data_8_7) =
          (Init_sol_uint256_t(GET_ND_UINT(179, 256, "VUToken::allowed::_8_7")));
      (((contract_3)->user_allowed).data_8_8) =
          (Init_sol_uint256_t(GET_ND_UINT(180, 256, "VUToken::allowed::_8_8")));
      (((contract_3)->user_allowed).data_8_9) =
          (Init_sol_uint256_t(GET_ND_UINT(181, 256, "VUToken::allowed::_8_9")));
      (((contract_3)->user_allowed).data_9_0) =
          (Init_sol_uint256_t(GET_ND_UINT(182, 256, "VUToken::allowed::_9_0")));
      (((contract_3)->user_allowed).data_9_1) =
          (Init_sol_uint256_t(GET_ND_UINT(183, 256, "VUToken::allowed::_9_1")));
      (((contract_3)->user_allowed).data_9_2) =
          (Init_sol_uint256_t(GET_ND_UINT(184, 256, "VUToken::allowed::_9_2")));
      (((contract_3)->user_allowed).data_9_3) =
          (Init_sol_uint256_t(GET_ND_UINT(185, 256, "VUToken::allowed::_9_3")));
      (((contract_3)->user_allowed).data_9_4) =
          (Init_sol_uint256_t(GET_ND_UINT(186, 256, "VUToken::allowed::_9_4")));
      (((contract_3)->user_allowed).data_9_5) =
          (Init_sol_uint256_t(GET_ND_UINT(187, 256, "VUToken::allowed::_9_5")));
      (((contract_3)->user_allowed).data_9_6) =
          (Init_sol_uint256_t(GET_ND_UINT(188, 256, "VUToken::allowed::_9_6")));
      (((contract_3)->user_allowed).data_9_7) =
          (Init_sol_uint256_t(GET_ND_UINT(189, 256, "VUToken::allowed::_9_7")));
      (((contract_3)->user_allowed).data_9_8) =
          (Init_sol_uint256_t(GET_ND_UINT(190, 256, "VUToken::allowed::_9_8")));
      (((contract_3)->user_allowed).data_9_9) =
          (Init_sol_uint256_t(GET_ND_UINT(191, 256, "VUToken::allowed::_9_9")));
      (((contract_3)->user_balances).data_0) =
          (Init_sol_uint256_t(GET_ND_UINT(192, 256, "VUToken::balances::_0")));
      (((contract_3)->user_balances).data_1) =
          (Init_sol_uint256_t(GET_ND_UINT(193, 256, "VUToken::balances::_1")));
      (((contract_3)->user_balances).data_2) =
          (Init_sol_uint256_t(GET_ND_UINT(194, 256, "VUToken::balances::_2")));
      (((contract_3)->user_balances).data_3) =
          (Init_sol_uint256_t(GET_ND_UINT(195, 256, "VUToken::balances::_3")));
      (((contract_3)->user_balances).data_4) =
          (Init_sol_uint256_t(GET_ND_UINT(196, 256, "VUToken::balances::_4")));
      (((contract_3)->user_balances).data_5) =
          (Init_sol_uint256_t(GET_ND_UINT(197, 256, "VUToken::balances::_5")));
      (((contract_3)->user_balances).data_6) =
          (Init_sol_uint256_t(GET_ND_UINT(198, 256, "VUToken::balances::_6")));
      (((contract_3)->user_balances).data_7) =
          (Init_sol_uint256_t(GET_ND_UINT(199, 256, "VUToken::balances::_7")));
      (((contract_3)->user_balances).data_8) =
          (Init_sol_uint256_t(GET_ND_UINT(200, 256, "VUToken::balances::_8")));
      (((contract_3)->user_balances).data_9) =
          (Init_sol_uint256_t(GET_ND_UINT(201, 256, "VUToken::balances::_9")));
    }
    if (GET_ND_RANGE(204, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(202, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(203, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(205, 0, 24, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling withdrawTokens() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(1, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      BaseCrowdsale_Method_For_ICOCrowdsale_withdrawTokens(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      sol_assert(timestamp.v > contract_1.user_closingTime.v && timestamp.v >= contract_1.user_deliveryTime.v, "Property.");
      break;
    }
    case 1: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(2, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(3, 0, 10, "newOwner"));
      Ownable_Method_For_ICOCrowdsale_transferOwnership(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling hasClosed() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(4, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      TimedCrowdsale_Method_For_ICOCrowdsale_hasClosed(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling remainingTokens() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(5, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      AllowanceCrowdsale_Method_For_ICOCrowdsale_remainingTokens(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling buyTokens(_beneficiary) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(6, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(7, 256, "value"));
      sol_address_t arg__beneficiary =
          Init_sol_address_t(GET_ND_RANGE(8, 0, 10, "_beneficiary"));
      Crowdsale_Method_For_ICOCrowdsale_buyTokens(&(contract_1), sender, value,
                                                  blocknum, timestamp, paid,
                                                  sender, arg__beneficiary);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling () on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(9, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(10, 256, "value"));
      Crowdsale_Fallback_For_ICOCrowdsale(&(contract_1), sender, value,
                                          blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling authorize(_admin) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(11, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__admin =
          Init_sol_address_t(GET_ND_RANGE(12, 0, 10, "_admin"));
      Whitelist_Method_authorize(contract_2, sender, value, blocknum, timestamp,
                                 paid, sender, arg__admin);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling reject(_admin) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(13, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__admin =
          Init_sol_address_t(GET_ND_RANGE(14, 0, 10, "_admin"));
      Whitelist_Method_reject(contract_2, sender, value, blocknum, timestamp,
                              paid, sender, arg__admin);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling addToWhitelist(_beneficiary) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(15, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__beneficiary =
          Init_sol_address_t(GET_ND_RANGE(16, 0, 10, "_beneficiary"));
      Whitelist_Method_addToWhitelist(contract_2, sender, value, blocknum,
                                      timestamp, paid, sender,
                                      arg__beneficiary);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling removeFromWhitelist(_beneficiary) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(17, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__beneficiary =
          Init_sol_address_t(GET_ND_RANGE(18, 0, 10, "_beneficiary"));
      Whitelist_Method_removeFromWhitelist(contract_2, sender, value, blocknum,
                                           timestamp, paid, sender,
                                           arg__beneficiary);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling isWhitelisted(_beneficiary) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(19, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__beneficiary =
          Init_sol_address_t(GET_ND_RANGE(20, 0, 10, "_beneficiary"));
      Whitelist_Method_isWhitelisted(contract_2, sender, value, blocknum,
                                     timestamp, paid, sender, arg__beneficiary);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(21, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(22, 0, 10, "newOwner"));
      Ownable_Method_For_Whitelist_transferOwnership(contract_2, sender, value,
                                                     blocknum, timestamp, paid,
                                                     sender, arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log("[Calling transfer(_to, _value) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(23, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__to =
          Init_sol_address_t(GET_ND_RANGE(24, 0, 10, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(25, 256, "_value"));
      PausableToken_Method_For_VUToken_transfer(contract_3, sender, value,
                                                blocknum, timestamp, paid,
                                                sender, arg__to, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log("[Calling transferFrom(_from, _to, _value) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(26, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(27, 0, 10, "_from"));
      sol_address_t arg__to =
          Init_sol_address_t(GET_ND_RANGE(28, 0, 10, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(29, 256, "_value"));
      PausableToken_Method_For_VUToken_transferFrom(
          contract_3, sender, value, blocknum, timestamp, paid, sender,
          arg__from, arg__to, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log("[Calling approve(_spender, _value) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(30, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(31, 0, 10, "_spender"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(32, 256, "_value"));
      PausableToken_Method_For_VUToken_approve(
          contract_3, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 15: {
      smartace_log(
          "[Calling increaseApproval(_spender, _addedValue) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(33, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(34, 0, 10, "_spender"));
      sol_uint256_t arg__addedValue =
          Init_sol_uint256_t(GET_ND_UINT(35, 256, "_addedValue"));
      PausableToken_Method_For_VUToken_increaseApproval(
          contract_3, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 16: {
      smartace_log("[Calling decreaseApproval(_spender, _subtractedValue) on "
                   "contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(36, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(37, 0, 10, "_spender"));
      sol_uint256_t arg__subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(38, 256, "_subtractedValue"));
      PausableToken_Method_For_VUToken_decreaseApproval(
          contract_3, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 17: {
      smartace_log("[Calling pause() on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(39, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Pausable_Method_For_VUToken_pause(contract_3, sender, value, blocknum,
                                        timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 18: {
      smartace_log("[Calling unpause() on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(40, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Pausable_Method_For_VUToken_unpause(contract_3, sender, value, blocknum,
                                          timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 19: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(41, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(42, 0, 10, "newOwner"));
      Ownable_Method_For_VUToken_transferOwnership(contract_3, sender, value,
                                                   blocknum, timestamp, paid,
                                                   sender, arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 20: {
      smartace_log("[Calling allowance(_owner, _spender) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(43, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(44, 0, 10, "_owner"));
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(45, 0, 10, "_spender"));
      StandardToken_Method_For_VUToken_allowance(
          contract_3, sender, value, blocknum, timestamp, paid, sender,
          arg__owner, arg__spender);
      smartace_log("[Call successful]");
      break;
    }
    case 21: {
      smartace_log("[Calling burn(_value) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(46, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(47, 256, "_value"));
      BurnableToken_Method_For_VUToken_burn(contract_3, sender, value, blocknum,
                                            timestamp, paid, sender,
                                            arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 22: {
      smartace_log("[Calling totalSupply() on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(48, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      BasicToken_Method_For_VUToken_totalSupply(
          contract_3, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 23: {
      smartace_log("[Calling balanceOf(_owner) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(49, 4, 10, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(50, 0, 10, "_owner"));
      BasicToken_Method_For_VUToken_balanceOf(contract_3, sender, value,
                                              blocknum, timestamp, paid, sender,
                                              arg__owner);
      smartace_log("[Call successful]");
      break;
    }
    default: { sol_require(0, "Model failure, next_call out of bounds."); }
    }
  }
}