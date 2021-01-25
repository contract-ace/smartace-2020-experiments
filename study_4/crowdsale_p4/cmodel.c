#include "cmodel.h"
sol_raw_uint160_t g_literal_address_0;
sol_uint256_t sol_pay(sol_uint256_t *bal, sol_uint256_t amt) {
  sol_require(((bal)->v) >= ((amt).v), "Insufficient funds to call.");
  ((bal)->v) -= ((amt).v);
  return amt;
}
void sol_transfer(sol_address_t sender, sol_uint256_t value,
                  sol_uint256_t blocknum, sol_uint256_t timestamp,
                  sol_bool_t paid, sol_address_t origin, sol_address_t src,
                  sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt) {
  sol_require(sol_send(sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                       origin, src, bal, dst, amt),
              "Transfer failed.");
}
struct Map_3 {
  sol_bool_t data_0;
  sol_bool_t data_1;
  sol_bool_t data_2;
  sol_bool_t data_3;
  sol_bool_t data_4;
  sol_bool_t data_5;
  sol_bool_t data_6;
  sol_bool_t data_7;
};
struct Roles_Struct_Role {
  struct Map_3 user_bearer;
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
  sol_uint256_t data_1_0;
  sol_uint256_t data_1_1;
  sol_uint256_t data_1_2;
  sol_uint256_t data_1_3;
  sol_uint256_t data_1_4;
  sol_uint256_t data_1_5;
  sol_uint256_t data_1_6;
  sol_uint256_t data_1_7;
  sol_uint256_t data_2_0;
  sol_uint256_t data_2_1;
  sol_uint256_t data_2_2;
  sol_uint256_t data_2_3;
  sol_uint256_t data_2_4;
  sol_uint256_t data_2_5;
  sol_uint256_t data_2_6;
  sol_uint256_t data_2_7;
  sol_uint256_t data_3_0;
  sol_uint256_t data_3_1;
  sol_uint256_t data_3_2;
  sol_uint256_t data_3_3;
  sol_uint256_t data_3_4;
  sol_uint256_t data_3_5;
  sol_uint256_t data_3_6;
  sol_uint256_t data_3_7;
  sol_uint256_t data_4_0;
  sol_uint256_t data_4_1;
  sol_uint256_t data_4_2;
  sol_uint256_t data_4_3;
  sol_uint256_t data_4_4;
  sol_uint256_t data_4_5;
  sol_uint256_t data_4_6;
  sol_uint256_t data_4_7;
  sol_uint256_t data_5_0;
  sol_uint256_t data_5_1;
  sol_uint256_t data_5_2;
  sol_uint256_t data_5_3;
  sol_uint256_t data_5_4;
  sol_uint256_t data_5_5;
  sol_uint256_t data_5_6;
  sol_uint256_t data_5_7;
  sol_uint256_t data_6_0;
  sol_uint256_t data_6_1;
  sol_uint256_t data_6_2;
  sol_uint256_t data_6_3;
  sol_uint256_t data_6_4;
  sol_uint256_t data_6_5;
  sol_uint256_t data_6_6;
  sol_uint256_t data_6_7;
  sol_uint256_t data_7_0;
  sol_uint256_t data_7_1;
  sol_uint256_t data_7_2;
  sol_uint256_t data_7_3;
  sol_uint256_t data_7_4;
  sol_uint256_t data_7_5;
  sol_uint256_t data_7_6;
  sol_uint256_t data_7_7;
};
struct SampleCrowdsaleToken {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_uint256_t user___name;
  sol_uint256_t user___symbol;
  sol_uint8_t user___decimals;
  struct Roles_Struct_Role user___minters;
  struct Map_1 user___balances;
  struct Map_2 user___allowed;
  sol_uint256_t user___totalSupply;
};
struct Map_4 {
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
  sol_uint256_t data_6;
  sol_uint256_t data_7;
};
struct RefundEscrow {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_uint8_t user___state;
  sol_address_t user___beneficiary;
  struct Map_4 user___deposits;
  sol_address_t user___primary;
};
struct SampleCrowdsale {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_uint256_t user___goal;
  struct RefundEscrow user___escrow;
  sol_bool_t user___finalized;
  sol_uint256_t user___openingTime;
  sol_uint256_t user___closingTime;
  sol_uint256_t user___cap;
  struct SampleCrowdsaleToken user___token;
  sol_address_t user___wallet;
  sol_uint256_t user___rate;
  sol_uint256_t user___weiRaised;
  sol_uint256_t user___guardCounter;
};
// BEGIN [MANUAL INSTRUMENTAITON OF CALLBACK]
struct SampleCrowdsale contract_1;
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
    Crowdsale_Fallback_For_SampleCrowdsale(&contract_1, src, amt, blocknum, timestamp, Init_sol_bool_t(1), origin);
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
// END [MANUAL INSTRUMENTATION OF FALLBACK]
sol_uint256_t SafeMath_Method_mul(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
struct Map_3 ZeroInit_Map_3(void);
sol_bool_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0);
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_bool_t dat);
struct Roles_Struct_Role ZeroInit_Roles_Struct_Role(void);
struct Roles_Struct_Role Init_Roles_Struct_Role(void);
struct Roles_Struct_Role ND_Roles_Struct_Role(void);
void Roles_Method_add(struct Roles_Struct_Role *func_user_role,
                      sol_address_t func_user_account);
void Roles_Method_remove(struct Roles_Struct_Role *func_user_role,
                         sol_address_t func_user_account);
sol_bool_t Roles_Method_has(struct Roles_Struct_Role *func_user_role,
                            sol_address_t func_user_account);
void Crowdsale_Fallback_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Crowdsale_Method_For_SampleCrowdsale___processPurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_tokenAmount);
void Crowdsale_Method_For_SampleCrowdsale___preValidatePurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_weiAmount);
void TimedCrowdsale_Method_1_For_SampleCrowdsale___preValidatePurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_weiAmount);
void TimedCrowdsale_Method_For_SampleCrowdsale___preValidatePurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_beneficiary,
    sol_uint256_t func_model_weiAmount);
void CappedCrowdsale_Method_For_SampleCrowdsale___preValidatePurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_weiAmount);
void Crowdsale_Method_For_SampleCrowdsale___postValidatePurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_weiAmount);
void Crowdsale_Method_For_SampleCrowdsale___updatePurchasingState(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_weiAmount);
sol_uint256_t Crowdsale_Method_For_SampleCrowdsale___getTokenAmount(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_weiAmount);
void FinalizableCrowdsale_Method_For_SampleCrowdsale___finalization(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void RefundableCrowdsale_Method_For_SampleCrowdsale___finalization(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void RefundableCrowdsale_Method_For_SampleCrowdsale___forwardFunds(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void MintedCrowdsale_Method_For_SampleCrowdsale___deliverTokens(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_tokenAmount);
struct Map_1 ZeroInit_Map_1(void);
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0);
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
struct Map_2 ZeroInit_Map_2(void);
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1);
void Write_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
                 sol_uint256_t dat);
void ERC20_Method_For_SampleCrowdsaleToken___transfer(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_from,
    sol_address_t func_user_to, sol_uint256_t func_user_value);
void ERC20_Method_For_SampleCrowdsaleToken___mint(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_account,
    sol_uint256_t func_user_value);
void MinterRole_Method_For_SampleCrowdsaleToken___addMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_account);
void MinterRole_Method_For_SampleCrowdsaleToken___removeMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_account);
struct Map_4 ZeroInit_Map_4(void);
sol_uint256_t Read_Map_4(struct Map_4 *arr, sol_address_t key_0);
void Write_Map_4(struct Map_4 *arr, sol_address_t key_0, sol_uint256_t dat);
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
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) - ((func_user_b).v));
  { return Init_sol_uint256_t((func_user_c).v); }
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
  ((tmp).data_0) = (Init_sol_bool_t(0));
  ((tmp).data_1) = (Init_sol_bool_t(0));
  ((tmp).data_2) = (Init_sol_bool_t(0));
  ((tmp).data_3) = (Init_sol_bool_t(0));
  ((tmp).data_4) = (Init_sol_bool_t(0));
  ((tmp).data_5) = (Init_sol_bool_t(0));
  ((tmp).data_6) = (Init_sol_bool_t(0));
  ((tmp).data_7) = (Init_sol_bool_t(0));
  return tmp;
}
sol_bool_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0) {
  {
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v))
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
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_bool_t dat) {
  {
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v)) {
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
struct Roles_Struct_Role ZeroInit_Roles_Struct_Role(void) {
  struct Roles_Struct_Role tmp;
  ((tmp).user_bearer) = (ZeroInit_Map_3());
  return tmp;
}
struct Roles_Struct_Role Init_Roles_Struct_Role(void) {
  struct Roles_Struct_Role tmp = ZeroInit_Roles_Struct_Role();
  return tmp;
}
struct Roles_Struct_Role ND_Roles_Struct_Role(void) {
  struct Roles_Struct_Role tmp;
  return tmp;
}
void Roles_Method_add(struct Roles_Struct_Role *func_user_role,
                      sol_address_t func_user_account) {
  sol_require(((func_user_account).v) != (((int)(g_literal_address_0))), 0);
  sol_require(!((Roles_Method_has(func_user_role,
                                  Init_sol_address_t((func_user_account).v)))
                    .v),
              0);
  Write_Map_3(&((func_user_role)->user_bearer),
              Init_sol_address_t((func_user_account).v), Init_sol_bool_t(1));
}
void Roles_Method_remove(struct Roles_Struct_Role *func_user_role,
                         sol_address_t func_user_account) {
  sol_require(((func_user_account).v) != (((int)(g_literal_address_0))), 0);
  sol_require((Roles_Method_has(func_user_role,
                                Init_sol_address_t((func_user_account).v)))
                  .v,
              0);
  Write_Map_3(&((func_user_role)->user_bearer),
              Init_sol_address_t((func_user_account).v), Init_sol_bool_t(0));
}
sol_bool_t Roles_Method_has(struct Roles_Struct_Role *func_user_role,
                            sol_address_t func_user_account) {
  sol_require(((func_user_account).v) != (((int)(g_literal_address_0))), 0);
  {
    return Init_sol_bool_t(
        (Read_Map_3(&((func_user_role)->user_bearer),
                    Init_sol_address_t((func_user_account).v)))
            .v);
  }
}
void SampleCrowdsale_Constructor(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_openingTime,
    sol_uint256_t func_user_closingTime, sol_uint256_t func_user_rate,
    sol_address_t func_user_wallet, sol_uint256_t func_user_cap,
    sol_uint256_t func_user_goal, sol_address_t func_user_verxSender) {
  sol_require(((func_user_goal).v) <= ((func_user_cap).v), 0);
  MinterRole_Method_For_SampleCrowdsaleToken_addMinter(
      Crowdsale_Method_For_SampleCrowdsale_token(
          self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin),
      (self)->model_address, Init_sol_uint256_t(0), blocknum, timestamp,
      Init_sol_bool_t(1), origin, Init_sol_address_t((func_user_verxSender).v));
}
void Crowdsale_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_rate,
    sol_address_t func_user_wallet) {
  sol_require(((func_user_rate).v) > (0), 0);
  sol_require(((func_user_wallet).v) != (((int)(g_literal_address_0))), 0);
  ((self->user___rate).v) = ((func_user_rate).v);
  ((self->user___wallet).v) = ((func_user_wallet).v);
  Init_SampleCrowdsaleToken(&(self->user___token), (self)->model_address,
                            Init_sol_uint256_t(0), blocknum, timestamp,
                            Init_sol_bool_t(1), origin);
}
void ReentrancyGuard_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user___guardCounter).v) = (1);
}
void Init_ReentrancyGuard_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self)->user___guardCounter) = (Init_sol_uint256_t(0));
  ReentrancyGuard_Constructor_For_SampleCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Init_Crowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user_rate, sol_address_t user_wallet) {
  Init_ReentrancyGuard_For_SampleCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  ((self)->user___wallet) = (Init_sol_address_t(0));
  ((self)->user___rate) = (Init_sol_uint256_t(0));
  ((self)->user___weiRaised) = (Init_sol_uint256_t(0));
  Crowdsale_Constructor_For_SampleCrowdsale(self, sender, value, blocknum,
                                            timestamp, Init_sol_bool_t(0),
                                            origin, user_rate, user_wallet);
}
void CappedCrowdsale_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_cap) {
  sol_require(((func_user_cap).v) > (0), 0);
  ((self->user___cap).v) = ((func_user_cap).v);
}
void Init_CappedCrowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user_cap) {
  ((self)->user___cap) = (Init_sol_uint256_t(0));
  CappedCrowdsale_Constructor_For_SampleCrowdsale(self, sender, value, blocknum,
                                                  timestamp, Init_sol_bool_t(0),
                                                  origin, user_cap);
}
void TimedCrowdsale_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_openingTime,
    sol_uint256_t func_user_closingTime) {
  sol_require(((func_user_openingTime).v) >= ((timestamp).v), 0);
  sol_require(((func_user_closingTime).v) > ((func_user_openingTime).v), 0);
  ((self->user___openingTime).v) = ((func_user_openingTime).v);
  ((self->user___closingTime).v) = ((func_user_closingTime).v);
}
void Init_TimedCrowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user_openingTime,
    sol_uint256_t user_closingTime) {
  ((self)->user___openingTime) = (Init_sol_uint256_t(0));
  ((self)->user___closingTime) = (Init_sol_uint256_t(0));
  TimedCrowdsale_Constructor_For_SampleCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      user_openingTime, user_closingTime);
}
void RefundableCrowdsale_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_goal) {
  sol_require(((func_user_goal).v) > (0), 0);
  Init_RefundEscrow(
      &(self->user___escrow), (self)->model_address, Init_sol_uint256_t(0),
      blocknum, timestamp, Init_sol_bool_t(1), origin,
      Init_sol_address_t((Crowdsale_Method_For_SampleCrowdsale_wallet(
                              self, sender, value, blocknum, timestamp,
                              Init_sol_bool_t(0), origin))
                             .v));
  ((self->user___goal).v) = ((func_user_goal).v);
}
void FinalizableCrowdsale_Constructor_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user___finalized).v) = (0);
}
void Init_FinalizableCrowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self)->user___finalized) = (Init_sol_bool_t(0));
  FinalizableCrowdsale_Constructor_For_SampleCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Init_RefundableCrowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t user_goal) {
  Init_FinalizableCrowdsale_For_SampleCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  ((self)->user___goal) = (Init_sol_uint256_t(0));
  RefundableCrowdsale_Constructor_For_SampleCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      user_goal);
}
void Init_MintedCrowdsale_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {}
void Init_SampleCrowdsale(struct SampleCrowdsale *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin, sol_uint256_t user_openingTime,
                          sol_uint256_t user_closingTime,
                          sol_uint256_t user_rate, sol_address_t user_wallet,
                          sol_uint256_t user_cap, sol_uint256_t user_goal,
                          sol_address_t user_verxSender) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_Crowdsale_For_SampleCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t((user_rate).v), Init_sol_address_t((user_wallet).v));
  Init_CappedCrowdsale_For_SampleCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t((user_cap).v));
  Init_TimedCrowdsale_For_SampleCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t((user_openingTime).v),
      Init_sol_uint256_t((user_closingTime).v));
  Init_RefundableCrowdsale_For_SampleCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t((user_goal).v));
  Init_MintedCrowdsale_For_SampleCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  SampleCrowdsale_Constructor(self, sender, value, blocknum, timestamp,
                              Init_sol_bool_t(0), origin, user_openingTime,
                              user_closingTime, user_rate, user_wallet,
                              user_cap, user_goal, user_verxSender);
}
void Crowdsale_Fallback_For_SampleCrowdsale(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  Crowdsale_Method_For_SampleCrowdsale_buyTokens(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v));
}
sol_uint256_t RefundableCrowdsale_Method_For_SampleCrowdsale_goal(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___goal).v); }
}
void RefundableCrowdsale_Method_For_SampleCrowdsale_claimRefund(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_refundee) {
  sol_require((FinalizableCrowdsale_Method_For_SampleCrowdsale_finalized(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin))
                  .v,
              0);
  sol_require(!((RefundableCrowdsale_Method_For_SampleCrowdsale_goalReached(
                     self, sender, value, blocknum, timestamp,
                     Init_sol_bool_t(0), origin))
                    .v),
              0);
  ConditionalEscrow_Method_For_RefundEscrow_withdraw(
      &(self->user___escrow), (self)->model_address, Init_sol_uint256_t(0),
      blocknum, timestamp, Init_sol_bool_t(1), origin,
      Init_sol_address_t((func_user_refundee).v));
}
sol_bool_t RefundableCrowdsale_Method_For_SampleCrowdsale_goalReached(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  {
    return Init_sol_bool_t(((Crowdsale_Method_For_SampleCrowdsale_weiRaised(
                                 self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin))
                                .v) >= ((self->user___goal).v));
  }
}
sol_bool_t FinalizableCrowdsale_Method_For_SampleCrowdsale_finalized(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_bool_t((self->user___finalized).v); }
}
void FinalizableCrowdsale_Method_For_SampleCrowdsale_finalize(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(!((self->user___finalized).v), 0);
  sol_require((TimedCrowdsale_Method_For_SampleCrowdsale_hasClosed(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin))
                  .v,
              0);
  ((self->user___finalized).v) = (1);
  RefundableCrowdsale_Method_For_SampleCrowdsale___finalization(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  sol_emit("CrowdsaleFinalized()");
}
sol_uint256_t TimedCrowdsale_Method_For_SampleCrowdsale_openingTime(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___openingTime).v); }
}
sol_uint256_t TimedCrowdsale_Method_For_SampleCrowdsale_closingTime(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___closingTime).v); }
}
sol_bool_t TimedCrowdsale_Method_For_SampleCrowdsale_isOpen(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  {
    return Init_sol_bool_t(
        (((timestamp).v) >= ((self->user___openingTime).v)) &&
        (((timestamp).v) <= ((self->user___closingTime).v)));
  }
}
sol_bool_t TimedCrowdsale_Method_For_SampleCrowdsale_hasClosed(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_bool_t(((timestamp).v) > ((self->user___closingTime).v)); }
}
sol_uint256_t CappedCrowdsale_Method_For_SampleCrowdsale_cap(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___cap).v); }
}
sol_bool_t CappedCrowdsale_Method_For_SampleCrowdsale_capReached(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  {
    return Init_sol_bool_t(((Crowdsale_Method_For_SampleCrowdsale_weiRaised(
                                 self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin))
                                .v) >= ((self->user___cap).v));
  }
}
struct SampleCrowdsaleToken *Crowdsale_Method_For_SampleCrowdsale_token(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  {
    return &(self->user___token);
  }
}
sol_address_t Crowdsale_Method_For_SampleCrowdsale_wallet(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_address_t((self->user___wallet).v); }
}
sol_uint256_t Crowdsale_Method_For_SampleCrowdsale_rate(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___rate).v); }
}
sol_uint256_t Crowdsale_Method_For_SampleCrowdsale_weiRaised(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___weiRaised).v); }
}
void Crowdsale_Method_1_For_SampleCrowdsale_buyTokens(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary) {
  sol_uint256_t func_user_weiAmount = Init_sol_uint256_t((value).v);
  TimedCrowdsale_Method_For_SampleCrowdsale___preValidatePurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_beneficiary).v),
      Init_sol_uint256_t((func_user_weiAmount).v));
  sol_uint256_t func_user_tokens = Init_sol_uint256_t(
      (Crowdsale_Method_For_SampleCrowdsale___getTokenAmount(
           self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
           Init_sol_uint256_t((func_user_weiAmount).v)))
          .v);
  ((self->user___weiRaised).v) =
      ((SafeMath_Method_add(Init_sol_uint256_t((self->user___weiRaised).v),
                            Init_sol_uint256_t((func_user_weiAmount).v)))
           .v);
  Crowdsale_Method_For_SampleCrowdsale___processPurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_beneficiary).v),
      Init_sol_uint256_t((func_user_tokens).v));
  sol_emit("TokensPurchased(msg.sender, beneficiary, weiAmount, tokens)");
  Crowdsale_Method_For_SampleCrowdsale___updatePurchasingState(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_beneficiary).v),
      Init_sol_uint256_t((func_user_weiAmount).v));
  RefundableCrowdsale_Method_For_SampleCrowdsale___forwardFunds(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  Crowdsale_Method_For_SampleCrowdsale___postValidatePurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_beneficiary).v),
      Init_sol_uint256_t((func_user_weiAmount).v));
}
void Crowdsale_Method_For_SampleCrowdsale_buyTokens(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_beneficiary) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  ((self->user___guardCounter).v) = (((self->user___guardCounter).v) + (1));
  sol_uint256_t func_user_localCounter =
      Init_sol_uint256_t((self->user___guardCounter).v);
  Crowdsale_Method_1_For_SampleCrowdsale_buyTokens(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_beneficiary);
  sol_require(((func_user_localCounter).v) == ((self->user___guardCounter).v),
              0);
}
void Crowdsale_Method_For_SampleCrowdsale___processPurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_tokenAmount) {
  MintedCrowdsale_Method_For_SampleCrowdsale___deliverTokens(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_beneficiary).v),
      Init_sol_uint256_t((func_user_tokenAmount).v));
}
void Crowdsale_Method_For_SampleCrowdsale___preValidatePurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_weiAmount) {
  sol_require(((func_user_beneficiary).v) != (((int)(g_literal_address_0))), 0);
  sol_require(((func_user_weiAmount).v) != (0), 0);
}
void TimedCrowdsale_Method_1_For_SampleCrowdsale___preValidatePurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_weiAmount) {
  CappedCrowdsale_Method_For_SampleCrowdsale___preValidatePurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_beneficiary).v),
      Init_sol_uint256_t((func_user_weiAmount).v));
}
void TimedCrowdsale_Method_For_SampleCrowdsale___preValidatePurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_beneficiary,
    sol_uint256_t func_model_weiAmount) {
  sol_require((TimedCrowdsale_Method_For_SampleCrowdsale_isOpen(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin))
                  .v,
              0);
  TimedCrowdsale_Method_1_For_SampleCrowdsale___preValidatePurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_beneficiary, func_model_weiAmount);
}
void CappedCrowdsale_Method_For_SampleCrowdsale___preValidatePurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_weiAmount) {
  Crowdsale_Method_For_SampleCrowdsale___preValidatePurchase(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_beneficiary).v),
      Init_sol_uint256_t((func_user_weiAmount).v));
  sol_require(
      ((SafeMath_Method_add(
            Init_sol_uint256_t((Crowdsale_Method_For_SampleCrowdsale_weiRaised(
                                    self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin))
                                   .v),
            Init_sol_uint256_t((func_user_weiAmount).v)))
           .v) <= ((self->user___cap).v),
      0);
}
void Crowdsale_Method_For_SampleCrowdsale___postValidatePurchase(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_weiAmount) {}
void Crowdsale_Method_For_SampleCrowdsale___updatePurchasingState(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_weiAmount) {}
sol_uint256_t Crowdsale_Method_For_SampleCrowdsale___getTokenAmount(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_weiAmount) {
  {
    return Init_sol_uint256_t(
        (SafeMath_Method_mul(Init_sol_uint256_t((func_user_weiAmount).v),
                             Init_sol_uint256_t((self->user___rate).v)))
            .v);
  }
}
void FinalizableCrowdsale_Method_For_SampleCrowdsale___finalization(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {}
void RefundableCrowdsale_Method_For_SampleCrowdsale___finalization(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  if ((RefundableCrowdsale_Method_For_SampleCrowdsale_goalReached(
           self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
           origin))
          .v) {
    RefundEscrow_Method_close(&(self->user___escrow), (self)->model_address,
                              Init_sol_uint256_t(0), blocknum, timestamp,
                              Init_sol_bool_t(1), origin);
    RefundEscrow_Method_beneficiaryWithdraw(
        &(self->user___escrow), (self)->model_address, Init_sol_uint256_t(0),
        blocknum, timestamp, Init_sol_bool_t(1), origin);
  } else {
    RefundEscrow_Method_enableRefunds(
        &(self->user___escrow), (self)->model_address, Init_sol_uint256_t(0),
        blocknum, timestamp, Init_sol_bool_t(1), origin);
  }
  FinalizableCrowdsale_Method_For_SampleCrowdsale___finalization(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void RefundableCrowdsale_Method_For_SampleCrowdsale___forwardFunds(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  RefundEscrow_Method_deposit(
      &(self->user___escrow), (self)->model_address,
      sol_pay(&((self)->model_balance), Init_sol_uint256_t((value).v)),
      blocknum, timestamp, Init_sol_bool_t(1), origin,
      Init_sol_address_t((sender).v));
}
void MintedCrowdsale_Method_For_SampleCrowdsale___deliverTokens(
    struct SampleCrowdsale *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_beneficiary,
    sol_uint256_t func_user_tokenAmount) {
  sol_require((ERC20Mintable_Method_For_SampleCrowdsaleToken_mint(
                   Crowdsale_Method_For_SampleCrowdsale_token(
                       self, sender, value, blocknum, timestamp,
                       Init_sol_bool_t(0), origin),
                   (self)->model_address, Init_sol_uint256_t(0), blocknum,
                   timestamp, Init_sol_bool_t(1), origin,
                   Init_sol_address_t((func_user_beneficiary).v),
                   Init_sol_uint256_t((func_user_tokenAmount).v)))
                  .v,
              0);
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
  return tmp;
}
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0) {
  {
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v))
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
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v)) {
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
  ((tmp).data_1_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1_1) = (Init_sol_uint256_t(0));
  ((tmp).data_1_2) = (Init_sol_uint256_t(0));
  ((tmp).data_1_3) = (Init_sol_uint256_t(0));
  ((tmp).data_1_4) = (Init_sol_uint256_t(0));
  ((tmp).data_1_5) = (Init_sol_uint256_t(0));
  ((tmp).data_1_6) = (Init_sol_uint256_t(0));
  ((tmp).data_1_7) = (Init_sol_uint256_t(0));
  ((tmp).data_2_0) = (Init_sol_uint256_t(0));
  ((tmp).data_2_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2_2) = (Init_sol_uint256_t(0));
  ((tmp).data_2_3) = (Init_sol_uint256_t(0));
  ((tmp).data_2_4) = (Init_sol_uint256_t(0));
  ((tmp).data_2_5) = (Init_sol_uint256_t(0));
  ((tmp).data_2_6) = (Init_sol_uint256_t(0));
  ((tmp).data_2_7) = (Init_sol_uint256_t(0));
  ((tmp).data_3_0) = (Init_sol_uint256_t(0));
  ((tmp).data_3_1) = (Init_sol_uint256_t(0));
  ((tmp).data_3_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3_3) = (Init_sol_uint256_t(0));
  ((tmp).data_3_4) = (Init_sol_uint256_t(0));
  ((tmp).data_3_5) = (Init_sol_uint256_t(0));
  ((tmp).data_3_6) = (Init_sol_uint256_t(0));
  ((tmp).data_3_7) = (Init_sol_uint256_t(0));
  ((tmp).data_4_0) = (Init_sol_uint256_t(0));
  ((tmp).data_4_1) = (Init_sol_uint256_t(0));
  ((tmp).data_4_2) = (Init_sol_uint256_t(0));
  ((tmp).data_4_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4_4) = (Init_sol_uint256_t(0));
  ((tmp).data_4_5) = (Init_sol_uint256_t(0));
  ((tmp).data_4_6) = (Init_sol_uint256_t(0));
  ((tmp).data_4_7) = (Init_sol_uint256_t(0));
  ((tmp).data_5_0) = (Init_sol_uint256_t(0));
  ((tmp).data_5_1) = (Init_sol_uint256_t(0));
  ((tmp).data_5_2) = (Init_sol_uint256_t(0));
  ((tmp).data_5_3) = (Init_sol_uint256_t(0));
  ((tmp).data_5_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5_5) = (Init_sol_uint256_t(0));
  ((tmp).data_5_6) = (Init_sol_uint256_t(0));
  ((tmp).data_5_7) = (Init_sol_uint256_t(0));
  ((tmp).data_6_0) = (Init_sol_uint256_t(0));
  ((tmp).data_6_1) = (Init_sol_uint256_t(0));
  ((tmp).data_6_2) = (Init_sol_uint256_t(0));
  ((tmp).data_6_3) = (Init_sol_uint256_t(0));
  ((tmp).data_6_4) = (Init_sol_uint256_t(0));
  ((tmp).data_6_5) = (Init_sol_uint256_t(0));
  ((tmp).data_6_6) = (Init_sol_uint256_t(0));
  ((tmp).data_6_7) = (Init_sol_uint256_t(0));
  ((tmp).data_7_0) = (Init_sol_uint256_t(0));
  ((tmp).data_7_1) = (Init_sol_uint256_t(0));
  ((tmp).data_7_2) = (Init_sol_uint256_t(0));
  ((tmp).data_7_3) = (Init_sol_uint256_t(0));
  ((tmp).data_7_4) = (Init_sol_uint256_t(0));
  ((tmp).data_7_5) = (Init_sol_uint256_t(0));
  ((tmp).data_7_6) = (Init_sol_uint256_t(0));
  ((tmp).data_7_7) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1) {
  {
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((8) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v)) {
      if ((7) == ((key_1).v))
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
      if ((7) == ((key_1).v))
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
      if ((7) == ((key_1).v))
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
      if ((7) == ((key_1).v))
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
      if ((7) == ((key_1).v))
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
      if ((7) == ((key_1).v))
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
      if ((7) == ((key_1).v))
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
      if ((7) == ((key_1).v))
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
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((8) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
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
      if ((7) == ((key_1).v)) {
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
      if ((7) == ((key_1).v)) {
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
      if ((7) == ((key_1).v)) {
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
      if ((7) == ((key_1).v)) {
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
      if ((7) == ((key_1).v)) {
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
      if ((7) == ((key_1).v)) {
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
      if ((7) == ((key_1).v)) {
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
void SampleCrowdsaleToken_Constructor(struct SampleCrowdsaleToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {}
void ERC20Detailed_Constructor_For_SampleCrowdsaleToken(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_uint256_t func_user_name,
    sol_uint256_t func_user_symbol, sol_uint8_t func_user_decimals) {
  ((self->user___name).v) = ((func_user_name).v);
  ((self->user___symbol).v) = ((func_user_symbol).v);
  ((self->user___decimals).v) = ((func_user_decimals).v);
}
void Init_ERC20Detailed_For_SampleCrowdsaleToken(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_uint256_t user_name,
    sol_uint256_t user_symbol, sol_uint8_t user_decimals) {
  ((self)->user___name) = (Init_sol_uint256_t(0));
  ((self)->user___symbol) = (Init_sol_uint256_t(0));
  ((self)->user___decimals) = (Init_sol_uint8_t(0));
  ERC20Detailed_Constructor_For_SampleCrowdsaleToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      user_name, user_symbol, user_decimals);
}
void Init_ERC20_For_SampleCrowdsaleToken(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  ((self)->user___balances) = (ZeroInit_Map_1());
  ((self)->user___allowed) = (ZeroInit_Map_2());
  ((self)->user___totalSupply) = (Init_sol_uint256_t(0));
}
void MinterRole_Constructor_For_SampleCrowdsaleToken(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  MinterRole_Method_For_SampleCrowdsaleToken___addMinter(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v));
}
void Init_MinterRole_For_SampleCrowdsaleToken(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  ((self)->user___minters) = (ZeroInit_Roles_Struct_Role());
  MinterRole_Constructor_For_SampleCrowdsaleToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Init_ERC20Mintable_For_SampleCrowdsaleToken(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  Init_ERC20_For_SampleCrowdsaleToken(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin);
  Init_MinterRole_For_SampleCrowdsaleToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Init_SampleCrowdsaleToken(struct SampleCrowdsaleToken *self,
                               sol_address_t sender, sol_uint256_t value,
                               sol_uint256_t blocknum, sol_uint256_t timestamp,
                               sol_bool_t paid, sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_ERC20Detailed_For_SampleCrowdsaleToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t(-4545610636888540731),
      Init_sol_uint256_t(-5315523752431137651), Init_sol_uint8_t(18));
  Init_ERC20Mintable_For_SampleCrowdsaleToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  SampleCrowdsaleToken_Constructor(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
}
sol_uint256_t ERC20Detailed_Method_For_SampleCrowdsaleToken_name(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___name).v); }
}
sol_uint256_t ERC20Detailed_Method_For_SampleCrowdsaleToken_symbol(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___symbol).v); }
}
sol_uint8_t ERC20Detailed_Method_For_SampleCrowdsaleToken_decimals(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  { return Init_sol_uint8_t((self->user___decimals).v); }
}
sol_bool_t ERC20Mintable_Method_1_For_SampleCrowdsaleToken_mint(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_to,
    sol_uint256_t func_user_value) {
  ERC20_Method_For_SampleCrowdsaleToken___mint(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_to).v),
      Init_sol_uint256_t((func_user_value).v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20Mintable_Method_For_SampleCrowdsaleToken_mint(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model_to,
    sol_uint256_t func_model_value) {
  sol_bool_t func_model_rv;
  sol_require((MinterRole_Method_For_SampleCrowdsaleToken_isMinter(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin, Init_sol_address_t((sender).v)))
                  .v,
              0);
  (func_model_rv) = (ERC20Mintable_Method_1_For_SampleCrowdsaleToken_mint(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_to, func_model_value));
  return func_model_rv;
}
sol_bool_t MinterRole_Method_For_SampleCrowdsaleToken_isMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_account) {
  {
    return Init_sol_bool_t(
        (Roles_Method_has(&(self->user___minters),
                          Init_sol_address_t((func_user_account).v)))
            .v);
  }
}
void MinterRole_Method_1_For_SampleCrowdsaleToken_addMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_account) {
  MinterRole_Method_For_SampleCrowdsaleToken___addMinter(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_account).v));
}
void MinterRole_Method_For_SampleCrowdsaleToken_addMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model_account) {
  sol_require((MinterRole_Method_For_SampleCrowdsaleToken_isMinter(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin, Init_sol_address_t((sender).v)))
                  .v,
              0);
  MinterRole_Method_1_For_SampleCrowdsaleToken_addMinter(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_account);
}
void MinterRole_Method_For_SampleCrowdsaleToken_renounceMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  MinterRole_Method_For_SampleCrowdsaleToken___removeMinter(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v));
}
sol_uint256_t ERC20_Method_For_SampleCrowdsaleToken_totalSupply(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___totalSupply).v); }
}
sol_uint256_t ERC20_Method_For_SampleCrowdsaleToken_balanceOf(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_owner) {
  {
    return Init_sol_uint256_t(
        (Read_Map_1(&(self->user___balances),
                    Init_sol_address_t((func_user_owner).v)))
            .v);
  }
}
sol_uint256_t ERC20_Method_For_SampleCrowdsaleToken_allowance(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_owner,
    sol_address_t func_user_spender) {
  {
    return Init_sol_uint256_t(
        (Read_Map_2(&(self->user___allowed),
                    Init_sol_address_t((func_user_owner).v),
                    Init_sol_address_t((func_user_spender).v)))
            .v);
  }
}
sol_bool_t ERC20_Method_For_SampleCrowdsaleToken_transfer(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_to,
    sol_uint256_t func_user_value) {
  ERC20_Method_For_SampleCrowdsaleToken___transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_address_t((func_user_to).v),
      Init_sol_uint256_t((func_user_value).v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_SampleCrowdsaleToken_approve(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_value) {
  sol_require(((func_user_spender).v) != (((int)(g_literal_address_0))), 0);
  Write_Map_2(&(self->user___allowed), Init_sol_address_t((sender).v),
              Init_sol_address_t((func_user_spender).v),
              Init_sol_uint256_t((func_user_value).v));
  sol_emit("Approval(msg.sender, spender, value)");
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_SampleCrowdsaleToken_transferFrom(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_from,
    sol_address_t func_user_to, sol_uint256_t func_user_value) {
  Write_Map_2(&(self->user___allowed), Init_sol_address_t((func_user_from).v),
              Init_sol_address_t((sender).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_sub(
                       Init_sol_uint256_t(
                           (Read_Map_2(&(self->user___allowed),
                                       Init_sol_address_t((func_user_from).v),
                                       Init_sol_address_t((sender).v)))
                               .v),
                       Init_sol_uint256_t((func_user_value).v)))
                      .v));
  ERC20_Method_For_SampleCrowdsaleToken___transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_from).v),
      Init_sol_address_t((func_user_to).v),
      Init_sol_uint256_t((func_user_value).v));
  sol_emit("Approval(from, msg.sender, _allowed[from][msg.sender])");
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_SampleCrowdsaleToken_increaseAllowance(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_addedValue) {
  sol_require(((func_user_spender).v) != (((int)(g_literal_address_0))), 0);
  Write_Map_2(
      &(self->user___allowed), Init_sol_address_t((sender).v),
      Init_sol_address_t((func_user_spender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user___allowed),
                               Init_sol_address_t((sender).v),
                               Init_sol_address_t((func_user_spender).v)))
                       .v),
               Init_sol_uint256_t((func_user_addedValue).v)))
              .v));
  sol_emit("Approval(msg.sender, spender, _allowed[msg.sender][spender])");
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_SampleCrowdsaleToken_decreaseAllowance(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_subtractedValue) {
  sol_require(((func_user_spender).v) != (((int)(g_literal_address_0))), 0);
  Write_Map_2(
      &(self->user___allowed), Init_sol_address_t((sender).v),
      Init_sol_address_t((func_user_spender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user___allowed),
                               Init_sol_address_t((sender).v),
                               Init_sol_address_t((func_user_spender).v)))
                       .v),
               Init_sol_uint256_t((func_user_subtractedValue).v)))
              .v));
  sol_emit("Approval(msg.sender, spender, _allowed[msg.sender][spender])");
  { return Init_sol_bool_t(1); }
}
void ERC20_Method_For_SampleCrowdsaleToken___transfer(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_from,
    sol_address_t func_user_to, sol_uint256_t func_user_value) {
  sol_require(((func_user_to).v) != (((int)(g_literal_address_0))), 0);
  Write_Map_1(&(self->user___balances), Init_sol_address_t((func_user_from).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_sub(
                       Init_sol_uint256_t(
                           (Read_Map_1(&(self->user___balances),
                                       Init_sol_address_t((func_user_from).v)))
                               .v),
                       Init_sol_uint256_t((func_user_value).v)))
                      .v));
  Write_Map_1(&(self->user___balances), Init_sol_address_t((func_user_to).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_add(
                       Init_sol_uint256_t(
                           (Read_Map_1(&(self->user___balances),
                                       Init_sol_address_t((func_user_to).v)))
                               .v),
                       Init_sol_uint256_t((func_user_value).v)))
                      .v));
  sol_emit("Transfer(from, to, value)");
}
void ERC20_Method_For_SampleCrowdsaleToken___mint(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_account,
    sol_uint256_t func_user_value) {
  sol_require(((func_user_account).v) != (((int)(g_literal_address_0))), 0);
  ((self->user___totalSupply).v) =
      ((SafeMath_Method_add(Init_sol_uint256_t((self->user___totalSupply).v),
                            Init_sol_uint256_t((func_user_value).v)))
           .v);
  Write_Map_1(
      &(self->user___balances), Init_sol_address_t((func_user_account).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user___balances),
                               Init_sol_address_t((func_user_account).v)))
                       .v),
               Init_sol_uint256_t((func_user_value).v)))
              .v));
  sol_emit("Transfer(address(0), account, value)");
}
void MinterRole_Method_For_SampleCrowdsaleToken___addMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_account) {
  Roles_Method_add(&(self->user___minters),
                   Init_sol_address_t((func_user_account).v));
  sol_emit("MinterAdded(account)");
}
void MinterRole_Method_For_SampleCrowdsaleToken___removeMinter(
    struct SampleCrowdsaleToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_account) {
  Roles_Method_remove(&(self->user___minters),
                      Init_sol_address_t((func_user_account).v));
  sol_emit("MinterRemoved(account)");
}
struct Map_4 ZeroInit_Map_4(void) {
  struct Map_4 tmp;
  ((tmp).data_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5) = (Init_sol_uint256_t(0));
  ((tmp).data_6) = (Init_sol_uint256_t(0));
  ((tmp).data_7) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_4(struct Map_4 *arr, sol_address_t key_0) {
  {
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v))
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
void Write_Map_4(struct Map_4 *arr, sol_address_t key_0, sol_uint256_t dat) {
  {
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v)) {
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
void RefundEscrow_Constructor(struct RefundEscrow *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin,
                              sol_address_t func_user_beneficiary) {
  sol_require(((func_user_beneficiary).v) != (((int)(g_literal_address_0))), 0);
  ((self->user___beneficiary).v) = ((func_user_beneficiary).v);
  ((self->user___state).v) = (0);
}
void Secondary_Constructor_For_RefundEscrow(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user___primary).v) = ((sender).v);
  sol_emit("PrimaryTransferred(_primary)");
}
void Init_Secondary_For_RefundEscrow(struct RefundEscrow *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin) {
  ((self)->user___primary) = (Init_sol_address_t(0));
  Secondary_Constructor_For_RefundEscrow(self, sender, value, blocknum,
                                         timestamp, Init_sol_bool_t(0), origin);
}
void Init_Escrow_For_RefundEscrow(struct RefundEscrow *self,
                                  sol_address_t sender, sol_uint256_t value,
                                  sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {
  Init_Secondary_For_RefundEscrow(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
  ((self)->user___deposits) = (ZeroInit_Map_4());
}
void Init_ConditionalEscrow_For_RefundEscrow(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  Init_Escrow_For_RefundEscrow(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin);
}
void Init_RefundEscrow(struct RefundEscrow *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin, sol_address_t user_beneficiary) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_ConditionalEscrow_For_RefundEscrow(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  ((self)->user___state) = (Init_sol_uint8_t(0));
  ((self)->user___beneficiary) = (Init_sol_address_t(0));
  RefundEscrow_Constructor(self, sender, value, blocknum, timestamp,
                           Init_sol_bool_t(0), origin, user_beneficiary);
}
sol_uint8_t RefundEscrow_Method_state(struct RefundEscrow *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {
  { return Init_sol_uint8_t((self->user___state).v); }
}
sol_address_t
RefundEscrow_Method_beneficiary(struct RefundEscrow *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin) {
  { return Init_sol_address_t((self->user___beneficiary).v); }
}
void Escrow_Method_1_For_RefundEscrow_deposit(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_payee) {
  sol_uint256_t func_user_amount = Init_sol_uint256_t((value).v);
  Write_Map_4(&(self->user___deposits), Init_sol_address_t((func_user_payee).v),
              Init_sol_uint256_t(
                  (SafeMath_Method_add(
                       Init_sol_uint256_t(
                           (Read_Map_4(&(self->user___deposits),
                                       Init_sol_address_t((func_user_payee).v)))
                               .v),
                       Init_sol_uint256_t((func_user_amount).v)))
                      .v));
  sol_emit("Deposited(payee, amount)");
}
void Escrow_Method_For_RefundEscrow_deposit(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_payee) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_require(((sender).v) == ((self->user___primary).v), 0);
  Escrow_Method_1_For_RefundEscrow_deposit(self, sender, value, blocknum,
                                           timestamp, Init_sol_bool_t(0),
                                           origin, func_model_payee);
}
void RefundEscrow_Method_deposit(struct RefundEscrow *self,
                                 sol_address_t sender, sol_uint256_t value,
                                 sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin,
                                 sol_address_t func_user_refundee) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_require(((self->user___state).v) == (0), 0);
  Escrow_Method_For_RefundEscrow_deposit(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_refundee).v));
}
void RefundEscrow_Method_1_close(struct RefundEscrow *self,
                                 sol_address_t sender, sol_uint256_t value,
                                 sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin) {
  sol_require(((self->user___state).v) == (0), 0);
  ((self->user___state).v) = (2);
  sol_emit("RefundsClosed()");
}
void RefundEscrow_Method_close(struct RefundEscrow *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin) {
  sol_require(((sender).v) == ((self->user___primary).v), 0);
  RefundEscrow_Method_1_close(self, sender, value, blocknum, timestamp,
                              Init_sol_bool_t(0), origin);
}
void RefundEscrow_Method_1_enableRefunds(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((self->user___state).v) == (0), 0);
  ((self->user___state).v) = (1);
  sol_emit("RefundsEnabled()");
}
void RefundEscrow_Method_enableRefunds(struct RefundEscrow *self,
                                       sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin) {
  sol_require(((sender).v) == ((self->user___primary).v), 0);
  RefundEscrow_Method_1_enableRefunds(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin);
}
void RefundEscrow_Method_beneficiaryWithdraw(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  sol_require(((self->user___state).v) == (2), 0);
  sol_transfer(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
               Init_sol_address_t((self->user___beneficiary).v),
               Init_sol_uint256_t(((self)->model_balance).v));
}
sol_bool_t RefundEscrow_Method_withdrawalAllowed(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_var0) {
  { return Init_sol_bool_t(((self->user___state).v) == (1)); }
}
void Escrow_Method_1_For_RefundEscrow_withdraw(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_payee) {
  sol_uint256_t func_user_payment =
      Init_sol_uint256_t((Read_Map_4(&(self->user___deposits),
                                     Init_sol_address_t((func_user_payee).v)))
                             .v);
  Write_Map_4(&(self->user___deposits), Init_sol_address_t((func_user_payee).v),
              Init_sol_uint256_t(0));
  sol_transfer(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
               Init_sol_address_t((func_user_payee).v),
               Init_sol_uint256_t((func_user_payment).v));
  sol_emit("Withdrawn(payee, payment)");
}
void Escrow_Method_For_RefundEscrow_withdraw(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_payee) {
  sol_require(((sender).v) == ((self->user___primary).v), 0);
  Escrow_Method_1_For_RefundEscrow_withdraw(self, sender, value, blocknum,
                                            timestamp, Init_sol_bool_t(0),
                                            origin, func_model_payee);
}
void ConditionalEscrow_Method_For_RefundEscrow_withdraw(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_payee) {
  sol_require((RefundEscrow_Method_withdrawalAllowed(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin, Init_sol_address_t((func_user_payee).v)))
                  .v,
              0);
  Escrow_Method_For_RefundEscrow_withdraw(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_payee).v));
}
sol_uint256_t Escrow_Method_For_RefundEscrow_depositsOf(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_payee) {
  {
    return Init_sol_uint256_t(
        (Read_Map_4(&(self->user___deposits),
                    Init_sol_address_t((func_user_payee).v)))
            .v);
  }
}
sol_address_t Secondary_Method_For_RefundEscrow_primary(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_address_t((self->user___primary).v); }
}
void Secondary_Method_1_For_RefundEscrow_transferPrimary(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_recipient) {
  sol_require(((func_user_recipient).v) != (((int)(g_literal_address_0))), 0);
  ((self->user___primary).v) = ((func_user_recipient).v);
  sol_emit("PrimaryTransferred(_primary)");
}
void Secondary_Method_For_RefundEscrow_transferPrimary(
    struct RefundEscrow *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_recipient) {
  sol_require(((sender).v) == ((self->user___primary).v), 0);
  Secondary_Method_1_For_RefundEscrow_transferPrimary(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_recipient);
}
void run_model(void) {
  sol_address_t last_sender;
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(71, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(72, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct SampleCrowdsaleToken *contract_2;
  struct RefundEscrow *contract_3;
  (g_literal_address_0) = (0);
  (((contract_1).model_address).v) = (1);
  (contract_2) = (&((contract_1).user___token));
  (((contract_2)->model_address).v) = (2);
  (contract_3) = (&((contract_1).user___escrow));
  (((contract_3)->model_address).v) = (3);
  (((contract_1).user___wallet).v) = (0);
  (((contract_3)->user___beneficiary).v) = (0);
  (((contract_3)->user___primary).v) = (0);
  smartace_log("[Initializing contract_1 and children]");
  if (GET_ND_RANGE(75, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(73, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(74, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(76, 4, 8, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_SampleCrowdsale(
        &(contract_1), sender, value, blocknum, timestamp, paid, sender,
        Init_sol_uint256_t(GET_ND_UINT(77, 256, "SampleCrowdsale:openingTime")),
        Init_sol_uint256_t(GET_ND_UINT(78, 256, "SampleCrowdsale:closingTime")),
        Init_sol_uint256_t(GET_ND_UINT(79, 256, "SampleCrowdsale:rate")),
        Init_sol_address_t(GET_ND_RANGE(80, 0, 8, "SampleCrowdsale:wallet")),
        Init_sol_uint256_t(GET_ND_UINT(81, 256, "SampleCrowdsale:cap")),
        Init_sol_uint256_t(GET_ND_UINT(82, 256, "SampleCrowdsale:goal")),
        Init_sol_address_t(
            GET_ND_RANGE(83, 0, 8, "SampleCrowdsale:verxSender")));
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    if (sol_is_using_reps()) {
      (((contract_2)->user___balances).data_0) = (Init_sol_uint256_t(
          GET_ND_UINT(84, 256, "SampleCrowdsaleToken::_balances::_0")));
      (((contract_2)->user___balances).data_1) = (Init_sol_uint256_t(
          GET_ND_UINT(85, 256, "SampleCrowdsaleToken::_balances::_1")));
      (((contract_2)->user___balances).data_2) = (Init_sol_uint256_t(
          GET_ND_UINT(86, 256, "SampleCrowdsaleToken::_balances::_2")));
      (((contract_2)->user___balances).data_3) = (Init_sol_uint256_t(
          GET_ND_UINT(87, 256, "SampleCrowdsaleToken::_balances::_3")));
      (((contract_2)->user___balances).data_4) = (Init_sol_uint256_t(
          GET_ND_UINT(88, 256, "SampleCrowdsaleToken::_balances::_4")));
      (((contract_2)->user___balances).data_5) = (Init_sol_uint256_t(
          GET_ND_UINT(89, 256, "SampleCrowdsaleToken::_balances::_5")));
      (((contract_2)->user___balances).data_6) = (Init_sol_uint256_t(
          GET_ND_UINT(90, 256, "SampleCrowdsaleToken::_balances::_6")));
      (((contract_2)->user___balances).data_7) = (Init_sol_uint256_t(
          GET_ND_UINT(91, 256, "SampleCrowdsaleToken::_balances::_7")));
      (((contract_2)->user___allowed).data_0_0) = (Init_sol_uint256_t(
          GET_ND_UINT(92, 256, "SampleCrowdsaleToken::_allowed::_0_0")));
      (((contract_2)->user___allowed).data_0_1) = (Init_sol_uint256_t(
          GET_ND_UINT(93, 256, "SampleCrowdsaleToken::_allowed::_0_1")));
      (((contract_2)->user___allowed).data_0_2) = (Init_sol_uint256_t(
          GET_ND_UINT(94, 256, "SampleCrowdsaleToken::_allowed::_0_2")));
      (((contract_2)->user___allowed).data_0_3) = (Init_sol_uint256_t(
          GET_ND_UINT(95, 256, "SampleCrowdsaleToken::_allowed::_0_3")));
      (((contract_2)->user___allowed).data_0_4) = (Init_sol_uint256_t(
          GET_ND_UINT(96, 256, "SampleCrowdsaleToken::_allowed::_0_4")));
      (((contract_2)->user___allowed).data_0_5) = (Init_sol_uint256_t(
          GET_ND_UINT(97, 256, "SampleCrowdsaleToken::_allowed::_0_5")));
      (((contract_2)->user___allowed).data_0_6) = (Init_sol_uint256_t(
          GET_ND_UINT(98, 256, "SampleCrowdsaleToken::_allowed::_0_6")));
      (((contract_2)->user___allowed).data_0_7) = (Init_sol_uint256_t(
          GET_ND_UINT(99, 256, "SampleCrowdsaleToken::_allowed::_0_7")));
      (((contract_2)->user___allowed).data_1_0) = (Init_sol_uint256_t(
          GET_ND_UINT(100, 256, "SampleCrowdsaleToken::_allowed::_1_0")));
      (((contract_2)->user___allowed).data_1_1) = (Init_sol_uint256_t(
          GET_ND_UINT(101, 256, "SampleCrowdsaleToken::_allowed::_1_1")));
      (((contract_2)->user___allowed).data_1_2) = (Init_sol_uint256_t(
          GET_ND_UINT(102, 256, "SampleCrowdsaleToken::_allowed::_1_2")));
      (((contract_2)->user___allowed).data_1_3) = (Init_sol_uint256_t(
          GET_ND_UINT(103, 256, "SampleCrowdsaleToken::_allowed::_1_3")));
      (((contract_2)->user___allowed).data_1_4) = (Init_sol_uint256_t(
          GET_ND_UINT(104, 256, "SampleCrowdsaleToken::_allowed::_1_4")));
      (((contract_2)->user___allowed).data_1_5) = (Init_sol_uint256_t(
          GET_ND_UINT(105, 256, "SampleCrowdsaleToken::_allowed::_1_5")));
      (((contract_2)->user___allowed).data_1_6) = (Init_sol_uint256_t(
          GET_ND_UINT(106, 256, "SampleCrowdsaleToken::_allowed::_1_6")));
      (((contract_2)->user___allowed).data_1_7) = (Init_sol_uint256_t(
          GET_ND_UINT(107, 256, "SampleCrowdsaleToken::_allowed::_1_7")));
      (((contract_2)->user___allowed).data_2_0) = (Init_sol_uint256_t(
          GET_ND_UINT(108, 256, "SampleCrowdsaleToken::_allowed::_2_0")));
      (((contract_2)->user___allowed).data_2_1) = (Init_sol_uint256_t(
          GET_ND_UINT(109, 256, "SampleCrowdsaleToken::_allowed::_2_1")));
      (((contract_2)->user___allowed).data_2_2) = (Init_sol_uint256_t(
          GET_ND_UINT(110, 256, "SampleCrowdsaleToken::_allowed::_2_2")));
      (((contract_2)->user___allowed).data_2_3) = (Init_sol_uint256_t(
          GET_ND_UINT(111, 256, "SampleCrowdsaleToken::_allowed::_2_3")));
      (((contract_2)->user___allowed).data_2_4) = (Init_sol_uint256_t(
          GET_ND_UINT(112, 256, "SampleCrowdsaleToken::_allowed::_2_4")));
      (((contract_2)->user___allowed).data_2_5) = (Init_sol_uint256_t(
          GET_ND_UINT(113, 256, "SampleCrowdsaleToken::_allowed::_2_5")));
      (((contract_2)->user___allowed).data_2_6) = (Init_sol_uint256_t(
          GET_ND_UINT(114, 256, "SampleCrowdsaleToken::_allowed::_2_6")));
      (((contract_2)->user___allowed).data_2_7) = (Init_sol_uint256_t(
          GET_ND_UINT(115, 256, "SampleCrowdsaleToken::_allowed::_2_7")));
      (((contract_2)->user___allowed).data_3_0) = (Init_sol_uint256_t(
          GET_ND_UINT(116, 256, "SampleCrowdsaleToken::_allowed::_3_0")));
      (((contract_2)->user___allowed).data_3_1) = (Init_sol_uint256_t(
          GET_ND_UINT(117, 256, "SampleCrowdsaleToken::_allowed::_3_1")));
      (((contract_2)->user___allowed).data_3_2) = (Init_sol_uint256_t(
          GET_ND_UINT(118, 256, "SampleCrowdsaleToken::_allowed::_3_2")));
      (((contract_2)->user___allowed).data_3_3) = (Init_sol_uint256_t(
          GET_ND_UINT(119, 256, "SampleCrowdsaleToken::_allowed::_3_3")));
      (((contract_2)->user___allowed).data_3_4) = (Init_sol_uint256_t(
          GET_ND_UINT(120, 256, "SampleCrowdsaleToken::_allowed::_3_4")));
      (((contract_2)->user___allowed).data_3_5) = (Init_sol_uint256_t(
          GET_ND_UINT(121, 256, "SampleCrowdsaleToken::_allowed::_3_5")));
      (((contract_2)->user___allowed).data_3_6) = (Init_sol_uint256_t(
          GET_ND_UINT(122, 256, "SampleCrowdsaleToken::_allowed::_3_6")));
      (((contract_2)->user___allowed).data_3_7) = (Init_sol_uint256_t(
          GET_ND_UINT(123, 256, "SampleCrowdsaleToken::_allowed::_3_7")));
      (((contract_2)->user___allowed).data_4_0) = (Init_sol_uint256_t(
          GET_ND_UINT(124, 256, "SampleCrowdsaleToken::_allowed::_4_0")));
      (((contract_2)->user___allowed).data_4_1) = (Init_sol_uint256_t(
          GET_ND_UINT(125, 256, "SampleCrowdsaleToken::_allowed::_4_1")));
      (((contract_2)->user___allowed).data_4_2) = (Init_sol_uint256_t(
          GET_ND_UINT(126, 256, "SampleCrowdsaleToken::_allowed::_4_2")));
      (((contract_2)->user___allowed).data_4_3) = (Init_sol_uint256_t(
          GET_ND_UINT(127, 256, "SampleCrowdsaleToken::_allowed::_4_3")));
      (((contract_2)->user___allowed).data_4_4) = (Init_sol_uint256_t(
          GET_ND_UINT(128, 256, "SampleCrowdsaleToken::_allowed::_4_4")));
      (((contract_2)->user___allowed).data_4_5) = (Init_sol_uint256_t(
          GET_ND_UINT(129, 256, "SampleCrowdsaleToken::_allowed::_4_5")));
      (((contract_2)->user___allowed).data_4_6) = (Init_sol_uint256_t(
          GET_ND_UINT(130, 256, "SampleCrowdsaleToken::_allowed::_4_6")));
      (((contract_2)->user___allowed).data_4_7) = (Init_sol_uint256_t(
          GET_ND_UINT(131, 256, "SampleCrowdsaleToken::_allowed::_4_7")));
      (((contract_2)->user___allowed).data_5_0) = (Init_sol_uint256_t(
          GET_ND_UINT(132, 256, "SampleCrowdsaleToken::_allowed::_5_0")));
      (((contract_2)->user___allowed).data_5_1) = (Init_sol_uint256_t(
          GET_ND_UINT(133, 256, "SampleCrowdsaleToken::_allowed::_5_1")));
      (((contract_2)->user___allowed).data_5_2) = (Init_sol_uint256_t(
          GET_ND_UINT(134, 256, "SampleCrowdsaleToken::_allowed::_5_2")));
      (((contract_2)->user___allowed).data_5_3) = (Init_sol_uint256_t(
          GET_ND_UINT(135, 256, "SampleCrowdsaleToken::_allowed::_5_3")));
      (((contract_2)->user___allowed).data_5_4) = (Init_sol_uint256_t(
          GET_ND_UINT(136, 256, "SampleCrowdsaleToken::_allowed::_5_4")));
      (((contract_2)->user___allowed).data_5_5) = (Init_sol_uint256_t(
          GET_ND_UINT(137, 256, "SampleCrowdsaleToken::_allowed::_5_5")));
      (((contract_2)->user___allowed).data_5_6) = (Init_sol_uint256_t(
          GET_ND_UINT(138, 256, "SampleCrowdsaleToken::_allowed::_5_6")));
      (((contract_2)->user___allowed).data_5_7) = (Init_sol_uint256_t(
          GET_ND_UINT(139, 256, "SampleCrowdsaleToken::_allowed::_5_7")));
      (((contract_2)->user___allowed).data_6_0) = (Init_sol_uint256_t(
          GET_ND_UINT(140, 256, "SampleCrowdsaleToken::_allowed::_6_0")));
      (((contract_2)->user___allowed).data_6_1) = (Init_sol_uint256_t(
          GET_ND_UINT(141, 256, "SampleCrowdsaleToken::_allowed::_6_1")));
      (((contract_2)->user___allowed).data_6_2) = (Init_sol_uint256_t(
          GET_ND_UINT(142, 256, "SampleCrowdsaleToken::_allowed::_6_2")));
      (((contract_2)->user___allowed).data_6_3) = (Init_sol_uint256_t(
          GET_ND_UINT(143, 256, "SampleCrowdsaleToken::_allowed::_6_3")));
      (((contract_2)->user___allowed).data_6_4) = (Init_sol_uint256_t(
          GET_ND_UINT(144, 256, "SampleCrowdsaleToken::_allowed::_6_4")));
      (((contract_2)->user___allowed).data_6_5) = (Init_sol_uint256_t(
          GET_ND_UINT(145, 256, "SampleCrowdsaleToken::_allowed::_6_5")));
      (((contract_2)->user___allowed).data_6_6) = (Init_sol_uint256_t(
          GET_ND_UINT(146, 256, "SampleCrowdsaleToken::_allowed::_6_6")));
      (((contract_2)->user___allowed).data_6_7) = (Init_sol_uint256_t(
          GET_ND_UINT(147, 256, "SampleCrowdsaleToken::_allowed::_6_7")));
      (((contract_2)->user___allowed).data_7_0) = (Init_sol_uint256_t(
          GET_ND_UINT(148, 256, "SampleCrowdsaleToken::_allowed::_7_0")));
      (((contract_2)->user___allowed).data_7_1) = (Init_sol_uint256_t(
          GET_ND_UINT(149, 256, "SampleCrowdsaleToken::_allowed::_7_1")));
      (((contract_2)->user___allowed).data_7_2) = (Init_sol_uint256_t(
          GET_ND_UINT(150, 256, "SampleCrowdsaleToken::_allowed::_7_2")));
      (((contract_2)->user___allowed).data_7_3) = (Init_sol_uint256_t(
          GET_ND_UINT(151, 256, "SampleCrowdsaleToken::_allowed::_7_3")));
      (((contract_2)->user___allowed).data_7_4) = (Init_sol_uint256_t(
          GET_ND_UINT(152, 256, "SampleCrowdsaleToken::_allowed::_7_4")));
      (((contract_2)->user___allowed).data_7_5) = (Init_sol_uint256_t(
          GET_ND_UINT(153, 256, "SampleCrowdsaleToken::_allowed::_7_5")));
      (((contract_2)->user___allowed).data_7_6) = (Init_sol_uint256_t(
          GET_ND_UINT(154, 256, "SampleCrowdsaleToken::_allowed::_7_6")));
      (((contract_2)->user___allowed).data_7_7) = (Init_sol_uint256_t(
          GET_ND_UINT(155, 256, "SampleCrowdsaleToken::_allowed::_7_7")));
      (((contract_3)->user___deposits).data_0) = (Init_sol_uint256_t(
          GET_ND_UINT(156, 256, "RefundEscrow::_deposits::_0")));
      (((contract_3)->user___deposits).data_1) = (Init_sol_uint256_t(
          GET_ND_UINT(157, 256, "RefundEscrow::_deposits::_1")));
      (((contract_3)->user___deposits).data_2) = (Init_sol_uint256_t(
          GET_ND_UINT(158, 256, "RefundEscrow::_deposits::_2")));
      (((contract_3)->user___deposits).data_3) = (Init_sol_uint256_t(
          GET_ND_UINT(159, 256, "RefundEscrow::_deposits::_3")));
      (((contract_3)->user___deposits).data_4) = (Init_sol_uint256_t(
          GET_ND_UINT(160, 256, "RefundEscrow::_deposits::_4")));
      (((contract_3)->user___deposits).data_5) = (Init_sol_uint256_t(
          GET_ND_UINT(161, 256, "RefundEscrow::_deposits::_5")));
      (((contract_3)->user___deposits).data_6) = (Init_sol_uint256_t(
          GET_ND_UINT(162, 256, "RefundEscrow::_deposits::_6")));
      (((contract_3)->user___deposits).data_7) = (Init_sol_uint256_t(
          GET_ND_UINT(163, 256, "RefundEscrow::_deposits::_7")));
    }
    if (GET_ND_RANGE(166, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(164, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(165, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(167, 0, 43, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling goal() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(1, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      RefundableCrowdsale_Method_For_SampleCrowdsale_goal(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling claimRefund(refundee) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(2, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_refundee =
          Init_sol_address_t(GET_ND_RANGE(3, 0, 8, "refundee"));
      RefundableCrowdsale_Method_For_SampleCrowdsale_claimRefund(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_refundee);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling goalReached() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(4, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      RefundableCrowdsale_Method_For_SampleCrowdsale_goalReached(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling finalized() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(5, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      FinalizableCrowdsale_Method_For_SampleCrowdsale_finalized(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling finalize() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(6, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      FinalizableCrowdsale_Method_For_SampleCrowdsale_finalize(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling openingTime() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(7, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      TimedCrowdsale_Method_For_SampleCrowdsale_openingTime(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling closingTime() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(8, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      TimedCrowdsale_Method_For_SampleCrowdsale_closingTime(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling isOpen() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(9, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      TimedCrowdsale_Method_For_SampleCrowdsale_isOpen(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling hasClosed() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(10, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      TimedCrowdsale_Method_For_SampleCrowdsale_hasClosed(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling cap() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(11, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      CappedCrowdsale_Method_For_SampleCrowdsale_cap(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling capReached() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(12, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      CappedCrowdsale_Method_For_SampleCrowdsale_capReached(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling token() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(13, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Crowdsale_Method_For_SampleCrowdsale_token(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log("[Calling wallet() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(14, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Crowdsale_Method_For_SampleCrowdsale_wallet(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log("[Calling rate() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(15, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Crowdsale_Method_For_SampleCrowdsale_rate(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log("[Calling weiRaised() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(16, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Crowdsale_Method_For_SampleCrowdsale_weiRaised(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 15: {
      smartace_log("[Calling buyTokens(beneficiary) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(17, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(18, 256, "value"));
      sol_address_t arg_beneficiary =
          Init_sol_address_t(GET_ND_RANGE(19, 0, 8, "beneficiary"));
      Crowdsale_Method_For_SampleCrowdsale_buyTokens(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg_beneficiary);
      smartace_log("[Call successful]");
      break;
    }
    case 16: {
      smartace_log("[Calling () on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(20, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(21, 256, "value"));
      Crowdsale_Fallback_For_SampleCrowdsale(&(contract_1), sender, value,
                                             blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 17: {
      smartace_log("[Calling name() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(22, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_SampleCrowdsaleToken_name(
          contract_2, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 18: {
      smartace_log("[Calling symbol() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(23, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_SampleCrowdsaleToken_symbol(
          contract_2, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 19: {
      smartace_log("[Calling decimals() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(24, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_SampleCrowdsaleToken_decimals(
          contract_2, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 20: {
      smartace_log("[Calling mint(to, value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(25, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(26, 0, 8, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(27, 256, "value"));
      ERC20Mintable_Method_For_SampleCrowdsaleToken_mint(
          contract_2, sender, value, blocknum, timestamp, paid, sender, arg_to,
          arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 21: {
      smartace_log("[Calling isMinter(account) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(28, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_account =
          Init_sol_address_t(GET_ND_RANGE(29, 0, 8, "account"));
      MinterRole_Method_For_SampleCrowdsaleToken_isMinter(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg_account);
      smartace_log("[Call successful]");
      break;
    }
    case 22: {
      smartace_log("[Calling addMinter(account) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(30, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_account =
          Init_sol_address_t(GET_ND_RANGE(31, 0, 8, "account"));
      MinterRole_Method_For_SampleCrowdsaleToken_addMinter(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg_account);
      smartace_log("[Call successful]");
      break;
    }
    case 23: {
      smartace_log("[Calling renounceMinter() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(32, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MinterRole_Method_For_SampleCrowdsaleToken_renounceMinter(
          contract_2, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 24: {
      smartace_log("[Calling totalSupply() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(33, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20_Method_For_SampleCrowdsaleToken_totalSupply(
          contract_2, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 25: {
      smartace_log("[Calling balanceOf(owner) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(34, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(35, 0, 8, "owner"));
      ERC20_Method_For_SampleCrowdsaleToken_balanceOf(contract_2, sender, value,
                                                      blocknum, timestamp, paid,
                                                      sender, arg_owner);
      smartace_log("[Call successful]");
      break;
    }
    case 26: {
      smartace_log("[Calling allowance(owner, spender) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(36, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(37, 0, 8, "owner"));
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(38, 0, 8, "spender"));
      ERC20_Method_For_SampleCrowdsaleToken_allowance(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg_owner, arg_spender);
      smartace_log("[Call successful]");
      break;
    }
    case 27: {
      smartace_log("[Calling transfer(to, value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(39, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(40, 0, 8, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(41, 256, "value"));
      ERC20_Method_For_SampleCrowdsaleToken_transfer(contract_2, sender, value,
                                                     blocknum, timestamp, paid,
                                                     sender, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 28: {
      smartace_log("[Calling approve(spender, value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(42, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(43, 0, 8, "spender"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(44, 256, "value"));
      ERC20_Method_For_SampleCrowdsaleToken_approve(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg_spender, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 29: {
      smartace_log("[Calling transferFrom(from, to, value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(45, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_from =
          Init_sol_address_t(GET_ND_RANGE(46, 0, 8, "from"));
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(47, 0, 8, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(48, 256, "value"));
      ERC20_Method_For_SampleCrowdsaleToken_transferFrom(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg_from, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 30: {
      smartace_log(
          "[Calling increaseAllowance(spender, addedValue) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(49, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(50, 0, 8, "spender"));
      sol_uint256_t arg_addedValue =
          Init_sol_uint256_t(GET_ND_UINT(51, 256, "addedValue"));
      ERC20_Method_For_SampleCrowdsaleToken_increaseAllowance(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg_spender, arg_addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 31: {
      smartace_log("[Calling decreaseAllowance(spender, subtractedValue) on "
                   "contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(52, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(53, 0, 8, "spender"));
      sol_uint256_t arg_subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(54, 256, "subtractedValue"));
      ERC20_Method_For_SampleCrowdsaleToken_decreaseAllowance(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg_spender, arg_subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 32: {
      smartace_log("[Calling state() on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(55, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      RefundEscrow_Method_state(contract_3, sender, value, blocknum, timestamp,
                                paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 33: {
      smartace_log("[Calling beneficiary() on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(56, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      RefundEscrow_Method_beneficiary(contract_3, sender, value, blocknum,
                                      timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 34: {
      smartace_log("[Calling deposit(refundee) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(57, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(58, 256, "value"));
      sol_address_t arg_refundee =
          Init_sol_address_t(GET_ND_RANGE(59, 0, 8, "refundee"));
      RefundEscrow_Method_deposit(contract_3, sender, value, blocknum,
                                  timestamp, paid, sender, arg_refundee);
      smartace_log("[Call successful]");
      sol_assert(contract_3->user___state.v == 0, "Property.");
      break;
    }
    case 35: {
      smartace_log("[Calling close() on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(60, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      RefundEscrow_Method_close(contract_3, sender, value, blocknum, timestamp,
                                paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 36: {
      smartace_log("[Calling enableRefunds() on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(61, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      RefundEscrow_Method_enableRefunds(contract_3, sender, value, blocknum,
                                        timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 37: {
      smartace_log("[Calling beneficiaryWithdraw() on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(62, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      RefundEscrow_Method_beneficiaryWithdraw(
          contract_3, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 38: {
      smartace_log("[Calling withdrawalAllowed(0) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(63, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t placeholder_0;
      RefundEscrow_Method_withdrawalAllowed(contract_3, sender, value, blocknum,
                                            timestamp, paid, sender,
                                            placeholder_0);
      smartace_log("[Call successful]");
      break;
    }
    case 39: {
      smartace_log("[Calling withdraw(payee) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(64, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_payee =
          Init_sol_address_t(GET_ND_RANGE(65, 0, 8, "payee"));
      ConditionalEscrow_Method_For_RefundEscrow_withdraw(
          contract_3, sender, value, blocknum, timestamp, paid, sender,
          arg_payee);
      smartace_log("[Call successful]");
      break;
    }
    case 40: {
      smartace_log("[Calling depositsOf(payee) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(66, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_payee =
          Init_sol_address_t(GET_ND_RANGE(67, 0, 8, "payee"));
      Escrow_Method_For_RefundEscrow_depositsOf(contract_3, sender, value,
                                                blocknum, timestamp, paid,
                                                sender, arg_payee);
      smartace_log("[Call successful]");
      break;
    }
    case 41: {
      smartace_log("[Calling primary() on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(68, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      Secondary_Method_For_RefundEscrow_primary(
          contract_3, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 42: {
      smartace_log("[Calling transferPrimary(recipient) on contract_3]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(69, 4, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_recipient =
          Init_sol_address_t(GET_ND_RANGE(70, 0, 8, "recipient"));
      Secondary_Method_For_RefundEscrow_transferPrimary(
          contract_3, sender, value, blocknum, timestamp, paid, sender,
          arg_recipient);
      smartace_log("[Call successful]");
      break;
    }
    default: { sol_require(0, "Model failure, next_call out of bounds."); }
    }
  }
}
