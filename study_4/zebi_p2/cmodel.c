#include "cmodel.h"
sol_raw_uint160_t g_literal_address_0;
struct Map_2 {
  sol_uint256_t data_0_0;
  sol_uint256_t data_0_1;
  sol_uint256_t data_0_2;
  sol_uint256_t data_0_3;
  sol_uint256_t data_0_4;
  sol_uint256_t data_0_5;
  sol_uint256_t data_1_0;
  sol_uint256_t data_1_1;
  sol_uint256_t data_1_2;
  sol_uint256_t data_1_3;
  sol_uint256_t data_1_4;
  sol_uint256_t data_1_5;
  sol_uint256_t data_2_0;
  sol_uint256_t data_2_1;
  sol_uint256_t data_2_2;
  sol_uint256_t data_2_3;
  sol_uint256_t data_2_4;
  sol_uint256_t data_2_5;
  sol_uint256_t data_3_0;
  sol_uint256_t data_3_1;
  sol_uint256_t data_3_2;
  sol_uint256_t data_3_3;
  sol_uint256_t data_3_4;
  sol_uint256_t data_3_5;
  sol_uint256_t data_4_0;
  sol_uint256_t data_4_1;
  sol_uint256_t data_4_2;
  sol_uint256_t data_4_3;
  sol_uint256_t data_4_4;
  sol_uint256_t data_4_5;
  sol_uint256_t data_5_0;
  sol_uint256_t data_5_1;
  sol_uint256_t data_5_2;
  sol_uint256_t data_5_3;
  sol_uint256_t data_5_4;
  sol_uint256_t data_5_5;
};
struct Map_1 {
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
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
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
struct Map_2 ZeroInit_Map_2(void);
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1);
void Write_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
                 sol_uint256_t dat);
struct Map_1 ZeroInit_Map_1(void);
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0);
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
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
struct Map_2 ZeroInit_Map_2(void) {
  struct Map_2 tmp;
  ((tmp).data_0_0) = (Init_sol_uint256_t(0));
  ((tmp).data_0_1) = (Init_sol_uint256_t(0));
  ((tmp).data_0_2) = (Init_sol_uint256_t(0));
  ((tmp).data_0_3) = (Init_sol_uint256_t(0));
  ((tmp).data_0_4) = (Init_sol_uint256_t(0));
  ((tmp).data_0_5) = (Init_sol_uint256_t(0));
  ((tmp).data_1_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1_1) = (Init_sol_uint256_t(0));
  ((tmp).data_1_2) = (Init_sol_uint256_t(0));
  ((tmp).data_1_3) = (Init_sol_uint256_t(0));
  ((tmp).data_1_4) = (Init_sol_uint256_t(0));
  ((tmp).data_1_5) = (Init_sol_uint256_t(0));
  ((tmp).data_2_0) = (Init_sol_uint256_t(0));
  ((tmp).data_2_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2_2) = (Init_sol_uint256_t(0));
  ((tmp).data_2_3) = (Init_sol_uint256_t(0));
  ((tmp).data_2_4) = (Init_sol_uint256_t(0));
  ((tmp).data_2_5) = (Init_sol_uint256_t(0));
  ((tmp).data_3_0) = (Init_sol_uint256_t(0));
  ((tmp).data_3_1) = (Init_sol_uint256_t(0));
  ((tmp).data_3_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3_3) = (Init_sol_uint256_t(0));
  ((tmp).data_3_4) = (Init_sol_uint256_t(0));
  ((tmp).data_3_5) = (Init_sol_uint256_t(0));
  ((tmp).data_4_0) = (Init_sol_uint256_t(0));
  ((tmp).data_4_1) = (Init_sol_uint256_t(0));
  ((tmp).data_4_2) = (Init_sol_uint256_t(0));
  ((tmp).data_4_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4_4) = (Init_sol_uint256_t(0));
  ((tmp).data_4_5) = (Init_sol_uint256_t(0));
  ((tmp).data_5_0) = (Init_sol_uint256_t(0));
  ((tmp).data_5_1) = (Init_sol_uint256_t(0));
  ((tmp).data_5_2) = (Init_sol_uint256_t(0));
  ((tmp).data_5_3) = (Init_sol_uint256_t(0));
  ((tmp).data_5_4) = (Init_sol_uint256_t(0));
  ((tmp).data_5_5) = (Init_sol_uint256_t(0));
  return tmp;
}
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1) {
  {
    sol_assert((6) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((6) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((5) == ((key_0).v)) {
      if ((5) == ((key_1).v))
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
      if ((5) == ((key_1).v))
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
      if ((5) == ((key_1).v))
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
      if ((5) == ((key_1).v))
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
      if ((5) == ((key_1).v))
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
      if ((5) == ((key_1).v))
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
    sol_assert((6) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    sol_assert((6) >= ((key_1).v), "Model failure, mapping key out of bounds.");
    if ((5) == ((key_0).v)) {
      if ((5) == ((key_1).v)) {
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
      if ((5) == ((key_1).v)) {
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
      if ((5) == ((key_1).v)) {
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
      if ((5) == ((key_1).v)) {
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
      if ((5) == ((key_1).v)) {
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
      if ((5) == ((key_1).v)) {
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
  return tmp;
}
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0) {
  {
    sol_assert((6) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((5) == ((key_0).v))
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
    sol_assert((6) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((5) == ((key_0).v)) {
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
  Init_ERC20Basic_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin);
  ((self)->user_balances) = (ZeroInit_Map_1());
  ((self)->user_totalSupply__) = (Init_sol_uint256_t(0));
}
void Init_StandardToken_For_ZebiCoin(struct ZebiCoin *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin) {
  Init_ERC20_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                          Init_sol_bool_t(0), origin);
  Init_BasicToken_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin);
  ((self)->user_allowed) = (ZeroInit_Map_2());
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
  Init_StandardToken_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin);
  Init_Ownable_For_ZebiCoin(self, sender, value, blocknum, timestamp,
                            Init_sol_bool_t(0), origin);
  ((self)->user_mintingFinished) = (Init_sol_bool_t(0));
  ((self)->user_transferAllowed) = (Init_sol_bool_t(0));
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
  sol_emit("Mint(_to, _amount)");
  sol_emit("Transfer(address(0), _to, _amount)");
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
  sol_emit("MintFinished()");
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
  sol_emit("Burn(_from, tokencount)");
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
  sol_emit("Transfer(msg.sender, _to, _value)");
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
  sol_emit("Transfer(_from, _to, _value)");
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
  sol_emit("OwnershipTransferred(owner, newOwner)");
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
  sol_emit("Approval(msg.sender, _spender, _value)");
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
  sol_emit("Approval(msg.sender, _spender, allowed[msg.sender][_spender])");
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
  sol_emit("Approval(msg.sender, _spender, allowed[msg.sender][_spender])");
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
  ((blocknum).v) = (GET_ND_UINT(33, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(34, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct ZebiCoin contract_0;
  (g_literal_address_0) = (0);
  (((contract_0).model_address).v) = (1);
  (((contract_0).user_owner).v) = (0);
  smartace_log("[Initializing contract_0 and children]");
  if (GET_ND_RANGE(37, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(35, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(36, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(38, 2, 6, "sender"));
    ((last_sender).v) = ((sender).v);
    sol_uint256_t value;
    ((value).v) = (0);
    Init_ZebiCoin(&(contract_0), sender, value, blocknum, timestamp, paid,
                  sender);
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    sol_bool_t prev_transferAllowed = contract_0.user_transferAllowed;
    if (sol_is_using_reps()) {
      (((contract_0).user_allowed).data_0_0) =
          (Init_sol_uint256_t(GET_ND_UINT(39, 256, "ZebiCoin::allowed::_0_0")));
      (((contract_0).user_allowed).data_0_1) =
          (Init_sol_uint256_t(GET_ND_UINT(40, 256, "ZebiCoin::allowed::_0_1")));
      (((contract_0).user_allowed).data_0_2) =
          (Init_sol_uint256_t(GET_ND_UINT(41, 256, "ZebiCoin::allowed::_0_2")));
      (((contract_0).user_allowed).data_0_3) =
          (Init_sol_uint256_t(GET_ND_UINT(42, 256, "ZebiCoin::allowed::_0_3")));
      (((contract_0).user_allowed).data_0_4) =
          (Init_sol_uint256_t(GET_ND_UINT(43, 256, "ZebiCoin::allowed::_0_4")));
      (((contract_0).user_allowed).data_0_5) =
          (Init_sol_uint256_t(GET_ND_UINT(44, 256, "ZebiCoin::allowed::_0_5")));
      (((contract_0).user_allowed).data_1_0) =
          (Init_sol_uint256_t(GET_ND_UINT(45, 256, "ZebiCoin::allowed::_1_0")));
      (((contract_0).user_allowed).data_1_1) =
          (Init_sol_uint256_t(GET_ND_UINT(46, 256, "ZebiCoin::allowed::_1_1")));
      (((contract_0).user_allowed).data_1_2) =
          (Init_sol_uint256_t(GET_ND_UINT(47, 256, "ZebiCoin::allowed::_1_2")));
      (((contract_0).user_allowed).data_1_3) =
          (Init_sol_uint256_t(GET_ND_UINT(48, 256, "ZebiCoin::allowed::_1_3")));
      (((contract_0).user_allowed).data_1_4) =
          (Init_sol_uint256_t(GET_ND_UINT(49, 256, "ZebiCoin::allowed::_1_4")));
      (((contract_0).user_allowed).data_1_5) =
          (Init_sol_uint256_t(GET_ND_UINT(50, 256, "ZebiCoin::allowed::_1_5")));
      (((contract_0).user_allowed).data_2_0) =
          (Init_sol_uint256_t(GET_ND_UINT(51, 256, "ZebiCoin::allowed::_2_0")));
      (((contract_0).user_allowed).data_2_1) =
          (Init_sol_uint256_t(GET_ND_UINT(52, 256, "ZebiCoin::allowed::_2_1")));
      (((contract_0).user_allowed).data_2_2) =
          (Init_sol_uint256_t(GET_ND_UINT(53, 256, "ZebiCoin::allowed::_2_2")));
      (((contract_0).user_allowed).data_2_3) =
          (Init_sol_uint256_t(GET_ND_UINT(54, 256, "ZebiCoin::allowed::_2_3")));
      (((contract_0).user_allowed).data_2_4) =
          (Init_sol_uint256_t(GET_ND_UINT(55, 256, "ZebiCoin::allowed::_2_4")));
      (((contract_0).user_allowed).data_2_5) =
          (Init_sol_uint256_t(GET_ND_UINT(56, 256, "ZebiCoin::allowed::_2_5")));
      (((contract_0).user_allowed).data_3_0) =
          (Init_sol_uint256_t(GET_ND_UINT(57, 256, "ZebiCoin::allowed::_3_0")));
      (((contract_0).user_allowed).data_3_1) =
          (Init_sol_uint256_t(GET_ND_UINT(58, 256, "ZebiCoin::allowed::_3_1")));
      (((contract_0).user_allowed).data_3_2) =
          (Init_sol_uint256_t(GET_ND_UINT(59, 256, "ZebiCoin::allowed::_3_2")));
      (((contract_0).user_allowed).data_3_3) =
          (Init_sol_uint256_t(GET_ND_UINT(60, 256, "ZebiCoin::allowed::_3_3")));
      (((contract_0).user_allowed).data_3_4) =
          (Init_sol_uint256_t(GET_ND_UINT(61, 256, "ZebiCoin::allowed::_3_4")));
      (((contract_0).user_allowed).data_3_5) =
          (Init_sol_uint256_t(GET_ND_UINT(62, 256, "ZebiCoin::allowed::_3_5")));
      (((contract_0).user_allowed).data_4_0) =
          (Init_sol_uint256_t(GET_ND_UINT(63, 256, "ZebiCoin::allowed::_4_0")));
      (((contract_0).user_allowed).data_4_1) =
          (Init_sol_uint256_t(GET_ND_UINT(64, 256, "ZebiCoin::allowed::_4_1")));
      (((contract_0).user_allowed).data_4_2) =
          (Init_sol_uint256_t(GET_ND_UINT(65, 256, "ZebiCoin::allowed::_4_2")));
      (((contract_0).user_allowed).data_4_3) =
          (Init_sol_uint256_t(GET_ND_UINT(66, 256, "ZebiCoin::allowed::_4_3")));
      (((contract_0).user_allowed).data_4_4) =
          (Init_sol_uint256_t(GET_ND_UINT(67, 256, "ZebiCoin::allowed::_4_4")));
      (((contract_0).user_allowed).data_4_5) =
          (Init_sol_uint256_t(GET_ND_UINT(68, 256, "ZebiCoin::allowed::_4_5")));
      (((contract_0).user_allowed).data_5_0) =
          (Init_sol_uint256_t(GET_ND_UINT(69, 256, "ZebiCoin::allowed::_5_0")));
      (((contract_0).user_allowed).data_5_1) =
          (Init_sol_uint256_t(GET_ND_UINT(70, 256, "ZebiCoin::allowed::_5_1")));
      (((contract_0).user_allowed).data_5_2) =
          (Init_sol_uint256_t(GET_ND_UINT(71, 256, "ZebiCoin::allowed::_5_2")));
      (((contract_0).user_allowed).data_5_3) =
          (Init_sol_uint256_t(GET_ND_UINT(72, 256, "ZebiCoin::allowed::_5_3")));
      (((contract_0).user_allowed).data_5_4) =
          (Init_sol_uint256_t(GET_ND_UINT(73, 256, "ZebiCoin::allowed::_5_4")));
      (((contract_0).user_allowed).data_5_5) =
          (Init_sol_uint256_t(GET_ND_UINT(74, 256, "ZebiCoin::allowed::_5_5")));
      (((contract_0).user_balances).data_0) =
          (Init_sol_uint256_t(GET_ND_UINT(75, 256, "ZebiCoin::balances::_0")));
      (((contract_0).user_balances).data_1) =
          (Init_sol_uint256_t(GET_ND_UINT(76, 256, "ZebiCoin::balances::_1")));
      (((contract_0).user_balances).data_2) =
          (Init_sol_uint256_t(GET_ND_UINT(77, 256, "ZebiCoin::balances::_2")));
      (((contract_0).user_balances).data_3) =
          (Init_sol_uint256_t(GET_ND_UINT(78, 256, "ZebiCoin::balances::_3")));
      (((contract_0).user_balances).data_4) =
          (Init_sol_uint256_t(GET_ND_UINT(79, 256, "ZebiCoin::balances::_4")));
      (((contract_0).user_balances).data_5) =
          (Init_sol_uint256_t(GET_ND_UINT(80, 256, "ZebiCoin::balances::_5")));
    }
    if (GET_ND_RANGE(83, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(81, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(82, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(84, 0, 15, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling mint(_to, _amount) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(0, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(1, 0, 6, "_to"));
      sol_uint256_t arg__amount =
          Init_sol_uint256_t(GET_ND_UINT(2, 256, "_amount"));
      MintableToken_Method_For_ZebiCoin_mint(&(contract_0), sender, value,
                                             blocknum, timestamp, paid, sender,
                                             arg__to, arg__amount);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling finishMinting() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(3, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MintableToken_Method_For_ZebiCoin_finishMinting(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling resumeMinting() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(4, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MintableToken_Method_For_ZebiCoin_resumeMinting(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling burn(_from) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(5, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(6, 0, 6, "_from"));
      MintableToken_Method_For_ZebiCoin_burn(&(contract_0), sender, value,
                                             blocknum, timestamp, paid, sender,
                                             arg__from);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling startTransfer() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(7, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MintableToken_Method_For_ZebiCoin_startTransfer(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling endTransfer() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(8, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      MintableToken_Method_For_ZebiCoin_endTransfer(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling transfer(_to, _value) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(9, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(10, 0, 6, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(11, 256, "_value"));
      MintableToken_Method_For_ZebiCoin_transfer(&(contract_0), sender, value,
                                                 blocknum, timestamp, paid,
                                                 sender, arg__to, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling transferFrom(_from, _to, _value) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(12, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(13, 0, 6, "_from"));
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(14, 0, 6, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(15, 256, "_value"));
      MintableToken_Method_For_ZebiCoin_transferFrom(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg__from, arg__to, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(16, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(17, 0, 6, "newOwner"));
      Ownable_Method_For_ZebiCoin_transferOwnership(&(contract_0), sender,
                                                    value, blocknum, timestamp,
                                                    paid, sender, arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling approve(_spender, _value) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(18, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(19, 0, 6, "_spender"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(20, 256, "_value"));
      StandardToken_Method_For_ZebiCoin_approve(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling allowance(_owner, _spender) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(21, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(22, 0, 6, "_owner"));
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(23, 0, 6, "_spender"));
      StandardToken_Method_For_ZebiCoin_allowance(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg__owner, arg__spender);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log(
          "[Calling increaseApproval(_spender, _addedValue) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(24, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(25, 0, 6, "_spender"));
      sol_uint256_t arg__addedValue =
          Init_sol_uint256_t(GET_ND_UINT(26, 256, "_addedValue"));
      StandardToken_Method_For_ZebiCoin_increaseApproval(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log("[Calling decreaseApproval(_spender, _subtractedValue) on "
                   "contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(27, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(28, 0, 6, "_spender"));
      sol_uint256_t arg__subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(29, 256, "_subtractedValue"));
      StandardToken_Method_For_ZebiCoin_decreaseApproval(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log("[Calling totalSupply() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(30, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      BasicToken_Method_For_ZebiCoin_totalSupply(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log("[Calling balanceOf(_owner) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(31, 2, 6, "sender"));
      ((last_sender).v) = ((sender).v);
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(32, 0, 6, "_owner"));
      BasicToken_Method_For_ZebiCoin_balanceOf(&(contract_0), sender, value,
                                               blocknum, timestamp, paid,
                                               sender, arg__owner);
      smartace_log("[Call successful]");
      break;
    }
    default: { sol_require(0, "Model failure, next_call out of bounds."); }
    }
    if (prev_transferAllowed.v != contract_0.user_transferAllowed.v) {
      sol_assert(last_sender.v == contract_0.user_owner.v, "Property.");
    }
  }
}