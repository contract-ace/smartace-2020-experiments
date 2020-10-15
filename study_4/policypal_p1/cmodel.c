#include "cmodel.h"
sol_raw_uint160_t g_literal_address_0;
sol_uint256_t sol_pay(sol_uint256_t *bal, sol_uint256_t amt) {
  sol_require(((bal)->v) >= ((amt).v), "Insufficient funds to call.");
  ((bal)->v) -= ((amt).v);
  return amt;
}
uint8_t sol_send(sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt) {
  if (((bal)->v) < ((amt).v))
    return 0;
  if (((dst).v) == (0)) {
    return 0;
  }
  if (((dst).v) == (1)) {
    sol_assert(0, "Fallback not allowed in.");
  }
  ((bal)->v) -= ((amt).v);
  return GET_ND_BYTE(0, "Return value for send/transfer.");
}
void sol_transfer(sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt) {
  sol_require(sol_send(bal, dst, amt), "Transfer failed.");
}
struct Map_2 {
  sol_uint256_t sum;
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
struct Map_1 {
  sol_uint256_t sum;
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
  sol_uint256_t data_6;
  sol_uint256_t data_7;
};
struct PolicyPalNetworkToken {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_address_t user_tokenSaleContract;
  sol_bool_t user_isTokenTransferable;
  sol_address_t user_owner;
  struct Map_2 user_allowed;
  struct Map_1 user_balances;
  sol_uint256_t user_totalSupply__;
};
struct Map_3 {
  sol_uint256_t sum;
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
  sol_uint256_t data_6;
  sol_uint256_t data_7;
};
struct Map_4 {
  sol_bool_t sum;
  sol_bool_t data_0;
  sol_bool_t data_1;
  sol_bool_t data_2;
  sol_bool_t data_3;
  sol_bool_t data_4;
  sol_bool_t data_5;
  sol_bool_t data_6;
  sol_bool_t data_7;
};
struct PolicyPalNetworkCrowdsale {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_address_t user_multiSigWallet;
  struct PolicyPalNetworkToken user_token;
  sol_uint256_t user_raisedWei;
  sol_bool_t user_haltSale;
  sol_uint256_t user_rate;
  struct Map_3 user_participated;
  struct Map_4 user_whitelistAddresses;
  sol_address_t user_admin;
  sol_uint256_t user_saleStartTime;
  sol_uint256_t user_saleEndTime;
  sol_uint256_t user_increaseMaxContribTime;
  sol_uint256_t user_minContribution;
  sol_uint256_t user_maxContribution;
};
sol_uint256_t SafeMath_Method_mul(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_div(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
struct Map_3 ZeroInit_Map_3(void);
struct Map_3 ND_Map_3(void);
sol_uint256_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0);
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_uint256_t dat);
void Set_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_uint256_t dat);
struct Map_4 ZeroInit_Map_4(void);
struct Map_4 ND_Map_4(void);
sol_bool_t Read_Map_4(struct Map_4 *arr, sol_address_t key_0);
void Write_Map_4(struct Map_4 *arr, sol_address_t key_0, sol_bool_t dat);
void Set_Map_4(struct Map_4 *arr, sol_address_t key_0, sol_bool_t dat);
void PolicyPalNetworkCrowdsale_Fallback(struct PolicyPalNetworkCrowdsale *self,
                                        sol_address_t sender,
                                        sol_uint256_t value,
                                        sol_uint256_t blocknum,
                                        sol_uint256_t timestamp,
                                        sol_bool_t paid, sol_address_t origin);
sol_uint256_t
CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_eligibleAmountCheck(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_address_t func_user___contributor, sol_uint256_t func_user___amount);
void PolicyPalNetworkCrowdsale_Method_sendETHToMultiSig(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_uint256_t func_user___value);
struct Map_2 ZeroInit_Map_2(void);
struct Map_2 ND_Map_2(void);
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1);
void Write_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
                 sol_uint256_t dat);
void Set_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
               sol_uint256_t dat);
struct Map_1 ZeroInit_Map_1(void);
struct Map_1 ND_Map_1(void);
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0);
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
void Set_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
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
sol_uint256_t SafeMath_Method_div(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) / ((func_user_b).v));
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
  ((tmp).sum) = (Init_sol_uint256_t(0));
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
struct Map_3 ND_Map_3(void) {
  struct Map_3 tmp;
  ((tmp).sum) = (Init_sol_uint256_t(GET_ND_UINT(1, 256, "Map_3:model_sum")));
  ((tmp).data_0) = (Init_sol_uint256_t(GET_ND_UINT(2, 256, "Map_3:data_0")));
  ((tmp).data_1) = (Init_sol_uint256_t(GET_ND_UINT(3, 256, "Map_3:data_1")));
  ((tmp).data_2) = (Init_sol_uint256_t(GET_ND_UINT(4, 256, "Map_3:data_2")));
  ((tmp).data_3) = (Init_sol_uint256_t(GET_ND_UINT(5, 256, "Map_3:data_3")));
  ((tmp).data_4) = (Init_sol_uint256_t(GET_ND_UINT(6, 256, "Map_3:data_4")));
  ((tmp).data_5) = (Init_sol_uint256_t(GET_ND_UINT(7, 256, "Map_3:data_5")));
  ((tmp).data_6) = (Init_sol_uint256_t(GET_ND_UINT(8, 256, "Map_3:data_6")));
  ((tmp).data_7) = (Init_sol_uint256_t(GET_ND_UINT(9, 256, "Map_3:data_7")));
  return tmp;
}
sol_uint256_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0) {
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
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_uint256_t dat) {
  {
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_7).v);
      ((arr)->data_7) = (dat);
    } else if ((6) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_6).v);
      ((arr)->data_6) = (dat);
    } else if ((5) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_5).v);
      ((arr)->data_5) = (dat);
    } else if ((4) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_4).v);
      ((arr)->data_4) = (dat);
    } else if ((3) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_3).v);
      ((arr)->data_3) = (dat);
    } else if ((2) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_2).v);
      ((arr)->data_2) = (dat);
    } else if ((1) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_1).v);
      ((arr)->data_1) = (dat);
    } else if ((0) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_0).v);
      ((arr)->data_0) = (dat);
    }
  }
  (((arr)->sum).v) += ((dat).v);
}
void Set_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_uint256_t dat) {
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
struct Map_4 ZeroInit_Map_4(void) {
  struct Map_4 tmp;
  ((tmp).sum) = (Init_sol_bool_t(0));
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
struct Map_4 ND_Map_4(void) {
  struct Map_4 tmp;
  ((tmp).sum) = (Init_sol_bool_t(GET_ND_RANGE(10, 0, 2, "Map_4:model_sum")));
  ((tmp).data_0) = (Init_sol_bool_t(GET_ND_RANGE(11, 0, 2, "Map_4:data_0")));
  ((tmp).data_1) = (Init_sol_bool_t(GET_ND_RANGE(12, 0, 2, "Map_4:data_1")));
  ((tmp).data_2) = (Init_sol_bool_t(GET_ND_RANGE(13, 0, 2, "Map_4:data_2")));
  ((tmp).data_3) = (Init_sol_bool_t(GET_ND_RANGE(14, 0, 2, "Map_4:data_3")));
  ((tmp).data_4) = (Init_sol_bool_t(GET_ND_RANGE(15, 0, 2, "Map_4:data_4")));
  ((tmp).data_5) = (Init_sol_bool_t(GET_ND_RANGE(16, 0, 2, "Map_4:data_5")));
  ((tmp).data_6) = (Init_sol_bool_t(GET_ND_RANGE(17, 0, 2, "Map_4:data_6")));
  ((tmp).data_7) = (Init_sol_bool_t(GET_ND_RANGE(18, 0, 2, "Map_4:data_7")));
  return tmp;
}
sol_bool_t Read_Map_4(struct Map_4 *arr, sol_address_t key_0) {
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
void Write_Map_4(struct Map_4 *arr, sol_address_t key_0, sol_bool_t dat) {
  {
    sol_assert((8) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((7) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_7).v);
      ((arr)->data_7) = (dat);
    } else if ((6) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_6).v);
      ((arr)->data_6) = (dat);
    } else if ((5) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_5).v);
      ((arr)->data_5) = (dat);
    } else if ((4) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_4).v);
      ((arr)->data_4) = (dat);
    } else if ((3) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_3).v);
      ((arr)->data_3) = (dat);
    } else if ((2) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_2).v);
      ((arr)->data_2) = (dat);
    } else if ((1) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_1).v);
      ((arr)->data_1) = (dat);
    } else if ((0) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_0).v);
      ((arr)->data_0) = (dat);
    }
  }
  (((arr)->sum).v) += ((dat).v);
}
void Set_Map_4(struct Map_4 *arr, sol_address_t key_0, sol_bool_t dat) {
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
void PolicyPalNetworkCrowdsale_Constructor_1(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___admin,
    sol_address_t func_user___multiSigWallet,
    sol_uint256_t func_user___totalTokenSupply,
    sol_uint256_t func_user___premintedTokenSupply,
    sol_uint256_t func_user___presaleTokenSupply,
    sol_uint256_t func_user___saleStartTime,
    sol_uint256_t func_user___saleEndTime,
    sol_uint256_t func_user___increaseMaxContribTime,
    sol_uint256_t func_user___rate, sol_uint256_t func_user___minContribution,
    sol_uint256_t func_user___maxContribution) {
  sol_require(((func_user___totalTokenSupply).v) > (0), 0);
  sol_require(((func_user___premintedTokenSupply).v) > (0), 0);
  sol_require(((func_user___presaleTokenSupply).v) > (0), 0);
  sol_require(((func_user___rate).v) > (0), 0);
  sol_require(((func_user___premintedTokenSupply).v) <
                  ((func_user___totalTokenSupply).v),
              0);
  sol_require(((func_user___presaleTokenSupply).v) <
                  ((func_user___totalTokenSupply).v),
              0);
  ((self->user_multiSigWallet).v) = ((func_user___multiSigWallet).v);
  ((self->user_rate).v) = ((func_user___rate).v);
  Init_PolicyPalNetworkToken(
      &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
      blocknum, timestamp, Init_sol_bool_t(1), origin,
      Init_sol_uint256_t((func_user___totalTokenSupply).v),
      Init_sol_address_t((func_user___admin).v));
  (PolicyPalNetworkToken_Method_transfer(
       &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
       blocknum, timestamp, Init_sol_bool_t(1), origin,
       Init_sol_address_t((self->user_multiSigWallet).v),
       Init_sol_uint256_t((func_user___premintedTokenSupply).v)))
      .v;
  (PolicyPalNetworkToken_Method_transfer(
       &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
       blocknum, timestamp, Init_sol_bool_t(1), origin,
       Init_sol_address_t((func_user___admin).v),
       Init_sol_uint256_t((func_user___presaleTokenSupply).v)))
      .v;
}
void PolicyPalNetworkCrowdsale_Constructor(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___admin,
    sol_address_t func_model___multiSigWallet,
    sol_uint256_t func_model___totalTokenSupply,
    sol_uint256_t func_model___premintedTokenSupply,
    sol_uint256_t func_model___presaleTokenSupply,
    sol_uint256_t func_model___saleStartTime,
    sol_uint256_t func_model___saleEndTime,
    sol_uint256_t func_model___increaseMaxContribTime,
    sol_uint256_t func_model___rate, sol_uint256_t func_model___minContribution,
    sol_uint256_t func_model___maxContribution) {
  sol_address_t func_user___addr =
      Init_sol_address_t((func_model___multiSigWallet).v);
  sol_require(((func_user___addr).v) != (((int)(g_literal_address_0))), 0);
  sol_require(((func_user___addr).v) != (((self)->model_address).v), 0);
  PolicyPalNetworkCrowdsale_Constructor_1(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___admin, func_model___multiSigWallet,
      func_model___totalTokenSupply, func_model___premintedTokenSupply,
      func_model___presaleTokenSupply, func_model___saleStartTime,
      func_model___saleEndTime, func_model___increaseMaxContribTime,
      func_model___rate, func_model___minContribution,
      func_model___maxContribution);
}
void CrowdsaleAuthorizer_Constructor_1_For_PolicyPalNetworkCrowdsale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___admin,
    sol_uint256_t func_user___saleStartTime,
    sol_uint256_t func_user___saleEndTime,
    sol_uint256_t func_user___increaseMaxContribTime,
    sol_uint256_t func_user___minContribution,
    sol_uint256_t func_user___maxContribution) {
  sol_require(((func_user___saleStartTime).v) > ((timestamp).v), 0);
  sol_require(((func_user___saleEndTime).v) > ((timestamp).v), 0);
  sol_require(((func_user___increaseMaxContribTime).v) > ((timestamp).v), 0);
  sol_require(((func_user___saleStartTime).v) < ((func_user___saleEndTime).v),
              0);
  sol_require(((func_user___increaseMaxContribTime).v) >
                  ((func_user___saleStartTime).v),
              0);
  sol_require(((func_user___maxContribution).v) > (0), 0);
  sol_require(
      ((func_user___minContribution).v) < ((func_user___maxContribution).v), 0);
  ((self->user_admin).v) = ((func_user___admin).v);
  ((self->user_saleStartTime).v) = ((func_user___saleStartTime).v);
  ((self->user_saleEndTime).v) = ((func_user___saleEndTime).v);
  ((self->user_increaseMaxContribTime).v) =
      ((func_user___increaseMaxContribTime).v);
  ((self->user_minContribution).v) = ((func_user___minContribution).v);
  ((self->user_maxContribution).v) = ((func_user___maxContribution).v);
}
void CrowdsaleAuthorizer_Constructor_For_PolicyPalNetworkCrowdsale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___admin,
    sol_uint256_t func_model___saleStartTime,
    sol_uint256_t func_model___saleEndTime,
    sol_uint256_t func_model___increaseMaxContribTime,
    sol_uint256_t func_model___minContribution,
    sol_uint256_t func_model___maxContribution) {
  sol_address_t func_user___addr = Init_sol_address_t((func_model___admin).v);
  sol_require(((func_user___addr).v) != (((int)(g_literal_address_0))), 0);
  sol_require(((func_user___addr).v) != (((self)->model_address).v), 0);
  CrowdsaleAuthorizer_Constructor_1_For_PolicyPalNetworkCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___admin, func_model___saleStartTime, func_model___saleEndTime,
      func_model___increaseMaxContribTime, func_model___minContribution,
      func_model___maxContribution);
}
void Init_CrowdsaleAuthorizer_For_PolicyPalNetworkCrowdsale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t user___admin,
    sol_uint256_t user___saleStartTime, sol_uint256_t user___saleEndTime,
    sol_uint256_t user___increaseMaxContribTime,
    sol_uint256_t user___minContribution,
    sol_uint256_t user___maxContribution) {
  ((self)->user_participated) = (ZeroInit_Map_3());
  ((self)->user_whitelistAddresses) = (ZeroInit_Map_4());
  ((self)->user_admin) = (Init_sol_address_t(0));
  ((self)->user_saleStartTime) = (Init_sol_uint256_t(0));
  ((self)->user_saleEndTime) = (Init_sol_uint256_t(0));
  ((self)->user_increaseMaxContribTime) = (Init_sol_uint256_t(0));
  ((self)->user_minContribution) = (Init_sol_uint256_t(0));
  ((self)->user_maxContribution) = (Init_sol_uint256_t(0));
  CrowdsaleAuthorizer_Constructor_For_PolicyPalNetworkCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      user___admin, user___saleStartTime, user___saleEndTime,
      user___increaseMaxContribTime, user___minContribution,
      user___maxContribution);
}
void Init_PolicyPalNetworkCrowdsale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t user___admin,
    sol_address_t user___multiSigWallet, sol_uint256_t user___totalTokenSupply,
    sol_uint256_t user___premintedTokenSupply,
    sol_uint256_t user___presaleTokenSupply, sol_uint256_t user___saleStartTime,
    sol_uint256_t user___saleEndTime,
    sol_uint256_t user___increaseMaxContribTime, sol_uint256_t user___rate,
    sol_uint256_t user___minContribution,
    sol_uint256_t user___maxContribution) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_CrowdsaleAuthorizer_For_PolicyPalNetworkCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((user___admin).v),
      Init_sol_uint256_t((user___saleStartTime).v),
      Init_sol_uint256_t((user___saleEndTime).v),
      Init_sol_uint256_t((user___increaseMaxContribTime).v),
      Init_sol_uint256_t((user___minContribution).v),
      Init_sol_uint256_t((user___maxContribution).v));
  ((self)->user_multiSigWallet) = (Init_sol_address_t(0));
  ((self)->user_raisedWei) = (Init_sol_uint256_t(0));
  ((self)->user_haltSale) = (Init_sol_bool_t(0));
  ((self)->user_rate) = (Init_sol_uint256_t(0));
  PolicyPalNetworkCrowdsale_Constructor(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      user___admin, user___multiSigWallet, user___totalTokenSupply,
      user___premintedTokenSupply, user___presaleTokenSupply,
      user___saleStartTime, user___saleEndTime, user___increaseMaxContribTime,
      user___rate, user___minContribution, user___maxContribution);
}
void ND_PolicyPalNetworkCrowdsale(struct PolicyPalNetworkCrowdsale *self) {
  ((self)->model_balance) = (Init_sol_uint256_t(
      GET_ND_UINT(19, 256, "PolicyPalNetworkCrowdsale:model_balance")));
  ((self)->user_multiSigWallet) = (Init_sol_address_t(
      GET_ND_RANGE(20, 0, 8, "PolicyPalNetworkCrowdsale:multiSigWallet")));
  ((self)->user_raisedWei) = (Init_sol_uint256_t(
      GET_ND_UINT(21, 256, "PolicyPalNetworkCrowdsale:raisedWei")));
  ((self)->user_haltSale) = (Init_sol_bool_t(
      GET_ND_RANGE(22, 0, 2, "PolicyPalNetworkCrowdsale:haltSale")));
  ((self)->user_rate) = (Init_sol_uint256_t(
      GET_ND_UINT(23, 256, "PolicyPalNetworkCrowdsale:rate")));
  ((self)->user_participated) = (ND_Map_3());
  ((self)->user_whitelistAddresses) = (ND_Map_4());
  ((self)->user_admin) = (Init_sol_address_t(
      GET_ND_RANGE(24, 0, 8, "PolicyPalNetworkCrowdsale:admin")));
  ((self)->user_saleStartTime) = (Init_sol_uint256_t(
      GET_ND_UINT(25, 256, "PolicyPalNetworkCrowdsale:saleStartTime")));
  ((self)->user_saleEndTime) = (Init_sol_uint256_t(
      GET_ND_UINT(26, 256, "PolicyPalNetworkCrowdsale:saleEndTime")));
  ((self)->user_increaseMaxContribTime) = (Init_sol_uint256_t(GET_ND_UINT(
      27, 256, "PolicyPalNetworkCrowdsale:increaseMaxContribTime")));
  ((self)->user_minContribution) = (Init_sol_uint256_t(
      GET_ND_UINT(28, 256, "PolicyPalNetworkCrowdsale:minContribution")));
  ((self)->user_maxContribution) = (Init_sol_uint256_t(
      GET_ND_UINT(29, 256, "PolicyPalNetworkCrowdsale:maxContribution")));
}
void PolicyPalNetworkCrowdsale_Fallback(struct PolicyPalNetworkCrowdsale *self,
                                        sol_address_t sender,
                                        sol_uint256_t value,
                                        sol_uint256_t blocknum,
                                        sol_uint256_t timestamp,
                                        sol_bool_t paid, sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  (PolicyPalNetworkCrowdsale_Method_buy(self, sender, value, blocknum,
                                        timestamp, Init_sol_bool_t(0), origin,
                                        Init_sol_address_t((sender).v)))
      .v;
}
void PolicyPalNetworkCrowdsale_Method_1_setHaltSale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_bool_t func_user___halt) {
  ((self->user_haltSale).v) = ((func_user___halt).v);
}
void PolicyPalNetworkCrowdsale_Method_setHaltSale(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_bool_t func_model___halt) {
  sol_require(((sender).v) == ((self->user_admin).v), 0);
  PolicyPalNetworkCrowdsale_Method_1_setHaltSale(self, sender, value, blocknum,
                                                 timestamp, Init_sol_bool_t(0),
                                                 origin, func_model___halt);
}
sol_uint256_t PolicyPalNetworkCrowdsale_Method_2_buy(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_address_t func_user___recipient) {
  sol_uint256_t func_user_weiContributionAllowed = Init_sol_uint256_t(
      (CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_eligibleAmountCheck(
           self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
           Init_sol_address_t((func_user___recipient).v),
           Init_sol_uint256_t((value).v)))
          .v);
  sol_require(((func_user_weiContributionAllowed).v) > (0), 0);
  sol_uint256_t func_user_tokensRemaining = Init_sol_uint256_t(
      (BasicToken_Method_For_PolicyPalNetworkToken_balanceOf(
           &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
           blocknum, timestamp, Init_sol_bool_t(1), origin,
           Init_sol_address_t(((self)->model_address).v)))
          .v);
  sol_require(((func_user_tokensRemaining).v) > (0), 0);
  sol_uint256_t func_user_receivedTokens = Init_sol_uint256_t(
      (SafeMath_Method_mul(
           Init_sol_uint256_t((func_user_weiContributionAllowed).v),
           Init_sol_uint256_t((self->user_rate).v)))
          .v);
  if (((func_user_receivedTokens).v) > ((func_user_tokensRemaining).v)) {
    ((func_user_receivedTokens).v) = ((func_user_tokensRemaining).v);
    ((func_user_weiContributionAllowed).v) =
        ((SafeMath_Method_div(Init_sol_uint256_t((func_user_tokensRemaining).v),
                              Init_sol_uint256_t((self->user_rate).v)))
             .v);
  }
  sol_assert(
      (PolicyPalNetworkToken_Method_transfer(
           &(self->user_token), (self)->model_address, Init_sol_uint256_t(0),
           blocknum, timestamp, Init_sol_bool_t(1), origin,
           Init_sol_address_t((func_user___recipient).v),
           Init_sol_uint256_t((func_user_receivedTokens).v)))
          .v,
      0);
  PolicyPalNetworkCrowdsale_Method_sendETHToMultiSig(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t((func_user_weiContributionAllowed).v));
  ((self->user_raisedWei).v) =
      ((SafeMath_Method_add(
            Init_sol_uint256_t((self->user_raisedWei).v),
            Init_sol_uint256_t((func_user_weiContributionAllowed).v)))
           .v);
  if (((value).v) > ((func_user_weiContributionAllowed).v)) {
    sol_transfer(
        &((self)->model_balance), Init_sol_address_t((sender).v),
        Init_sol_uint256_t(
            (SafeMath_Method_sub(
                 Init_sol_uint256_t((value).v),
                 Init_sol_uint256_t((func_user_weiContributionAllowed).v)))
                .v));
  }
  sol_emit("Buy(_recipient, receivedTokens, weiContributionAllowed)");
  { return Init_sol_uint256_t((func_user_weiContributionAllowed).v); }
}
sol_uint256_t PolicyPalNetworkCrowdsale_Method_1_buy(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_address_t func_model___recipient) {
  sol_uint256_t func_model_rv;
  sol_address_t func_user___addr =
      Init_sol_address_t((func_model___recipient).v);
  sol_require(((func_user___addr).v) != (((int)(g_literal_address_0))), 0);
  sol_require(((func_user___addr).v) != (((self)->model_address).v), 0);
  (func_model_rv) = (PolicyPalNetworkCrowdsale_Method_2_buy(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___recipient));
  return func_model_rv;
}
sol_uint256_t PolicyPalNetworkCrowdsale_Method_buy(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_address_t func_model___recipient) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_uint256_t func_model_rv;
  sol_require(!((self->user_haltSale).v), 0);
  sol_require(
      (CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleStarted(
           self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
           origin))
          .v,
      0);
  sol_require(
      !((CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleEnded(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin))
            .v),
      0);
  (func_model_rv) = (PolicyPalNetworkCrowdsale_Method_1_buy(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___recipient));
  return func_model_rv;
}
void CrowdsaleAuthorizer_Method_1_For_PolicyPalNetworkCrowdsale_updateWhitelist(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___user,
    sol_bool_t func_user___allow) {
  Write_Map_4(&(self->user_whitelistAddresses),
              Init_sol_address_t((func_user___user).v),
              Init_sol_bool_t((func_user___allow).v));
  sol_emit("UpdateWhitelist(_user, _allow, now)");
}
void CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_updateWhitelist(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___user,
    sol_bool_t func_model___allow) {
  sol_require(((sender).v) == ((self->user_admin).v), 0);
  CrowdsaleAuthorizer_Method_1_For_PolicyPalNetworkCrowdsale_updateWhitelist(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___user, func_model___allow);
}
sol_uint256_t
CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_eligibleAmount(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_address_t func_user___contributor, sol_uint256_t func_user___amount) {
  if ((!((CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleStarted(
              self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
              origin))
             .v)) ||
      ((CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleEnded(
            self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
            origin))
           .v)) {
    {
      return Init_sol_uint256_t(0);
    }
  }
  if (((func_user___amount).v) < ((self->user_minContribution).v)) {
    {
      return Init_sol_uint256_t(0);
    }
  }
  sol_uint256_t func_user_userMaxContribution =
      Init_sol_uint256_t((self->user_maxContribution).v);
  if (((timestamp).v) >= ((self->user_increaseMaxContribTime).v)) {
    ((func_user_userMaxContribution).v) =
        ((SafeMath_Method_mul(
              Init_sol_uint256_t((self->user_maxContribution).v),
              Init_sol_uint256_t(10)))
             .v);
  }
  sol_uint256_t func_user_remainingCap = Init_sol_uint256_t(
      (SafeMath_Method_sub(
           Init_sol_uint256_t((func_user_userMaxContribution).v),
           Init_sol_uint256_t(
               (Read_Map_3(&(self->user_participated),
                           Init_sol_address_t((func_user___contributor).v)))
                   .v)))
          .v);
  {
    return Init_sol_uint256_t(
        (((func_user_remainingCap).v) > ((func_user___amount).v))
            ? ((func_user___amount).v)
            : ((func_user_remainingCap).v));
  }
}
sol_bool_t CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleStarted(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  { return Init_sol_bool_t(((timestamp).v) >= ((self->user_saleStartTime).v)); }
}
sol_bool_t CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleEnded(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  { return Init_sol_bool_t(((timestamp).v) > ((self->user_saleEndTime).v)); }
}
sol_uint256_t
CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_eligibleAmountCheck(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_address_t func_user___contributor, sol_uint256_t func_user___amount) {
  if (!((Read_Map_4(&(self->user_whitelistAddresses),
                    Init_sol_address_t((func_user___contributor).v)))
            .v)) {
    {
      return Init_sol_uint256_t(0);
    }
  }
  sol_uint256_t func_user_result = Init_sol_uint256_t(
      (CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_eligibleAmount(
           self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
           Init_sol_address_t((func_user___contributor).v),
           Init_sol_uint256_t((func_user___amount).v)))
          .v);
  Write_Map_3(
      &(self->user_participated),
      Init_sol_address_t((func_user___contributor).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_3(&(self->user_participated),
                               Init_sol_address_t((func_user___contributor).v)))
                       .v),
               Init_sol_uint256_t((func_user_result).v)))
              .v));
  { return Init_sol_uint256_t((func_user_result).v); }
}
void PolicyPalNetworkCrowdsale_Method_sendETHToMultiSig(
    struct PolicyPalNetworkCrowdsale *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_uint256_t func_user___value) {
  sol_transfer(&((self)->model_balance),
               Init_sol_address_t((self->user_multiSigWallet).v),
               Init_sol_uint256_t((func_user___value).v));
}
struct Map_2 ZeroInit_Map_2(void) {
  struct Map_2 tmp;
  ((tmp).sum) = (Init_sol_uint256_t(0));
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
struct Map_2 ND_Map_2(void) {
  struct Map_2 tmp;
  ((tmp).sum) = (Init_sol_uint256_t(GET_ND_UINT(30, 256, "Map_2:model_sum")));
  ((tmp).data_0_0) =
      (Init_sol_uint256_t(GET_ND_UINT(31, 256, "Map_2:data_0_0")));
  ((tmp).data_0_1) =
      (Init_sol_uint256_t(GET_ND_UINT(32, 256, "Map_2:data_0_1")));
  ((tmp).data_0_2) =
      (Init_sol_uint256_t(GET_ND_UINT(33, 256, "Map_2:data_0_2")));
  ((tmp).data_0_3) =
      (Init_sol_uint256_t(GET_ND_UINT(34, 256, "Map_2:data_0_3")));
  ((tmp).data_0_4) =
      (Init_sol_uint256_t(GET_ND_UINT(35, 256, "Map_2:data_0_4")));
  ((tmp).data_0_5) =
      (Init_sol_uint256_t(GET_ND_UINT(36, 256, "Map_2:data_0_5")));
  ((tmp).data_0_6) =
      (Init_sol_uint256_t(GET_ND_UINT(37, 256, "Map_2:data_0_6")));
  ((tmp).data_0_7) =
      (Init_sol_uint256_t(GET_ND_UINT(38, 256, "Map_2:data_0_7")));
  ((tmp).data_1_0) =
      (Init_sol_uint256_t(GET_ND_UINT(39, 256, "Map_2:data_1_0")));
  ((tmp).data_1_1) =
      (Init_sol_uint256_t(GET_ND_UINT(40, 256, "Map_2:data_1_1")));
  ((tmp).data_1_2) =
      (Init_sol_uint256_t(GET_ND_UINT(41, 256, "Map_2:data_1_2")));
  ((tmp).data_1_3) =
      (Init_sol_uint256_t(GET_ND_UINT(42, 256, "Map_2:data_1_3")));
  ((tmp).data_1_4) =
      (Init_sol_uint256_t(GET_ND_UINT(43, 256, "Map_2:data_1_4")));
  ((tmp).data_1_5) =
      (Init_sol_uint256_t(GET_ND_UINT(44, 256, "Map_2:data_1_5")));
  ((tmp).data_1_6) =
      (Init_sol_uint256_t(GET_ND_UINT(45, 256, "Map_2:data_1_6")));
  ((tmp).data_1_7) =
      (Init_sol_uint256_t(GET_ND_UINT(46, 256, "Map_2:data_1_7")));
  ((tmp).data_2_0) =
      (Init_sol_uint256_t(GET_ND_UINT(47, 256, "Map_2:data_2_0")));
  ((tmp).data_2_1) =
      (Init_sol_uint256_t(GET_ND_UINT(48, 256, "Map_2:data_2_1")));
  ((tmp).data_2_2) =
      (Init_sol_uint256_t(GET_ND_UINT(49, 256, "Map_2:data_2_2")));
  ((tmp).data_2_3) =
      (Init_sol_uint256_t(GET_ND_UINT(50, 256, "Map_2:data_2_3")));
  ((tmp).data_2_4) =
      (Init_sol_uint256_t(GET_ND_UINT(51, 256, "Map_2:data_2_4")));
  ((tmp).data_2_5) =
      (Init_sol_uint256_t(GET_ND_UINT(52, 256, "Map_2:data_2_5")));
  ((tmp).data_2_6) =
      (Init_sol_uint256_t(GET_ND_UINT(53, 256, "Map_2:data_2_6")));
  ((tmp).data_2_7) =
      (Init_sol_uint256_t(GET_ND_UINT(54, 256, "Map_2:data_2_7")));
  ((tmp).data_3_0) =
      (Init_sol_uint256_t(GET_ND_UINT(55, 256, "Map_2:data_3_0")));
  ((tmp).data_3_1) =
      (Init_sol_uint256_t(GET_ND_UINT(56, 256, "Map_2:data_3_1")));
  ((tmp).data_3_2) =
      (Init_sol_uint256_t(GET_ND_UINT(57, 256, "Map_2:data_3_2")));
  ((tmp).data_3_3) =
      (Init_sol_uint256_t(GET_ND_UINT(58, 256, "Map_2:data_3_3")));
  ((tmp).data_3_4) =
      (Init_sol_uint256_t(GET_ND_UINT(59, 256, "Map_2:data_3_4")));
  ((tmp).data_3_5) =
      (Init_sol_uint256_t(GET_ND_UINT(60, 256, "Map_2:data_3_5")));
  ((tmp).data_3_6) =
      (Init_sol_uint256_t(GET_ND_UINT(61, 256, "Map_2:data_3_6")));
  ((tmp).data_3_7) =
      (Init_sol_uint256_t(GET_ND_UINT(62, 256, "Map_2:data_3_7")));
  ((tmp).data_4_0) =
      (Init_sol_uint256_t(GET_ND_UINT(63, 256, "Map_2:data_4_0")));
  ((tmp).data_4_1) =
      (Init_sol_uint256_t(GET_ND_UINT(64, 256, "Map_2:data_4_1")));
  ((tmp).data_4_2) =
      (Init_sol_uint256_t(GET_ND_UINT(65, 256, "Map_2:data_4_2")));
  ((tmp).data_4_3) =
      (Init_sol_uint256_t(GET_ND_UINT(66, 256, "Map_2:data_4_3")));
  ((tmp).data_4_4) =
      (Init_sol_uint256_t(GET_ND_UINT(67, 256, "Map_2:data_4_4")));
  ((tmp).data_4_5) =
      (Init_sol_uint256_t(GET_ND_UINT(68, 256, "Map_2:data_4_5")));
  ((tmp).data_4_6) =
      (Init_sol_uint256_t(GET_ND_UINT(69, 256, "Map_2:data_4_6")));
  ((tmp).data_4_7) =
      (Init_sol_uint256_t(GET_ND_UINT(70, 256, "Map_2:data_4_7")));
  ((tmp).data_5_0) =
      (Init_sol_uint256_t(GET_ND_UINT(71, 256, "Map_2:data_5_0")));
  ((tmp).data_5_1) =
      (Init_sol_uint256_t(GET_ND_UINT(72, 256, "Map_2:data_5_1")));
  ((tmp).data_5_2) =
      (Init_sol_uint256_t(GET_ND_UINT(73, 256, "Map_2:data_5_2")));
  ((tmp).data_5_3) =
      (Init_sol_uint256_t(GET_ND_UINT(74, 256, "Map_2:data_5_3")));
  ((tmp).data_5_4) =
      (Init_sol_uint256_t(GET_ND_UINT(75, 256, "Map_2:data_5_4")));
  ((tmp).data_5_5) =
      (Init_sol_uint256_t(GET_ND_UINT(76, 256, "Map_2:data_5_5")));
  ((tmp).data_5_6) =
      (Init_sol_uint256_t(GET_ND_UINT(77, 256, "Map_2:data_5_6")));
  ((tmp).data_5_7) =
      (Init_sol_uint256_t(GET_ND_UINT(78, 256, "Map_2:data_5_7")));
  ((tmp).data_6_0) =
      (Init_sol_uint256_t(GET_ND_UINT(79, 256, "Map_2:data_6_0")));
  ((tmp).data_6_1) =
      (Init_sol_uint256_t(GET_ND_UINT(80, 256, "Map_2:data_6_1")));
  ((tmp).data_6_2) =
      (Init_sol_uint256_t(GET_ND_UINT(81, 256, "Map_2:data_6_2")));
  ((tmp).data_6_3) =
      (Init_sol_uint256_t(GET_ND_UINT(82, 256, "Map_2:data_6_3")));
  ((tmp).data_6_4) =
      (Init_sol_uint256_t(GET_ND_UINT(83, 256, "Map_2:data_6_4")));
  ((tmp).data_6_5) =
      (Init_sol_uint256_t(GET_ND_UINT(84, 256, "Map_2:data_6_5")));
  ((tmp).data_6_6) =
      (Init_sol_uint256_t(GET_ND_UINT(85, 256, "Map_2:data_6_6")));
  ((tmp).data_6_7) =
      (Init_sol_uint256_t(GET_ND_UINT(86, 256, "Map_2:data_6_7")));
  ((tmp).data_7_0) =
      (Init_sol_uint256_t(GET_ND_UINT(87, 256, "Map_2:data_7_0")));
  ((tmp).data_7_1) =
      (Init_sol_uint256_t(GET_ND_UINT(88, 256, "Map_2:data_7_1")));
  ((tmp).data_7_2) =
      (Init_sol_uint256_t(GET_ND_UINT(89, 256, "Map_2:data_7_2")));
  ((tmp).data_7_3) =
      (Init_sol_uint256_t(GET_ND_UINT(90, 256, "Map_2:data_7_3")));
  ((tmp).data_7_4) =
      (Init_sol_uint256_t(GET_ND_UINT(91, 256, "Map_2:data_7_4")));
  ((tmp).data_7_5) =
      (Init_sol_uint256_t(GET_ND_UINT(92, 256, "Map_2:data_7_5")));
  ((tmp).data_7_6) =
      (Init_sol_uint256_t(GET_ND_UINT(93, 256, "Map_2:data_7_6")));
  ((tmp).data_7_7) =
      (Init_sol_uint256_t(GET_ND_UINT(94, 256, "Map_2:data_7_7")));
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
        (((arr)->sum).v) -= (((arr)->data_7_7).v);
        ((arr)->data_7_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_6).v);
        ((arr)->data_7_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_5).v);
        ((arr)->data_7_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_4).v);
        ((arr)->data_7_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_3).v);
        ((arr)->data_7_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_2).v);
        ((arr)->data_7_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_1).v);
        ((arr)->data_7_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_7_0).v);
        ((arr)->data_7_0) = (dat);
      }
    } else if ((6) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_7).v);
        ((arr)->data_6_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_6).v);
        ((arr)->data_6_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_5).v);
        ((arr)->data_6_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_4).v);
        ((arr)->data_6_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_3).v);
        ((arr)->data_6_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_2).v);
        ((arr)->data_6_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_1).v);
        ((arr)->data_6_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_6_0).v);
        ((arr)->data_6_0) = (dat);
      }
    } else if ((5) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_7).v);
        ((arr)->data_5_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_6).v);
        ((arr)->data_5_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_5).v);
        ((arr)->data_5_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_4).v);
        ((arr)->data_5_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_3).v);
        ((arr)->data_5_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_2).v);
        ((arr)->data_5_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_1).v);
        ((arr)->data_5_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_5_0).v);
        ((arr)->data_5_0) = (dat);
      }
    } else if ((4) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_7).v);
        ((arr)->data_4_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_6).v);
        ((arr)->data_4_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_5).v);
        ((arr)->data_4_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_4).v);
        ((arr)->data_4_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_3).v);
        ((arr)->data_4_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_2).v);
        ((arr)->data_4_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_1).v);
        ((arr)->data_4_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_4_0).v);
        ((arr)->data_4_0) = (dat);
      }
    } else if ((3) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_7).v);
        ((arr)->data_3_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_6).v);
        ((arr)->data_3_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_5).v);
        ((arr)->data_3_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_4).v);
        ((arr)->data_3_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_3).v);
        ((arr)->data_3_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_2).v);
        ((arr)->data_3_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_1).v);
        ((arr)->data_3_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_3_0).v);
        ((arr)->data_3_0) = (dat);
      }
    } else if ((2) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_7).v);
        ((arr)->data_2_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_6).v);
        ((arr)->data_2_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_5).v);
        ((arr)->data_2_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_4).v);
        ((arr)->data_2_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_3).v);
        ((arr)->data_2_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_2).v);
        ((arr)->data_2_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_1).v);
        ((arr)->data_2_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_2_0).v);
        ((arr)->data_2_0) = (dat);
      }
    } else if ((1) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_7).v);
        ((arr)->data_1_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_6).v);
        ((arr)->data_1_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_5).v);
        ((arr)->data_1_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_4).v);
        ((arr)->data_1_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_3).v);
        ((arr)->data_1_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_2).v);
        ((arr)->data_1_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_1).v);
        ((arr)->data_1_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_1_0).v);
        ((arr)->data_1_0) = (dat);
      }
    } else if ((0) == ((key_0).v)) {
      if ((7) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_7).v);
        ((arr)->data_0_7) = (dat);
      } else if ((6) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_6).v);
        ((arr)->data_0_6) = (dat);
      } else if ((5) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_5).v);
        ((arr)->data_0_5) = (dat);
      } else if ((4) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_4).v);
        ((arr)->data_0_4) = (dat);
      } else if ((3) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_3).v);
        ((arr)->data_0_3) = (dat);
      } else if ((2) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_2).v);
        ((arr)->data_0_2) = (dat);
      } else if ((1) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_1).v);
        ((arr)->data_0_1) = (dat);
      } else if ((0) == ((key_1).v)) {
        (((arr)->sum).v) -= (((arr)->data_0_0).v);
        ((arr)->data_0_0) = (dat);
      }
    }
  }
  (((arr)->sum).v) += ((dat).v);
}
void Set_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
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
struct Map_1 ZeroInit_Map_1(void) {
  struct Map_1 tmp;
  ((tmp).sum) = (Init_sol_uint256_t(0));
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
struct Map_1 ND_Map_1(void) {
  struct Map_1 tmp;
  ((tmp).sum) = (Init_sol_uint256_t(GET_ND_UINT(95, 256, "Map_1:model_sum")));
  ((tmp).data_0) = (Init_sol_uint256_t(GET_ND_UINT(96, 256, "Map_1:data_0")));
  ((tmp).data_1) = (Init_sol_uint256_t(GET_ND_UINT(97, 256, "Map_1:data_1")));
  ((tmp).data_2) = (Init_sol_uint256_t(GET_ND_UINT(98, 256, "Map_1:data_2")));
  ((tmp).data_3) = (Init_sol_uint256_t(GET_ND_UINT(99, 256, "Map_1:data_3")));
  ((tmp).data_4) = (Init_sol_uint256_t(GET_ND_UINT(100, 256, "Map_1:data_4")));
  ((tmp).data_5) = (Init_sol_uint256_t(GET_ND_UINT(101, 256, "Map_1:data_5")));
  ((tmp).data_6) = (Init_sol_uint256_t(GET_ND_UINT(102, 256, "Map_1:data_6")));
  ((tmp).data_7) = (Init_sol_uint256_t(GET_ND_UINT(103, 256, "Map_1:data_7")));
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
      (((arr)->sum).v) -= (((arr)->data_7).v);
      ((arr)->data_7) = (dat);
    } else if ((6) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_6).v);
      ((arr)->data_6) = (dat);
    } else if ((5) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_5).v);
      ((arr)->data_5) = (dat);
    } else if ((4) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_4).v);
      ((arr)->data_4) = (dat);
    } else if ((3) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_3).v);
      ((arr)->data_3) = (dat);
    } else if ((2) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_2).v);
      ((arr)->data_2) = (dat);
    } else if ((1) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_1).v);
      ((arr)->data_1) = (dat);
    } else if ((0) == ((key_0).v)) {
      (((arr)->sum).v) -= (((arr)->data_0).v);
      ((arr)->data_0) = (dat);
    }
  }
  (((arr)->sum).v) += ((dat).v);
}
void Set_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat) {
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
void PolicyPalNetworkToken_Constructor_1(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_uint256_t func_user___tokenTotalAmount,
    sol_address_t func_user___adminAddr) {
  sol_require(((func_user___tokenTotalAmount).v) > (0), 0);
  ((self->user_totalSupply__).v) = ((func_user___tokenTotalAmount).v);
  Write_Map_1(&(self->user_balances), Init_sol_address_t((sender).v),
              Init_sol_uint256_t((func_user___tokenTotalAmount).v));
  sol_emit("Transfer(address(0x0), msg.sender, _tokenTotalAmount)");
  ((self->user_tokenSaleContract).v) = ((sender).v);
  Ownable_Method_For_PolicyPalNetworkToken_transferOwnership(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user___adminAddr).v));
}
void PolicyPalNetworkToken_Constructor(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin,
    sol_uint256_t func_model___tokenTotalAmount,
    sol_address_t func_model___adminAddr) {
  sol_address_t func_user___to = Init_sol_address_t((func_model___adminAddr).v);
  sol_require(((func_user___to).v) != (((int)(g_literal_address_0))), 0);
  sol_require(((func_user___to).v) != (((self)->model_address).v), 0);
  PolicyPalNetworkToken_Constructor_1(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___tokenTotalAmount, func_model___adminAddr);
}
void Init_ERC20Basic_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {}
void Init_ERC20_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  Init_ERC20Basic_For_PolicyPalNetworkToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Init_BasicToken_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  Init_ERC20Basic_For_PolicyPalNetworkToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  ((self)->user_balances) = (ZeroInit_Map_1());
  ((self)->user_totalSupply__) = (Init_sol_uint256_t(0));
}
void Init_StandardToken_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  Init_ERC20_For_PolicyPalNetworkToken(self, sender, value, blocknum, timestamp,
                                       Init_sol_bool_t(0), origin);
  Init_BasicToken_For_PolicyPalNetworkToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  ((self)->user_allowed) = (ZeroInit_Map_2());
}
void Init_BurnableToken_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  Init_BasicToken_For_PolicyPalNetworkToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Ownable_Constructor_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Ownable_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  ((self)->user_owner) = (Init_sol_address_t(0));
  Ownable_Constructor_For_PolicyPalNetworkToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Init_PolicyPalNetworkToken(struct PolicyPalNetworkToken *self,
                                sol_address_t sender, sol_uint256_t value,
                                sol_uint256_t blocknum, sol_uint256_t timestamp,
                                sol_bool_t paid, sol_address_t origin,
                                sol_uint256_t user___tokenTotalAmount,
                                sol_address_t user___adminAddr) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_StandardToken_For_PolicyPalNetworkToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  Init_BurnableToken_For_PolicyPalNetworkToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  Init_Ownable_For_PolicyPalNetworkToken(self, sender, value, blocknum,
                                         timestamp, Init_sol_bool_t(0), origin);
  ((self)->user_tokenSaleContract) = (Init_sol_address_t(0));
  ((self)->user_isTokenTransferable) = (Init_sol_bool_t(0));
  PolicyPalNetworkToken_Constructor(self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin,
                                    user___tokenTotalAmount, user___adminAddr);
}
void ND_PolicyPalNetworkToken(struct PolicyPalNetworkToken *self) {
  ((self)->model_balance) = (Init_sol_uint256_t(
      GET_ND_UINT(104, 256, "PolicyPalNetworkToken:model_balance")));
  ((self)->user_tokenSaleContract) = (Init_sol_address_t(
      GET_ND_RANGE(105, 0, 8, "PolicyPalNetworkToken:tokenSaleContract")));
  ((self)->user_isTokenTransferable) = (Init_sol_bool_t(
      GET_ND_RANGE(106, 0, 2, "PolicyPalNetworkToken:isTokenTransferable")));
  ((self)->user_owner) = (Init_sol_address_t(
      GET_ND_RANGE(107, 0, 8, "PolicyPalNetworkToken:owner")));
  ((self)->user_allowed) = (ND_Map_2());
  ((self)->user_balances) = (ND_Map_1());
  ((self)->user_totalSupply__) = (Init_sol_uint256_t(
      GET_ND_UINT(108, 256, "PolicyPalNetworkToken:totalSupply_")));
}
void PolicyPalNetworkToken_Method_1_toggleTransferable(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_bool_t func_user___toggle) {
  ((self->user_isTokenTransferable).v) = ((func_user___toggle).v);
}
void PolicyPalNetworkToken_Method_toggleTransferable(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_bool_t func_model___toggle) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  PolicyPalNetworkToken_Method_1_toggleTransferable(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___toggle);
}
sol_bool_t BasicToken_Method_For_PolicyPalNetworkToken_transfer(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___to,
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
sol_bool_t PolicyPalNetworkToken_Method_2_transfer(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (BasicToken_Method_For_PolicyPalNetworkToken_transfer(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PolicyPalNetworkToken_Method_1_transfer(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_address_t func_user___to = Init_sol_address_t((func_model___to).v);
  sol_require(((func_user___to).v) != (((int)(g_literal_address_0))), 0);
  sol_require(((func_user___to).v) != (((self)->model_address).v), 0);
  (func_model_rv) = (PolicyPalNetworkToken_Method_2_transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t PolicyPalNetworkToken_Method_transfer(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_require((((self->user_isTokenTransferable).v) ||
               (((sender).v) == ((self->user_owner).v))) ||
                  (((sender).v) == ((self->user_tokenSaleContract).v)),
              0);
  (func_model_rv) = (PolicyPalNetworkToken_Method_1_transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_PolicyPalNetworkToken_transferFrom(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___from,
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
sol_bool_t PolicyPalNetworkToken_Method_2_transferFrom(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_PolicyPalNetworkToken_transferFrom(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___from).v),
             Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PolicyPalNetworkToken_Method_1_transferFrom(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_address_t func_user___to = Init_sol_address_t((func_model___to).v);
  sol_require(((func_user___to).v) != (((int)(g_literal_address_0))), 0);
  sol_require(((func_user___to).v) != (((self)->model_address).v), 0);
  (func_model_rv) = (PolicyPalNetworkToken_Method_2_transferFrom(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___from, func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t PolicyPalNetworkToken_Method_transferFrom(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_require((((self->user_isTokenTransferable).v) ||
               (((sender).v) == ((self->user_owner).v))) ||
                  (((sender).v) == ((self->user_tokenSaleContract).v)),
              0);
  (func_model_rv) = (PolicyPalNetworkToken_Method_1_transferFrom(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___from, func_model___to, func_model___value));
  return func_model_rv;
}
void BurnableToken_Method_For_PolicyPalNetworkToken_burn(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_uint256_t func_user___value) {
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
void PolicyPalNetworkToken_Method_burn(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_uint256_t func_user___value) {
  BurnableToken_Method_For_PolicyPalNetworkToken_burn(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t((func_user___value).v));
  sol_emit("Transfer(msg.sender, address(0x0), _value)");
}
void Ownable_Method_1_For_PolicyPalNetworkToken_transferOwnership(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_newOwner) {
  sol_require(((func_user_newOwner).v) != (((int)(g_literal_address_0))), 0);
  sol_emit("OwnershipTransferred(owner, newOwner)");
  ((self->user_owner).v) = ((func_user_newOwner).v);
}
void Ownable_Method_For_PolicyPalNetworkToken_transferOwnership(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_model_newOwner) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Ownable_Method_1_For_PolicyPalNetworkToken_transferOwnership(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_newOwner);
}
sol_bool_t StandardToken_Method_For_PolicyPalNetworkToken_approve(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value) {
  Write_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
              Init_sol_address_t((func_user___spender).v),
              Init_sol_uint256_t((func_user___value).v));
  sol_emit("Approval(msg.sender, _spender, _value)");
  { return Init_sol_bool_t(1); }
}
sol_uint256_t StandardToken_Method_For_PolicyPalNetworkToken_allowance(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___owner,
    sol_address_t func_user___spender) {
  {
    return Init_sol_uint256_t(
        (Read_Map_2(&(self->user_allowed),
                    Init_sol_address_t((func_user___owner).v),
                    Init_sol_address_t((func_user___spender).v)))
            .v);
  }
}
sol_bool_t StandardToken_Method_For_PolicyPalNetworkToken_increaseApproval(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___spender,
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
sol_bool_t StandardToken_Method_For_PolicyPalNetworkToken_decreaseApproval(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___spender,
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
sol_uint256_t BasicToken_Method_For_PolicyPalNetworkToken_totalSupply(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  { return Init_sol_uint256_t((self->user_totalSupply__).v); }
}
sol_uint256_t BasicToken_Method_For_PolicyPalNetworkToken_balanceOf(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user___owner) {
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
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(150, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(151, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct PolicyPalNetworkCrowdsale contract_0;
  struct PolicyPalNetworkToken *contract_1;
  (g_literal_address_0) = (0);
  (((contract_0).model_address).v) = (1);
  (contract_1) = (&((contract_0).user_token));
  (((contract_1)->model_address).v) = (2);
  (((contract_0).user_multiSigWallet).v) = (0);
  (((contract_0).user_admin).v) = (0);
  (((contract_1)->user_tokenSaleContract).v) = (0);
  (((contract_1)->user_owner).v) = (0);
  smartace_log("[Initializing contract_0 and children]");
  if (GET_ND_RANGE(154, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(152, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(153, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(155, 3, 8, "sender"));
    sol_uint256_t value;
    ((value).v) = (0);
    Init_PolicyPalNetworkCrowdsale(
        &(contract_0), sender, value, blocknum, timestamp, paid, sender,
        Init_sol_address_t(
            GET_ND_RANGE(156, 0, 8, "PolicyPalNetworkCrowdsale:_admin")),
        Init_sol_address_t(GET_ND_RANGE(
            157, 0, 8, "PolicyPalNetworkCrowdsale:_multiSigWallet")),
        Init_sol_uint256_t(GET_ND_UINT(
            158, 256, "PolicyPalNetworkCrowdsale:_totalTokenSupply")),
        Init_sol_uint256_t(GET_ND_UINT(
            159, 256, "PolicyPalNetworkCrowdsale:_premintedTokenSupply")),
        Init_sol_uint256_t(GET_ND_UINT(
            160, 256, "PolicyPalNetworkCrowdsale:_presaleTokenSupply")),
        Init_sol_uint256_t(
            GET_ND_UINT(161, 256, "PolicyPalNetworkCrowdsale:_saleStartTime")),
        Init_sol_uint256_t(
            GET_ND_UINT(162, 256, "PolicyPalNetworkCrowdsale:_saleEndTime")),
        Init_sol_uint256_t(GET_ND_UINT(
            163, 256, "PolicyPalNetworkCrowdsale:_increaseMaxContribTime")),
        Init_sol_uint256_t(
            GET_ND_UINT(164, 256, "PolicyPalNetworkCrowdsale:_rate")),
        Init_sol_uint256_t(GET_ND_UINT(
            165, 256, "PolicyPalNetworkCrowdsale:_minContribution")),
        Init_sol_uint256_t(GET_ND_UINT(
            166, 256, "PolicyPalNetworkCrowdsale:_maxContribution")));
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    sol_uint256_t sum = contract_1->user_balances.sum;
    contract_1->user_balances = ND_Map_1();
    contract_1->user_balances.sum = sum;
    sol_assert(sum.v == contract_1->user_totalSupply__.v, 0);
    contract_1->user_allowed = ND_Map_2();
    contract_0.user_participated = ND_Map_3();
    contract_0.user_whitelistAddresses = ND_Map_4();
    if (GET_ND_RANGE(169, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(167, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(168, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(170, 0, 17, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling setHaltSale(_halt) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(109, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_bool_t arg__halt = Init_sol_bool_t(GET_ND_RANGE(110, 0, 2, "_halt"));
      PolicyPalNetworkCrowdsale_Method_setHaltSale(&(contract_0), sender, value,
                                                   blocknum, timestamp, paid,
                                                   sender, arg__halt);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling buy(_recipient) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(111, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(112, 256, "value"));
      sol_address_t arg__recipient =
          Init_sol_address_t(GET_ND_RANGE(113, 0, 8, "_recipient"));
      PolicyPalNetworkCrowdsale_Method_buy(&(contract_0), sender, value,
                                           blocknum, timestamp, paid, sender,
                                           arg__recipient);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling updateWhitelist(_user, _allow) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(114, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__user =
          Init_sol_address_t(GET_ND_RANGE(115, 0, 8, "_user"));
      sol_bool_t arg__allow =
          Init_sol_bool_t(GET_ND_RANGE(116, 0, 2, "_allow"));
      CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_updateWhitelist(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg__user, arg__allow);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log(
          "[Calling eligibleAmount(_contributor, _amount) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(117, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__contributor =
          Init_sol_address_t(GET_ND_RANGE(118, 0, 8, "_contributor"));
      sol_uint256_t arg__amount =
          Init_sol_uint256_t(GET_ND_UINT(119, 256, "_amount"));
      CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_eligibleAmount(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg__contributor, arg__amount);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling saleStarted() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(120, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleStarted(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling saleEnded() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(121, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleEnded(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling toggleTransferable(_toggle) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(122, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_bool_t arg__toggle =
          Init_sol_bool_t(GET_ND_RANGE(123, 0, 2, "_toggle"));
      PolicyPalNetworkToken_Method_toggleTransferable(contract_1, sender, value,
                                                      blocknum, timestamp, paid,
                                                      sender, arg__toggle);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling transfer(_to, _value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(124, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__to =
          Init_sol_address_t(GET_ND_RANGE(125, 0, 8, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(126, 256, "_value"));
      PolicyPalNetworkToken_Method_transfer(contract_1, sender, value, blocknum,
                                            timestamp, paid, sender, arg__to,
                                            arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling transferFrom(_from, _to, _value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(127, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(128, 0, 8, "_from"));
      sol_address_t arg__to =
          Init_sol_address_t(GET_ND_RANGE(129, 0, 8, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(130, 256, "_value"));
      PolicyPalNetworkToken_Method_transferFrom(
          contract_1, sender, value, blocknum, timestamp, paid, sender,
          arg__from, arg__to, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling burn(_value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(131, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(132, 256, "_value"));
      PolicyPalNetworkToken_Method_burn(contract_1, sender, value, blocknum,
                                        timestamp, paid, sender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(133, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(134, 0, 8, "newOwner"));
      Ownable_Method_For_PolicyPalNetworkToken_transferOwnership(
          contract_1, sender, value, blocknum, timestamp, paid, sender,
          arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling approve(_spender, _value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(135, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(136, 0, 8, "_spender"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(137, 256, "_value"));
      StandardToken_Method_For_PolicyPalNetworkToken_approve(
          contract_1, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log("[Calling allowance(_owner, _spender) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(138, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(139, 0, 8, "_owner"));
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(140, 0, 8, "_spender"));
      StandardToken_Method_For_PolicyPalNetworkToken_allowance(
          contract_1, sender, value, blocknum, timestamp, paid, sender,
          arg__owner, arg__spender);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log(
          "[Calling increaseApproval(_spender, _addedValue) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(141, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(142, 0, 8, "_spender"));
      sol_uint256_t arg__addedValue =
          Init_sol_uint256_t(GET_ND_UINT(143, 256, "_addedValue"));
      StandardToken_Method_For_PolicyPalNetworkToken_increaseApproval(
          contract_1, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log("[Calling decreaseApproval(_spender, _subtractedValue) on "
                   "contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(144, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(145, 0, 8, "_spender"));
      sol_uint256_t arg__subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(146, 256, "_subtractedValue"));
      StandardToken_Method_For_PolicyPalNetworkToken_decreaseApproval(
          contract_1, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 15: {
      smartace_log("[Calling totalSupply() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(147, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      BasicToken_Method_For_PolicyPalNetworkToken_totalSupply(
          contract_1, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 16: {
      smartace_log("[Calling balanceOf(_owner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(148, 3, 8, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(149, 0, 8, "_owner"));
      BasicToken_Method_For_PolicyPalNetworkToken_balanceOf(
          contract_1, sender, value, blocknum, timestamp, paid, sender,
          arg__owner);
      smartace_log("[Call successful]");
      break;
    }
    default: { sol_require(0, "Model failure, next_call out of bounds."); }
    }
  }
}