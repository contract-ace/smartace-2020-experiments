#include "cmodel.h"
GHOST_VAR sol_uint256_t prev_gold;
GHOST_VAR sol_uint256_t post_gold;
GHOST_VAR sol_uint256_t prev_lead;
GHOST_VAR sol_uint256_t post_lead;
sol_raw_uint160_t g_literal_address_0;
struct Map_1 {
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
  sol_uint256_t data_6;
};
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
struct ERC20 {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct Map_1 user___balances;
  struct Map_2 user___allowed;
  sol_uint256_t user___totalSupply;
};
struct Alchemist {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct ERC20 user_LEAD;
  struct ERC20 user_GOLD;
};
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
struct Map_1 ZeroInit_Map_1(void);
struct Map_1 ND_Map_1(void);
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0);
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
void Set_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
struct Map_2 ZeroInit_Map_2(void);
struct Map_2 ND_Map_2(void);
sol_uint256_t Read_Map_2(struct Map_2 *arr, sol_address_t key_0,
                         sol_address_t key_1);
void Write_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
                 sol_uint256_t dat);
void Set_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
               sol_uint256_t dat);
void ERC20_Method___transfer(struct ERC20 *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin, sol_address_t func_user_from,
                             sol_address_t func_user_to,
                             sol_uint256_t func_user_value);
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
void Alchemist_Constructor(struct Alchemist *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin) {
  Init_ERC20(&(self->user_LEAD), (self)->model_address, Init_sol_uint256_t(0),
             blocknum, timestamp, Init_sol_bool_t(1), origin);
  Init_ERC20(&(self->user_GOLD), (self)->model_address, Init_sol_uint256_t(0),
             blocknum, timestamp, Init_sol_bool_t(1), origin);
}
void Init_Alchemist(struct Alchemist *self, sol_address_t sender,
                    sol_uint256_t value, sol_uint256_t blocknum,
                    sol_uint256_t timestamp, sol_bool_t paid,
                    sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Alchemist_Constructor(self, sender, value, blocknum, timestamp,
                        Init_sol_bool_t(0), origin);
}
void ND_Alchemist(struct Alchemist *self) {
  ((self)->model_balance) =
      (Init_sol_uint256_t(GET_ND_UINT(0, 256, "Alchemist:model_balance")));
}
void Alchemist_Method_transmute(struct Alchemist *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin,
                                sol_uint256_t func_user___mass) {
  sol_require((ERC20_Method_transferFrom(
                   &(self->user_LEAD), (self)->model_address,
                   Init_sol_uint256_t(0), blocknum, timestamp,
                   Init_sol_bool_t(1), origin, Init_sol_address_t((sender).v),
                   Init_sol_address_t(((self)->model_address).v),
                   Init_sol_uint256_t((func_user___mass).v)))
                  .v,
              "LEAD transfer failed");
  sol_require((ERC20_Method_transfer(&(self->user_GOLD), (self)->model_address,
                                     Init_sol_uint256_t(0), blocknum, timestamp,
                                     Init_sol_bool_t(1), origin,
                                     Init_sol_address_t((sender).v),
                                     Init_sol_uint256_t((func_user___mass).v)))
                  .v,
              "GOLD transfer failed");
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
struct Map_1 ND_Map_1(void) {
  struct Map_1 tmp;
  ((tmp).data_0) = (Init_sol_uint256_t(GET_ND_UINT(1, 256, "Map_1:data_0")));
  ((tmp).data_1) = (Init_sol_uint256_t(GET_ND_UINT(2, 256, "Map_1:data_1")));
  ((tmp).data_2) = (Init_sol_uint256_t(GET_ND_UINT(3, 256, "Map_1:data_2")));
  ((tmp).data_3) = (Init_sol_uint256_t(GET_ND_UINT(4, 256, "Map_1:data_3")));
  ((tmp).data_4) = (Init_sol_uint256_t(GET_ND_UINT(5, 256, "Map_1:data_4")));
  ((tmp).data_5) = (Init_sol_uint256_t(GET_ND_UINT(6, 256, "Map_1:data_5")));
  ((tmp).data_6) = (Init_sol_uint256_t(GET_ND_UINT(7, 256, "Map_1:data_6")));
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
void Set_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat) {
  Write_Map_1(arr, key_0, dat);
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
struct Map_2 ND_Map_2(void) {
  struct Map_2 tmp;
  ((tmp).data_0_0) =
      (Init_sol_uint256_t(GET_ND_UINT(8, 256, "Map_2:data_0_0")));
  ((tmp).data_0_1) =
      (Init_sol_uint256_t(GET_ND_UINT(9, 256, "Map_2:data_0_1")));
  ((tmp).data_0_2) =
      (Init_sol_uint256_t(GET_ND_UINT(10, 256, "Map_2:data_0_2")));
  ((tmp).data_0_3) =
      (Init_sol_uint256_t(GET_ND_UINT(11, 256, "Map_2:data_0_3")));
  ((tmp).data_0_4) =
      (Init_sol_uint256_t(GET_ND_UINT(12, 256, "Map_2:data_0_4")));
  ((tmp).data_0_5) =
      (Init_sol_uint256_t(GET_ND_UINT(13, 256, "Map_2:data_0_5")));
  ((tmp).data_0_6) =
      (Init_sol_uint256_t(GET_ND_UINT(14, 256, "Map_2:data_0_6")));
  ((tmp).data_1_0) =
      (Init_sol_uint256_t(GET_ND_UINT(15, 256, "Map_2:data_1_0")));
  ((tmp).data_1_1) =
      (Init_sol_uint256_t(GET_ND_UINT(16, 256, "Map_2:data_1_1")));
  ((tmp).data_1_2) =
      (Init_sol_uint256_t(GET_ND_UINT(17, 256, "Map_2:data_1_2")));
  ((tmp).data_1_3) =
      (Init_sol_uint256_t(GET_ND_UINT(18, 256, "Map_2:data_1_3")));
  ((tmp).data_1_4) =
      (Init_sol_uint256_t(GET_ND_UINT(19, 256, "Map_2:data_1_4")));
  ((tmp).data_1_5) =
      (Init_sol_uint256_t(GET_ND_UINT(20, 256, "Map_2:data_1_5")));
  ((tmp).data_1_6) =
      (Init_sol_uint256_t(GET_ND_UINT(21, 256, "Map_2:data_1_6")));
  ((tmp).data_2_0) =
      (Init_sol_uint256_t(GET_ND_UINT(22, 256, "Map_2:data_2_0")));
  ((tmp).data_2_1) =
      (Init_sol_uint256_t(GET_ND_UINT(23, 256, "Map_2:data_2_1")));
  ((tmp).data_2_2) =
      (Init_sol_uint256_t(GET_ND_UINT(24, 256, "Map_2:data_2_2")));
  ((tmp).data_2_3) =
      (Init_sol_uint256_t(GET_ND_UINT(25, 256, "Map_2:data_2_3")));
  ((tmp).data_2_4) =
      (Init_sol_uint256_t(GET_ND_UINT(26, 256, "Map_2:data_2_4")));
  ((tmp).data_2_5) =
      (Init_sol_uint256_t(GET_ND_UINT(27, 256, "Map_2:data_2_5")));
  ((tmp).data_2_6) =
      (Init_sol_uint256_t(GET_ND_UINT(28, 256, "Map_2:data_2_6")));
  ((tmp).data_3_0) =
      (Init_sol_uint256_t(GET_ND_UINT(29, 256, "Map_2:data_3_0")));
  ((tmp).data_3_1) =
      (Init_sol_uint256_t(GET_ND_UINT(30, 256, "Map_2:data_3_1")));
  ((tmp).data_3_2) =
      (Init_sol_uint256_t(GET_ND_UINT(31, 256, "Map_2:data_3_2")));
  ((tmp).data_3_3) =
      (Init_sol_uint256_t(GET_ND_UINT(32, 256, "Map_2:data_3_3")));
  ((tmp).data_3_4) =
      (Init_sol_uint256_t(GET_ND_UINT(33, 256, "Map_2:data_3_4")));
  ((tmp).data_3_5) =
      (Init_sol_uint256_t(GET_ND_UINT(34, 256, "Map_2:data_3_5")));
  ((tmp).data_3_6) =
      (Init_sol_uint256_t(GET_ND_UINT(35, 256, "Map_2:data_3_6")));
  ((tmp).data_4_0) =
      (Init_sol_uint256_t(GET_ND_UINT(36, 256, "Map_2:data_4_0")));
  ((tmp).data_4_1) =
      (Init_sol_uint256_t(GET_ND_UINT(37, 256, "Map_2:data_4_1")));
  ((tmp).data_4_2) =
      (Init_sol_uint256_t(GET_ND_UINT(38, 256, "Map_2:data_4_2")));
  ((tmp).data_4_3) =
      (Init_sol_uint256_t(GET_ND_UINT(39, 256, "Map_2:data_4_3")));
  ((tmp).data_4_4) =
      (Init_sol_uint256_t(GET_ND_UINT(40, 256, "Map_2:data_4_4")));
  ((tmp).data_4_5) =
      (Init_sol_uint256_t(GET_ND_UINT(41, 256, "Map_2:data_4_5")));
  ((tmp).data_4_6) =
      (Init_sol_uint256_t(GET_ND_UINT(42, 256, "Map_2:data_4_6")));
  ((tmp).data_5_0) =
      (Init_sol_uint256_t(GET_ND_UINT(43, 256, "Map_2:data_5_0")));
  ((tmp).data_5_1) =
      (Init_sol_uint256_t(GET_ND_UINT(44, 256, "Map_2:data_5_1")));
  ((tmp).data_5_2) =
      (Init_sol_uint256_t(GET_ND_UINT(45, 256, "Map_2:data_5_2")));
  ((tmp).data_5_3) =
      (Init_sol_uint256_t(GET_ND_UINT(46, 256, "Map_2:data_5_3")));
  ((tmp).data_5_4) =
      (Init_sol_uint256_t(GET_ND_UINT(47, 256, "Map_2:data_5_4")));
  ((tmp).data_5_5) =
      (Init_sol_uint256_t(GET_ND_UINT(48, 256, "Map_2:data_5_5")));
  ((tmp).data_5_6) =
      (Init_sol_uint256_t(GET_ND_UINT(49, 256, "Map_2:data_5_6")));
  ((tmp).data_6_0) =
      (Init_sol_uint256_t(GET_ND_UINT(50, 256, "Map_2:data_6_0")));
  ((tmp).data_6_1) =
      (Init_sol_uint256_t(GET_ND_UINT(51, 256, "Map_2:data_6_1")));
  ((tmp).data_6_2) =
      (Init_sol_uint256_t(GET_ND_UINT(52, 256, "Map_2:data_6_2")));
  ((tmp).data_6_3) =
      (Init_sol_uint256_t(GET_ND_UINT(53, 256, "Map_2:data_6_3")));
  ((tmp).data_6_4) =
      (Init_sol_uint256_t(GET_ND_UINT(54, 256, "Map_2:data_6_4")));
  ((tmp).data_6_5) =
      (Init_sol_uint256_t(GET_ND_UINT(55, 256, "Map_2:data_6_5")));
  ((tmp).data_6_6) =
      (Init_sol_uint256_t(GET_ND_UINT(56, 256, "Map_2:data_6_6")));
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
void Set_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
               sol_uint256_t dat) {
  Write_Map_2(arr, key_0, key_1, dat);
}
void Init_ERC20(struct ERC20 *self, sol_address_t sender, sol_uint256_t value,
                sol_uint256_t blocknum, sol_uint256_t timestamp,
                sol_bool_t paid, sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  ((self)->user___balances) = (ZeroInit_Map_1());
  ((self)->user___allowed) = (ZeroInit_Map_2());
  ((self)->user___totalSupply) = (Init_sol_uint256_t(0));
}
void ND_ERC20(struct ERC20 *self) {
  ((self)->model_balance) =
      (Init_sol_uint256_t(GET_ND_UINT(57, 256, "ERC20:model_balance")));
  ((self)->user___balances) = (ND_Map_1());
  ((self)->user___allowed) = (ND_Map_2());
  ((self)->user___totalSupply) =
      (Init_sol_uint256_t(GET_ND_UINT(58, 256, "ERC20:_totalSupply")));
}
sol_uint256_t ERC20_Method_totalSupply(struct ERC20 *self, sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___totalSupply).v); }
}
sol_uint256_t ERC20_Method_balanceOf(struct ERC20 *self, sol_address_t sender,
                                     sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin,
                                     sol_address_t func_user_owner) {
  {
    return Init_sol_uint256_t(
        (Read_Map_1(&(self->user___balances),
                    Init_sol_address_t((func_user_owner).v)))
            .v);
  }
}
sol_uint256_t ERC20_Method_allowance(struct ERC20 *self, sol_address_t sender,
                                     sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin,
                                     sol_address_t func_user_owner,
                                     sol_address_t func_user_spender) {
  {
    return Init_sol_uint256_t(
        (Read_Map_2(&(self->user___allowed),
                    Init_sol_address_t((func_user_owner).v),
                    Init_sol_address_t((func_user_spender).v)))
            .v);
  }
}
sol_bool_t ERC20_Method_transfer(struct ERC20 *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin,
                                 sol_address_t func_user_to,
                                 sol_uint256_t func_user_value) {
  ERC20_Method___transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_address_t((func_user_to).v),
      Init_sol_uint256_t((func_user_value).v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_approve(struct ERC20 *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin,
                                sol_address_t func_user_spender,
                                sol_uint256_t func_user_value) {
  sol_require(((func_user_spender).v) != (((int)(g_literal_address_0))), 0);
  Write_Map_2(&(self->user___allowed), Init_sol_address_t((sender).v),
              Init_sol_address_t((func_user_spender).v),
              Init_sol_uint256_t((func_user_value).v));
  sol_emit("Approval(msg.sender, spender, value)");
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_transferFrom(
    struct ERC20 *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_from,
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
  ERC20_Method___transfer(self, sender, value, blocknum, timestamp,
                          Init_sol_bool_t(0), origin,
                          Init_sol_address_t((func_user_from).v),
                          Init_sol_address_t((func_user_to).v),
                          Init_sol_uint256_t((func_user_value).v));
  sol_emit("Approval(from, msg.sender, _allowed[from][msg.sender])");
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_increaseAllowance(
    struct ERC20 *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
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
sol_bool_t ERC20_Method_decreaseAllowance(
    struct ERC20 *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
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
void ERC20_Method___transfer(struct ERC20 *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin, sol_address_t func_user_from,
                             sol_address_t func_user_to,
                             sol_uint256_t func_user_value) {
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
void run_model(void) {
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(105, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(106, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct Alchemist contract_0;
  struct ERC20 *contract_1;
  struct ERC20 *contract_2;
  (g_literal_address_0) = (0);
  (((contract_0).model_address).v) = (1);
  (contract_1) = (&((contract_0).user_LEAD));
  (((contract_1)->model_address).v) = (2);
  (contract_2) = (&((contract_0).user_GOLD));
  (((contract_2)->model_address).v) = (3);
  smartace_log("[Initializing contract_0 and children]");
  if (GET_ND_RANGE(109, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(107, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(108, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(110, 4, 7, "sender"));
    sol_uint256_t value;
    ((value).v) = (0);
    Init_Alchemist(&(contract_0), sender, value, blocknum, timestamp, paid,
                   sender);
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    contract_1->user___balances = ND_Map_1();
    contract_1->user___allowed = ND_Map_2();
    contract_2->user___balances = ND_Map_1();
    contract_2->user___allowed = ND_Map_2();
    if (GET_ND_RANGE(113, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(111, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(112, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(114, 0, 17, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling transmute(_mass) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(59, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg__mass =
          Init_sol_uint256_t(GET_ND_UINT(60, 256, "_mass"));
      prev_lead = Read_Map_1(&contract_1->user___balances, sender);
      prev_gold = Read_Map_1(&contract_2->user___balances, sender);
      Alchemist_Method_transmute(&(contract_0), sender, value, blocknum,
                                 timestamp, paid, sender, arg__mass);
      post_lead = Read_Map_1(&contract_1->user___balances, sender);
      post_gold = Read_Map_1(&contract_2->user___balances, sender);
      sol_assert(post_lead.v == prev_lead.v - arg__mass.v, 0);
      sol_assert(post_gold.v == prev_gold.v + arg__mass.v, 0);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling totalSupply() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(61, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20_Method_totalSupply(contract_1, sender, value, blocknum, timestamp,
                               paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling balanceOf(owner) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(62, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(63, 0, 7, "owner"));
      ERC20_Method_balanceOf(contract_1, sender, value, blocknum, timestamp,
                             paid, sender, arg_owner);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling allowance(owner, spender) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(64, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(65, 0, 7, "owner"));
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(66, 0, 7, "spender"));
      ERC20_Method_allowance(contract_1, sender, value, blocknum, timestamp,
                             paid, sender, arg_owner, arg_spender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling transfer(to, value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(67, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(68, 0, 7, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(69, 256, "value"));
      ERC20_Method_transfer(contract_1, sender, value, blocknum, timestamp,
                            paid, sender, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling approve(spender, value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(70, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(71, 0, 7, "spender"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(72, 256, "value"));
      ERC20_Method_approve(contract_1, sender, value, blocknum, timestamp, paid,
                           sender, arg_spender, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling transferFrom(from, to, value) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(73, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_from =
          Init_sol_address_t(GET_ND_RANGE(74, 0, 7, "from"));
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(75, 0, 7, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(76, 256, "value"));
      ERC20_Method_transferFrom(contract_1, sender, value, blocknum, timestamp,
                                paid, sender, arg_from, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log(
          "[Calling increaseAllowance(spender, addedValue) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(77, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(78, 0, 7, "spender"));
      sol_uint256_t arg_addedValue =
          Init_sol_uint256_t(GET_ND_UINT(79, 256, "addedValue"));
      ERC20_Method_increaseAllowance(contract_1, sender, value, blocknum,
                                     timestamp, paid, sender, arg_spender,
                                     arg_addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling decreaseAllowance(spender, subtractedValue) on "
                   "contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(80, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(81, 0, 7, "spender"));
      sol_uint256_t arg_subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(82, 256, "subtractedValue"));
      ERC20_Method_decreaseAllowance(contract_1, sender, value, blocknum,
                                     timestamp, paid, sender, arg_spender,
                                     arg_subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling totalSupply() on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(83, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20_Method_totalSupply(contract_2, sender, value, blocknum, timestamp,
                               paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling balanceOf(owner) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(84, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(85, 0, 7, "owner"));
      ERC20_Method_balanceOf(contract_2, sender, value, blocknum, timestamp,
                             paid, sender, arg_owner);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling allowance(owner, spender) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(86, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(87, 0, 7, "owner"));
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(88, 0, 7, "spender"));
      ERC20_Method_allowance(contract_2, sender, value, blocknum, timestamp,
                             paid, sender, arg_owner, arg_spender);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log("[Calling transfer(to, value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(89, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(90, 0, 7, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(91, 256, "value"));
      ERC20_Method_transfer(contract_2, sender, value, blocknum, timestamp,
                            paid, sender, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log("[Calling approve(spender, value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(92, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(93, 0, 7, "spender"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(94, 256, "value"));
      ERC20_Method_approve(contract_2, sender, value, blocknum, timestamp, paid,
                           sender, arg_spender, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log("[Calling transferFrom(from, to, value) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(95, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_from =
          Init_sol_address_t(GET_ND_RANGE(96, 0, 7, "from"));
      sol_address_t arg_to = Init_sol_address_t(GET_ND_RANGE(97, 0, 7, "to"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(98, 256, "value"));
      ERC20_Method_transferFrom(contract_2, sender, value, blocknum, timestamp,
                                paid, sender, arg_from, arg_to, arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 15: {
      smartace_log(
          "[Calling increaseAllowance(spender, addedValue) on contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(99, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(100, 0, 7, "spender"));
      sol_uint256_t arg_addedValue =
          Init_sol_uint256_t(GET_ND_UINT(101, 256, "addedValue"));
      ERC20_Method_increaseAllowance(contract_2, sender, value, blocknum,
                                     timestamp, paid, sender, arg_spender,
                                     arg_addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 16: {
      smartace_log("[Calling decreaseAllowance(spender, subtractedValue) on "
                   "contract_2]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(102, 4, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(103, 0, 7, "spender"));
      sol_uint256_t arg_subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(104, 256, "subtractedValue"));
      ERC20_Method_decreaseAllowance(contract_2, sender, value, blocknum,
                                     timestamp, paid, sender, arg_spender,
                                     arg_subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    default: { sol_require(0, "Model failure, next_call out of bounds."); }
    }
  }
}
