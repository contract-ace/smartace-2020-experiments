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
    sol_assert(0, "Fallback not allowed in: PolicyPalNetworkCrowdsale");
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
sol_uint256_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0);
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_uint256_t dat);
struct Map_4 ZeroInit_Map_4(void);
sol_bool_t Read_Map_4(struct Map_4 *arr, sol_address_t key_0);
void Write_Map_4(struct Map_4 *arr, sol_address_t key_0, sol_bool_t dat);
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
  ((self)->user_multiSigWallet) = (Init_sol_address_t(0));
  ((self)->user_raisedWei) = (Init_sol_uint256_t(0));
  ((self)->user_haltSale) = (Init_sol_bool_t(0));
  ((self)->user_rate) = (Init_sol_uint256_t(0));
  Init_CrowdsaleAuthorizer_For_PolicyPalNetworkCrowdsale(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((user___admin).v),
      Init_sol_uint256_t((user___saleStartTime).v),
      Init_sol_uint256_t((user___saleEndTime).v),
      Init_sol_uint256_t((user___increaseMaxContribTime).v),
      Init_sol_uint256_t((user___minContribution).v),
      Init_sol_uint256_t((user___maxContribution).v));
  PolicyPalNetworkCrowdsale_Constructor(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      user___admin, user___multiSigWallet, user___totalTokenSupply,
      user___premintedTokenSupply, user___presaleTokenSupply,
      user___saleStartTime, user___saleEndTime, user___increaseMaxContribTime,
      user___rate, user___minContribution, user___maxContribution);
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
        sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
        (self)->model_address, &((self)->model_balance),
        Init_sol_address_t((sender).v),
        Init_sol_uint256_t(
            (SafeMath_Method_sub(
                 Init_sol_uint256_t((value).v),
                 Init_sol_uint256_t((func_user_weiContributionAllowed).v)))
                .v));
  }
  {
    (func_user___recipient).v;
    (func_user_receivedTokens).v;
    (func_user_weiContributionAllowed).v;
    sol_emit("Buy(_recipient, receivedTokens, weiContributionAllowed)");
  }
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
  {
    (func_user___user).v;
    (func_user___allow).v;
    (timestamp).v;
    sol_emit("UpdateWhitelist(_user, _allow, now)");
  }
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
  sol_transfer(sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
               (self)->model_address, &((self)->model_balance),
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
  {
    ((int)(g_literal_address_0));
    (sender).v;
    (func_user___tokenTotalAmount).v;
    sol_emit("Transfer(address(0x0), msg.sender, _tokenTotalAmount)");
  }
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
  ((self)->user_balances) = (ZeroInit_Map_1());
  ((self)->user_totalSupply__) = (Init_sol_uint256_t(0));
}
void Init_StandardToken_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {
  ((self)->user_allowed) = (ZeroInit_Map_2());
  Init_ERC20_For_PolicyPalNetworkToken(self, sender, value, blocknum, timestamp,
                                       Init_sol_bool_t(0), origin);
  Init_BasicToken_For_PolicyPalNetworkToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
}
void Init_BurnableToken_For_PolicyPalNetworkToken(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin) {}
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
  ((self)->user_tokenSaleContract) = (Init_sol_address_t(0));
  ((self)->user_isTokenTransferable) = (Init_sol_bool_t(0));
  Init_StandardToken_For_PolicyPalNetworkToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  Init_BurnableToken_For_PolicyPalNetworkToken(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin);
  Init_Ownable_For_PolicyPalNetworkToken(self, sender, value, blocknum,
                                         timestamp, Init_sol_bool_t(0), origin);
  PolicyPalNetworkToken_Constructor(self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin,
                                    user___tokenTotalAmount, user___adminAddr);
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
  {
    (sender).v;
    (func_user___to).v;
    (func_user___value).v;
    sol_emit("Transfer(msg.sender, _to, _value)");
  }
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
  {
    (func_user___from).v;
    (func_user___to).v;
    (func_user___value).v;
    sol_emit("Transfer(_from, _to, _value)");
  }
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
  {
    (func_user_burner).v;
    (func_user___value).v;
    sol_emit("Burn(burner, _value)");
  }
}
void PolicyPalNetworkToken_Method_burn(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_uint256_t func_user___value) {
  BurnableToken_Method_For_PolicyPalNetworkToken_burn(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t((func_user___value).v));
  {
    (sender).v;
    ((int)(g_literal_address_0));
    (func_user___value).v;
    sol_emit("Transfer(msg.sender, address(0x0), _value)");
  }
}
void Ownable_Method_1_For_PolicyPalNetworkToken_transferOwnership(
    struct PolicyPalNetworkToken *self, sol_address_t sender,
    sol_uint256_t value, sol_uint256_t blocknum, sol_uint256_t timestamp,
    sol_bool_t paid, sol_address_t origin, sol_address_t func_user_newOwner) {
  sol_require(((func_user_newOwner).v) != (((int)(g_literal_address_0))), 0);
  {
    (self->user_owner).v;
    (func_user_newOwner).v;
    sol_emit("OwnershipTransferred(owner, newOwner)");
  }
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
  {
    (sender).v;
    (func_user___spender).v;
    (func_user___value).v;
    sol_emit("Approval(msg.sender, _spender, _value)");
  }
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
  sol_address_t last_sender;
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(44, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(45, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct PolicyPalNetworkCrowdsale contract_1;
  struct PolicyPalNetworkToken *contract_2;
  (g_literal_address_0) = (0);
  (((contract_1).model_address).v) = (1);
  (contract_2) = (&((contract_1).user_token));
  (((contract_2)->model_address).v) = (2);
  (((contract_1).user_multiSigWallet).v) = (0);
  (((contract_1).user_admin).v) = (0);
  (((contract_2)->user_tokenSaleContract).v) = (0);
  (((contract_2)->user_owner).v) = (0);
  smartace_log("[Initializing contract_1 and children]");
  if (GET_ND_RANGE(48, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(46, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(47, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(49, 3, 8, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_PolicyPalNetworkCrowdsale(
        &(contract_1), sender, value, blocknum, timestamp, paid, sender,
        Init_sol_address_t(
            GET_ND_RANGE(50, 0, 8, "PolicyPalNetworkCrowdsale:_admin")),
        Init_sol_address_t(GET_ND_RANGE(
            51, 0, 8, "PolicyPalNetworkCrowdsale:_multiSigWallet")),
        Init_sol_uint256_t(GET_ND_UINT(
            52, 256, "PolicyPalNetworkCrowdsale:_totalTokenSupply")),
        Init_sol_uint256_t(GET_ND_UINT(
            53, 256, "PolicyPalNetworkCrowdsale:_premintedTokenSupply")),
        Init_sol_uint256_t(GET_ND_UINT(
            54, 256, "PolicyPalNetworkCrowdsale:_presaleTokenSupply")),
        Init_sol_uint256_t(
            GET_ND_UINT(55, 256, "PolicyPalNetworkCrowdsale:_saleStartTime")),
        Init_sol_uint256_t(
            GET_ND_UINT(56, 256, "PolicyPalNetworkCrowdsale:_saleEndTime")),
        Init_sol_uint256_t(GET_ND_UINT(
            57, 256, "PolicyPalNetworkCrowdsale:_increaseMaxContribTime")),
        Init_sol_uint256_t(
            GET_ND_UINT(58, 256, "PolicyPalNetworkCrowdsale:_rate")),
        Init_sol_uint256_t(
            GET_ND_UINT(59, 256, "PolicyPalNetworkCrowdsale:_minContribution")),
        Init_sol_uint256_t(GET_ND_UINT(
            60, 256, "PolicyPalNetworkCrowdsale:_maxContribution")));
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    sol_assert(contract_2->user_balances.sum.v == contract_2->user_totalSupply__.v, 0);
    if (sol_is_using_reps()) {
      (((contract_1).user_participated).data_0) = (Init_sol_uint256_t(
          GET_ND_UINT(61, 256, "PolicyPalNetworkCrowdsale::participated::_0")));
      (((contract_1).user_participated).data_1) = (Init_sol_uint256_t(
          GET_ND_UINT(62, 256, "PolicyPalNetworkCrowdsale::participated::_1")));
      (((contract_1).user_participated).data_2) = (Init_sol_uint256_t(
          GET_ND_UINT(63, 256, "PolicyPalNetworkCrowdsale::participated::_2")));
      (((contract_1).user_participated).data_3) = (Init_sol_uint256_t(
          GET_ND_UINT(64, 256, "PolicyPalNetworkCrowdsale::participated::_3")));
      (((contract_1).user_participated).data_4) = (Init_sol_uint256_t(
          GET_ND_UINT(65, 256, "PolicyPalNetworkCrowdsale::participated::_4")));
      (((contract_1).user_participated).data_5) = (Init_sol_uint256_t(
          GET_ND_UINT(66, 256, "PolicyPalNetworkCrowdsale::participated::_5")));
      (((contract_1).user_participated).data_6) = (Init_sol_uint256_t(
          GET_ND_UINT(67, 256, "PolicyPalNetworkCrowdsale::participated::_6")));
      (((contract_1).user_participated).data_7) = (Init_sol_uint256_t(
          GET_ND_UINT(68, 256, "PolicyPalNetworkCrowdsale::participated::_7")));
      (((contract_1).user_whitelistAddresses).data_0) =
          (Init_sol_bool_t(GET_ND_RANGE(
              69, 0, 2, "PolicyPalNetworkCrowdsale::whitelistAddresses::_0")));
      (((contract_1).user_whitelistAddresses).data_1) =
          (Init_sol_bool_t(GET_ND_RANGE(
              70, 0, 2, "PolicyPalNetworkCrowdsale::whitelistAddresses::_1")));
      (((contract_1).user_whitelistAddresses).data_2) =
          (Init_sol_bool_t(GET_ND_RANGE(
              71, 0, 2, "PolicyPalNetworkCrowdsale::whitelistAddresses::_2")));
      (((contract_1).user_whitelistAddresses).data_3) =
          (Init_sol_bool_t(GET_ND_RANGE(
              72, 0, 2, "PolicyPalNetworkCrowdsale::whitelistAddresses::_3")));
      (((contract_1).user_whitelistAddresses).data_4) =
          (Init_sol_bool_t(GET_ND_RANGE(
              73, 0, 2, "PolicyPalNetworkCrowdsale::whitelistAddresses::_4")));
      (((contract_1).user_whitelistAddresses).data_5) =
          (Init_sol_bool_t(GET_ND_RANGE(
              74, 0, 2, "PolicyPalNetworkCrowdsale::whitelistAddresses::_5")));
      (((contract_1).user_whitelistAddresses).data_6) =
          (Init_sol_bool_t(GET_ND_RANGE(
              75, 0, 2, "PolicyPalNetworkCrowdsale::whitelistAddresses::_6")));
      (((contract_1).user_whitelistAddresses).data_7) =
          (Init_sol_bool_t(GET_ND_RANGE(
              76, 0, 2, "PolicyPalNetworkCrowdsale::whitelistAddresses::_7")));
      (((contract_2)->user_allowed).data_0_0) = (Init_sol_uint256_t(
          GET_ND_UINT(77, 256, "PolicyPalNetworkToken::allowed::_0_0")));
      (((contract_2)->user_allowed).data_0_1) = (Init_sol_uint256_t(
          GET_ND_UINT(78, 256, "PolicyPalNetworkToken::allowed::_0_1")));
      (((contract_2)->user_allowed).data_0_2) = (Init_sol_uint256_t(
          GET_ND_UINT(79, 256, "PolicyPalNetworkToken::allowed::_0_2")));
      (((contract_2)->user_allowed).data_0_3) = (Init_sol_uint256_t(
          GET_ND_UINT(80, 256, "PolicyPalNetworkToken::allowed::_0_3")));
      (((contract_2)->user_allowed).data_0_4) = (Init_sol_uint256_t(
          GET_ND_UINT(81, 256, "PolicyPalNetworkToken::allowed::_0_4")));
      (((contract_2)->user_allowed).data_0_5) = (Init_sol_uint256_t(
          GET_ND_UINT(82, 256, "PolicyPalNetworkToken::allowed::_0_5")));
      (((contract_2)->user_allowed).data_0_6) = (Init_sol_uint256_t(
          GET_ND_UINT(83, 256, "PolicyPalNetworkToken::allowed::_0_6")));
      (((contract_2)->user_allowed).data_0_7) = (Init_sol_uint256_t(
          GET_ND_UINT(84, 256, "PolicyPalNetworkToken::allowed::_0_7")));
      (((contract_2)->user_allowed).data_1_0) = (Init_sol_uint256_t(
          GET_ND_UINT(85, 256, "PolicyPalNetworkToken::allowed::_1_0")));
      (((contract_2)->user_allowed).data_1_1) = (Init_sol_uint256_t(
          GET_ND_UINT(86, 256, "PolicyPalNetworkToken::allowed::_1_1")));
      (((contract_2)->user_allowed).data_1_2) = (Init_sol_uint256_t(
          GET_ND_UINT(87, 256, "PolicyPalNetworkToken::allowed::_1_2")));
      (((contract_2)->user_allowed).data_1_3) = (Init_sol_uint256_t(
          GET_ND_UINT(88, 256, "PolicyPalNetworkToken::allowed::_1_3")));
      (((contract_2)->user_allowed).data_1_4) = (Init_sol_uint256_t(
          GET_ND_UINT(89, 256, "PolicyPalNetworkToken::allowed::_1_4")));
      (((contract_2)->user_allowed).data_1_5) = (Init_sol_uint256_t(
          GET_ND_UINT(90, 256, "PolicyPalNetworkToken::allowed::_1_5")));
      (((contract_2)->user_allowed).data_1_6) = (Init_sol_uint256_t(
          GET_ND_UINT(91, 256, "PolicyPalNetworkToken::allowed::_1_6")));
      (((contract_2)->user_allowed).data_1_7) = (Init_sol_uint256_t(
          GET_ND_UINT(92, 256, "PolicyPalNetworkToken::allowed::_1_7")));
      (((contract_2)->user_allowed).data_2_0) = (Init_sol_uint256_t(
          GET_ND_UINT(93, 256, "PolicyPalNetworkToken::allowed::_2_0")));
      (((contract_2)->user_allowed).data_2_1) = (Init_sol_uint256_t(
          GET_ND_UINT(94, 256, "PolicyPalNetworkToken::allowed::_2_1")));
      (((contract_2)->user_allowed).data_2_2) = (Init_sol_uint256_t(
          GET_ND_UINT(95, 256, "PolicyPalNetworkToken::allowed::_2_2")));
      (((contract_2)->user_allowed).data_2_3) = (Init_sol_uint256_t(
          GET_ND_UINT(96, 256, "PolicyPalNetworkToken::allowed::_2_3")));
      (((contract_2)->user_allowed).data_2_4) = (Init_sol_uint256_t(
          GET_ND_UINT(97, 256, "PolicyPalNetworkToken::allowed::_2_4")));
      (((contract_2)->user_allowed).data_2_5) = (Init_sol_uint256_t(
          GET_ND_UINT(98, 256, "PolicyPalNetworkToken::allowed::_2_5")));
      (((contract_2)->user_allowed).data_2_6) = (Init_sol_uint256_t(
          GET_ND_UINT(99, 256, "PolicyPalNetworkToken::allowed::_2_6")));
      (((contract_2)->user_allowed).data_2_7) = (Init_sol_uint256_t(
          GET_ND_UINT(100, 256, "PolicyPalNetworkToken::allowed::_2_7")));
      (((contract_2)->user_allowed).data_3_0) = (Init_sol_uint256_t(
          GET_ND_UINT(101, 256, "PolicyPalNetworkToken::allowed::_3_0")));
      (((contract_2)->user_allowed).data_3_1) = (Init_sol_uint256_t(
          GET_ND_UINT(102, 256, "PolicyPalNetworkToken::allowed::_3_1")));
      (((contract_2)->user_allowed).data_3_2) = (Init_sol_uint256_t(
          GET_ND_UINT(103, 256, "PolicyPalNetworkToken::allowed::_3_2")));
      (((contract_2)->user_allowed).data_3_3) = (Init_sol_uint256_t(
          GET_ND_UINT(104, 256, "PolicyPalNetworkToken::allowed::_3_3")));
      (((contract_2)->user_allowed).data_3_4) = (Init_sol_uint256_t(
          GET_ND_UINT(105, 256, "PolicyPalNetworkToken::allowed::_3_4")));
      (((contract_2)->user_allowed).data_3_5) = (Init_sol_uint256_t(
          GET_ND_UINT(106, 256, "PolicyPalNetworkToken::allowed::_3_5")));
      (((contract_2)->user_allowed).data_3_6) = (Init_sol_uint256_t(
          GET_ND_UINT(107, 256, "PolicyPalNetworkToken::allowed::_3_6")));
      (((contract_2)->user_allowed).data_3_7) = (Init_sol_uint256_t(
          GET_ND_UINT(108, 256, "PolicyPalNetworkToken::allowed::_3_7")));
      (((contract_2)->user_allowed).data_4_0) = (Init_sol_uint256_t(
          GET_ND_UINT(109, 256, "PolicyPalNetworkToken::allowed::_4_0")));
      (((contract_2)->user_allowed).data_4_1) = (Init_sol_uint256_t(
          GET_ND_UINT(110, 256, "PolicyPalNetworkToken::allowed::_4_1")));
      (((contract_2)->user_allowed).data_4_2) = (Init_sol_uint256_t(
          GET_ND_UINT(111, 256, "PolicyPalNetworkToken::allowed::_4_2")));
      (((contract_2)->user_allowed).data_4_3) = (Init_sol_uint256_t(
          GET_ND_UINT(112, 256, "PolicyPalNetworkToken::allowed::_4_3")));
      (((contract_2)->user_allowed).data_4_4) = (Init_sol_uint256_t(
          GET_ND_UINT(113, 256, "PolicyPalNetworkToken::allowed::_4_4")));
      (((contract_2)->user_allowed).data_4_5) = (Init_sol_uint256_t(
          GET_ND_UINT(114, 256, "PolicyPalNetworkToken::allowed::_4_5")));
      (((contract_2)->user_allowed).data_4_6) = (Init_sol_uint256_t(
          GET_ND_UINT(115, 256, "PolicyPalNetworkToken::allowed::_4_6")));
      (((contract_2)->user_allowed).data_4_7) = (Init_sol_uint256_t(
          GET_ND_UINT(116, 256, "PolicyPalNetworkToken::allowed::_4_7")));
      (((contract_2)->user_allowed).data_5_0) = (Init_sol_uint256_t(
          GET_ND_UINT(117, 256, "PolicyPalNetworkToken::allowed::_5_0")));
      (((contract_2)->user_allowed).data_5_1) = (Init_sol_uint256_t(
          GET_ND_UINT(118, 256, "PolicyPalNetworkToken::allowed::_5_1")));
      (((contract_2)->user_allowed).data_5_2) = (Init_sol_uint256_t(
          GET_ND_UINT(119, 256, "PolicyPalNetworkToken::allowed::_5_2")));
      (((contract_2)->user_allowed).data_5_3) = (Init_sol_uint256_t(
          GET_ND_UINT(120, 256, "PolicyPalNetworkToken::allowed::_5_3")));
      (((contract_2)->user_allowed).data_5_4) = (Init_sol_uint256_t(
          GET_ND_UINT(121, 256, "PolicyPalNetworkToken::allowed::_5_4")));
      (((contract_2)->user_allowed).data_5_5) = (Init_sol_uint256_t(
          GET_ND_UINT(122, 256, "PolicyPalNetworkToken::allowed::_5_5")));
      (((contract_2)->user_allowed).data_5_6) = (Init_sol_uint256_t(
          GET_ND_UINT(123, 256, "PolicyPalNetworkToken::allowed::_5_6")));
      (((contract_2)->user_allowed).data_5_7) = (Init_sol_uint256_t(
          GET_ND_UINT(124, 256, "PolicyPalNetworkToken::allowed::_5_7")));
      (((contract_2)->user_allowed).data_6_0) = (Init_sol_uint256_t(
          GET_ND_UINT(125, 256, "PolicyPalNetworkToken::allowed::_6_0")));
      (((contract_2)->user_allowed).data_6_1) = (Init_sol_uint256_t(
          GET_ND_UINT(126, 256, "PolicyPalNetworkToken::allowed::_6_1")));
      (((contract_2)->user_allowed).data_6_2) = (Init_sol_uint256_t(
          GET_ND_UINT(127, 256, "PolicyPalNetworkToken::allowed::_6_2")));
      (((contract_2)->user_allowed).data_6_3) = (Init_sol_uint256_t(
          GET_ND_UINT(128, 256, "PolicyPalNetworkToken::allowed::_6_3")));
      (((contract_2)->user_allowed).data_6_4) = (Init_sol_uint256_t(
          GET_ND_UINT(129, 256, "PolicyPalNetworkToken::allowed::_6_4")));
      (((contract_2)->user_allowed).data_6_5) = (Init_sol_uint256_t(
          GET_ND_UINT(130, 256, "PolicyPalNetworkToken::allowed::_6_5")));
      (((contract_2)->user_allowed).data_6_6) = (Init_sol_uint256_t(
          GET_ND_UINT(131, 256, "PolicyPalNetworkToken::allowed::_6_6")));
      (((contract_2)->user_allowed).data_6_7) = (Init_sol_uint256_t(
          GET_ND_UINT(132, 256, "PolicyPalNetworkToken::allowed::_6_7")));
      (((contract_2)->user_allowed).data_7_0) = (Init_sol_uint256_t(
          GET_ND_UINT(133, 256, "PolicyPalNetworkToken::allowed::_7_0")));
      (((contract_2)->user_allowed).data_7_1) = (Init_sol_uint256_t(
          GET_ND_UINT(134, 256, "PolicyPalNetworkToken::allowed::_7_1")));
      (((contract_2)->user_allowed).data_7_2) = (Init_sol_uint256_t(
          GET_ND_UINT(135, 256, "PolicyPalNetworkToken::allowed::_7_2")));
      (((contract_2)->user_allowed).data_7_3) = (Init_sol_uint256_t(
          GET_ND_UINT(136, 256, "PolicyPalNetworkToken::allowed::_7_3")));
      (((contract_2)->user_allowed).data_7_4) = (Init_sol_uint256_t(
          GET_ND_UINT(137, 256, "PolicyPalNetworkToken::allowed::_7_4")));
      (((contract_2)->user_allowed).data_7_5) = (Init_sol_uint256_t(
          GET_ND_UINT(138, 256, "PolicyPalNetworkToken::allowed::_7_5")));
      (((contract_2)->user_allowed).data_7_6) = (Init_sol_uint256_t(
          GET_ND_UINT(139, 256, "PolicyPalNetworkToken::allowed::_7_6")));
      (((contract_2)->user_allowed).data_7_7) = (Init_sol_uint256_t(
          GET_ND_UINT(140, 256, "PolicyPalNetworkToken::allowed::_7_7")));
      (((contract_2)->user_balances).data_0) = (Init_sol_uint256_t(
          GET_ND_UINT(141, 256, "PolicyPalNetworkToken::balances::_0")));
      (((contract_2)->user_balances).data_1) = (Init_sol_uint256_t(
          GET_ND_UINT(142, 256, "PolicyPalNetworkToken::balances::_1")));
      (((contract_2)->user_balances).data_2) = (Init_sol_uint256_t(
          GET_ND_UINT(143, 256, "PolicyPalNetworkToken::balances::_2")));
      (((contract_2)->user_balances).data_3) = (Init_sol_uint256_t(
          GET_ND_UINT(144, 256, "PolicyPalNetworkToken::balances::_3")));
      (((contract_2)->user_balances).data_4) = (Init_sol_uint256_t(
          GET_ND_UINT(145, 256, "PolicyPalNetworkToken::balances::_4")));
      (((contract_2)->user_balances).data_5) = (Init_sol_uint256_t(
          GET_ND_UINT(146, 256, "PolicyPalNetworkToken::balances::_5")));
      (((contract_2)->user_balances).data_6) = (Init_sol_uint256_t(
          GET_ND_UINT(147, 256, "PolicyPalNetworkToken::balances::_6")));
      (((contract_2)->user_balances).data_7) = (Init_sol_uint256_t(
          GET_ND_UINT(148, 256, "PolicyPalNetworkToken::balances::_7")));
    }
    if (GET_ND_RANGE(151, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(149, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(150, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(152, 0, 18, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling setHaltSale(_halt) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(1, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_bool_t arg__halt = Init_sol_bool_t(GET_ND_RANGE(2, 0, 2, "_halt"));
      PolicyPalNetworkCrowdsale_Method_setHaltSale(&(contract_1), sender, value,
                                                   blocknum, timestamp, paid,
                                                   sender, arg__halt);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling buy(_recipient) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(3, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(4, 256, "value"));
      sol_address_t arg__recipient =
          Init_sol_address_t(GET_ND_RANGE(5, 0, 8, "_recipient"));
      PolicyPalNetworkCrowdsale_Method_buy(&(contract_1), sender, value,
                                           blocknum, timestamp, paid, sender,
                                           arg__recipient);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling updateWhitelist(_user, _allow) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(6, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__user =
          Init_sol_address_t(GET_ND_RANGE(7, 0, 8, "_user"));
      sol_bool_t arg__allow = Init_sol_bool_t(GET_ND_RANGE(8, 0, 2, "_allow"));
      CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_updateWhitelist(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__user, arg__allow);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log(
          "[Calling eligibleAmount(_contributor, _amount) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(9, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__contributor =
          Init_sol_address_t(GET_ND_RANGE(10, 0, 8, "_contributor"));
      sol_uint256_t arg__amount =
          Init_sol_uint256_t(GET_ND_UINT(11, 256, "_amount"));
      CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_eligibleAmount(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender,
          arg__contributor, arg__amount);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling saleStarted() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(12, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleStarted(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling saleEnded() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(13, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      CrowdsaleAuthorizer_Method_For_PolicyPalNetworkCrowdsale_saleEnded(
          &(contract_1), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling () on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(14, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(15, 256, "value"));
      PolicyPalNetworkCrowdsale_Fallback(&(contract_1), sender, value, blocknum,
                                         timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling toggleTransferable(_toggle) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(16, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_bool_t arg__toggle =
          Init_sol_bool_t(GET_ND_RANGE(17, 0, 2, "_toggle"));
      PolicyPalNetworkToken_Method_toggleTransferable(contract_2, sender, value,
                                                      blocknum, timestamp, paid,
                                                      sender, arg__toggle);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling transfer(_to, _value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(18, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(19, 0, 8, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(20, 256, "_value"));
      PolicyPalNetworkToken_Method_transfer(contract_2, sender, value, blocknum,
                                            timestamp, paid, sender, arg__to,
                                            arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling transferFrom(_from, _to, _value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(21, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(22, 0, 8, "_from"));
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(23, 0, 8, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(24, 256, "_value"));
      PolicyPalNetworkToken_Method_transferFrom(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg__from, arg__to, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling burn(_value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(25, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(26, 256, "_value"));
      PolicyPalNetworkToken_Method_burn(contract_2, sender, value, blocknum,
                                        timestamp, paid, sender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(27, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(28, 0, 8, "newOwner"));
      Ownable_Method_For_PolicyPalNetworkToken_transferOwnership(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log("[Calling approve(_spender, _value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(29, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(30, 0, 8, "_spender"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(31, 256, "_value"));
      StandardToken_Method_For_PolicyPalNetworkToken_approve(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log("[Calling allowance(_owner, _spender) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(32, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(33, 0, 8, "_owner"));
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(34, 0, 8, "_spender"));
      StandardToken_Method_For_PolicyPalNetworkToken_allowance(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg__owner, arg__spender);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log(
          "[Calling increaseApproval(_spender, _addedValue) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(35, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(36, 0, 8, "_spender"));
      sol_uint256_t arg__addedValue =
          Init_sol_uint256_t(GET_ND_UINT(37, 256, "_addedValue"));
      StandardToken_Method_For_PolicyPalNetworkToken_increaseApproval(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 15: {
      smartace_log("[Calling decreaseApproval(_spender, _subtractedValue) on "
                   "contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(38, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(39, 0, 8, "_spender"));
      sol_uint256_t arg__subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(40, 256, "_subtractedValue"));
      StandardToken_Method_For_PolicyPalNetworkToken_decreaseApproval(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 16: {
      smartace_log("[Calling totalSupply() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(41, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      BasicToken_Method_For_PolicyPalNetworkToken_totalSupply(
          contract_2, sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 17: {
      smartace_log("[Calling balanceOf(_owner) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(42, 3, 8, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(43, 0, 8, "_owner"));
      BasicToken_Method_For_PolicyPalNetworkToken_balanceOf(
          contract_2, sender, value, blocknum, timestamp, paid, sender,
          arg__owner);
      smartace_log("[Call successful]");
      break;
    }
    default: { sol_require(0, "Model failure, next_call out of bounds."); }
    }
  }
}