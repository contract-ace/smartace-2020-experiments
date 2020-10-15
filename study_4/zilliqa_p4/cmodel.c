#include "cmodel.h"
sol_raw_uint160_t g_literal_address_0;
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
struct ZilliqaToken {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_bool_t user_pausedPublic;
  sol_bool_t user_pausedOwnerAdmin;
  sol_address_t user_admin;
  sol_address_t user_owner;
  struct Map_2 user_allowed;
  struct Map_1 user_balances;
  sol_uint256_t user_totalSupply;
};
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
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
      (Init_sol_uint256_t(GET_ND_UINT(0, 256, "Map_2:data_0_0")));
  ((tmp).data_0_1) =
      (Init_sol_uint256_t(GET_ND_UINT(1, 256, "Map_2:data_0_1")));
  ((tmp).data_0_2) =
      (Init_sol_uint256_t(GET_ND_UINT(2, 256, "Map_2:data_0_2")));
  ((tmp).data_0_3) =
      (Init_sol_uint256_t(GET_ND_UINT(3, 256, "Map_2:data_0_3")));
  ((tmp).data_0_4) =
      (Init_sol_uint256_t(GET_ND_UINT(4, 256, "Map_2:data_0_4")));
  ((tmp).data_0_5) =
      (Init_sol_uint256_t(GET_ND_UINT(5, 256, "Map_2:data_0_5")));
  ((tmp).data_0_6) =
      (Init_sol_uint256_t(GET_ND_UINT(6, 256, "Map_2:data_0_6")));
  ((tmp).data_1_0) =
      (Init_sol_uint256_t(GET_ND_UINT(7, 256, "Map_2:data_1_0")));
  ((tmp).data_1_1) =
      (Init_sol_uint256_t(GET_ND_UINT(8, 256, "Map_2:data_1_1")));
  ((tmp).data_1_2) =
      (Init_sol_uint256_t(GET_ND_UINT(9, 256, "Map_2:data_1_2")));
  ((tmp).data_1_3) =
      (Init_sol_uint256_t(GET_ND_UINT(10, 256, "Map_2:data_1_3")));
  ((tmp).data_1_4) =
      (Init_sol_uint256_t(GET_ND_UINT(11, 256, "Map_2:data_1_4")));
  ((tmp).data_1_5) =
      (Init_sol_uint256_t(GET_ND_UINT(12, 256, "Map_2:data_1_5")));
  ((tmp).data_1_6) =
      (Init_sol_uint256_t(GET_ND_UINT(13, 256, "Map_2:data_1_6")));
  ((tmp).data_2_0) =
      (Init_sol_uint256_t(GET_ND_UINT(14, 256, "Map_2:data_2_0")));
  ((tmp).data_2_1) =
      (Init_sol_uint256_t(GET_ND_UINT(15, 256, "Map_2:data_2_1")));
  ((tmp).data_2_2) =
      (Init_sol_uint256_t(GET_ND_UINT(16, 256, "Map_2:data_2_2")));
  ((tmp).data_2_3) =
      (Init_sol_uint256_t(GET_ND_UINT(17, 256, "Map_2:data_2_3")));
  ((tmp).data_2_4) =
      (Init_sol_uint256_t(GET_ND_UINT(18, 256, "Map_2:data_2_4")));
  ((tmp).data_2_5) =
      (Init_sol_uint256_t(GET_ND_UINT(19, 256, "Map_2:data_2_5")));
  ((tmp).data_2_6) =
      (Init_sol_uint256_t(GET_ND_UINT(20, 256, "Map_2:data_2_6")));
  ((tmp).data_3_0) =
      (Init_sol_uint256_t(GET_ND_UINT(21, 256, "Map_2:data_3_0")));
  ((tmp).data_3_1) =
      (Init_sol_uint256_t(GET_ND_UINT(22, 256, "Map_2:data_3_1")));
  ((tmp).data_3_2) =
      (Init_sol_uint256_t(GET_ND_UINT(23, 256, "Map_2:data_3_2")));
  ((tmp).data_3_3) =
      (Init_sol_uint256_t(GET_ND_UINT(24, 256, "Map_2:data_3_3")));
  ((tmp).data_3_4) =
      (Init_sol_uint256_t(GET_ND_UINT(25, 256, "Map_2:data_3_4")));
  ((tmp).data_3_5) =
      (Init_sol_uint256_t(GET_ND_UINT(26, 256, "Map_2:data_3_5")));
  ((tmp).data_3_6) =
      (Init_sol_uint256_t(GET_ND_UINT(27, 256, "Map_2:data_3_6")));
  ((tmp).data_4_0) =
      (Init_sol_uint256_t(GET_ND_UINT(28, 256, "Map_2:data_4_0")));
  ((tmp).data_4_1) =
      (Init_sol_uint256_t(GET_ND_UINT(29, 256, "Map_2:data_4_1")));
  ((tmp).data_4_2) =
      (Init_sol_uint256_t(GET_ND_UINT(30, 256, "Map_2:data_4_2")));
  ((tmp).data_4_3) =
      (Init_sol_uint256_t(GET_ND_UINT(31, 256, "Map_2:data_4_3")));
  ((tmp).data_4_4) =
      (Init_sol_uint256_t(GET_ND_UINT(32, 256, "Map_2:data_4_4")));
  ((tmp).data_4_5) =
      (Init_sol_uint256_t(GET_ND_UINT(33, 256, "Map_2:data_4_5")));
  ((tmp).data_4_6) =
      (Init_sol_uint256_t(GET_ND_UINT(34, 256, "Map_2:data_4_6")));
  ((tmp).data_5_0) =
      (Init_sol_uint256_t(GET_ND_UINT(35, 256, "Map_2:data_5_0")));
  ((tmp).data_5_1) =
      (Init_sol_uint256_t(GET_ND_UINT(36, 256, "Map_2:data_5_1")));
  ((tmp).data_5_2) =
      (Init_sol_uint256_t(GET_ND_UINT(37, 256, "Map_2:data_5_2")));
  ((tmp).data_5_3) =
      (Init_sol_uint256_t(GET_ND_UINT(38, 256, "Map_2:data_5_3")));
  ((tmp).data_5_4) =
      (Init_sol_uint256_t(GET_ND_UINT(39, 256, "Map_2:data_5_4")));
  ((tmp).data_5_5) =
      (Init_sol_uint256_t(GET_ND_UINT(40, 256, "Map_2:data_5_5")));
  ((tmp).data_5_6) =
      (Init_sol_uint256_t(GET_ND_UINT(41, 256, "Map_2:data_5_6")));
  ((tmp).data_6_0) =
      (Init_sol_uint256_t(GET_ND_UINT(42, 256, "Map_2:data_6_0")));
  ((tmp).data_6_1) =
      (Init_sol_uint256_t(GET_ND_UINT(43, 256, "Map_2:data_6_1")));
  ((tmp).data_6_2) =
      (Init_sol_uint256_t(GET_ND_UINT(44, 256, "Map_2:data_6_2")));
  ((tmp).data_6_3) =
      (Init_sol_uint256_t(GET_ND_UINT(45, 256, "Map_2:data_6_3")));
  ((tmp).data_6_4) =
      (Init_sol_uint256_t(GET_ND_UINT(46, 256, "Map_2:data_6_4")));
  ((tmp).data_6_5) =
      (Init_sol_uint256_t(GET_ND_UINT(47, 256, "Map_2:data_6_5")));
  ((tmp).data_6_6) =
      (Init_sol_uint256_t(GET_ND_UINT(48, 256, "Map_2:data_6_6")));
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
  ((tmp).data_0) = (Init_sol_uint256_t(GET_ND_UINT(49, 256, "Map_1:data_0")));
  ((tmp).data_1) = (Init_sol_uint256_t(GET_ND_UINT(50, 256, "Map_1:data_1")));
  ((tmp).data_2) = (Init_sol_uint256_t(GET_ND_UINT(51, 256, "Map_1:data_2")));
  ((tmp).data_3) = (Init_sol_uint256_t(GET_ND_UINT(52, 256, "Map_1:data_3")));
  ((tmp).data_4) = (Init_sol_uint256_t(GET_ND_UINT(53, 256, "Map_1:data_4")));
  ((tmp).data_5) = (Init_sol_uint256_t(GET_ND_UINT(54, 256, "Map_1:data_5")));
  ((tmp).data_6) = (Init_sol_uint256_t(GET_ND_UINT(55, 256, "Map_1:data_6")));
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
void ZilliqaToken_Constructor(struct ZilliqaToken *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin,
                              sol_address_t func_user___admin,
                              sol_uint256_t func_user___totalTokenAmount) {
  ((self->user_admin).v) = ((func_user___admin).v);
  ((self->user_totalSupply).v) = ((func_user___totalTokenAmount).v);
  Write_Map_1(&(self->user_balances), Init_sol_address_t((sender).v),
              Init_sol_uint256_t((func_user___totalTokenAmount).v));
  sol_emit("Transfer(address(0), msg.sender, _totalTokenAmount)");
}
void Init_ERC20Basic_For_ZilliqaToken(struct ZilliqaToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {
  ((self)->user_totalSupply) = (Init_sol_uint256_t(0));
}
void Init_ERC20_For_ZilliqaToken(struct ZilliqaToken *self,
                                 sol_address_t sender, sol_uint256_t value,
                                 sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin) {
  Init_ERC20Basic_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
}
void Init_BasicToken_For_ZilliqaToken(struct ZilliqaToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {
  Init_ERC20Basic_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
  ((self)->user_balances) = (ZeroInit_Map_1());
}
void Init_StandardToken_For_ZilliqaToken(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  Init_ERC20_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                              Init_sol_bool_t(0), origin);
  Init_BasicToken_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
  ((self)->user_allowed) = (ZeroInit_Map_2());
}
void Ownable_Constructor_For_ZilliqaToken(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Ownable_For_ZilliqaToken(struct ZilliqaToken *self,
                                   sol_address_t sender, sol_uint256_t value,
                                   sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin) {
  ((self)->user_owner) = (Init_sol_address_t(0));
  Ownable_Constructor_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                       Init_sol_bool_t(0), origin);
}
void Init_Pausable_For_ZilliqaToken(struct ZilliqaToken *self,
                                    sol_address_t sender, sol_uint256_t value,
                                    sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  Init_Ownable_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                Init_sol_bool_t(0), origin);
  ((self)->user_pausedPublic) = (Init_sol_bool_t(1));
  ((self)->user_pausedOwnerAdmin) = (Init_sol_bool_t(0));
  ((self)->user_admin) = (Init_sol_address_t(0));
}
void Init_PausableToken_For_ZilliqaToken(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  Init_StandardToken_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin);
  Init_Pausable_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                 Init_sol_bool_t(0), origin);
}
void Init_ZilliqaToken(struct ZilliqaToken *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin, sol_address_t user___admin,
                       sol_uint256_t user___totalTokenAmount) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_PausableToken_For_ZilliqaToken(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin);
  ZilliqaToken_Constructor(self, sender, value, blocknum, timestamp,
                           Init_sol_bool_t(0), origin, user___admin,
                           user___totalTokenAmount);
}
void ND_ZilliqaToken(struct ZilliqaToken *self) {
  ((self)->model_balance) =
      (Init_sol_uint256_t(GET_ND_UINT(56, 256, "ZilliqaToken:model_balance")));
  ((self)->user_pausedPublic) =
      (Init_sol_bool_t(GET_ND_RANGE(57, 0, 2, "ZilliqaToken:pausedPublic")));
  ((self)->user_pausedOwnerAdmin) = (Init_sol_bool_t(
      GET_ND_RANGE(58, 0, 2, "ZilliqaToken:pausedOwnerAdmin")));
  ((self)->user_admin) =
      (Init_sol_address_t(GET_ND_RANGE(59, 0, 7, "ZilliqaToken:admin")));
  ((self)->user_owner) =
      (Init_sol_address_t(GET_ND_RANGE(60, 0, 7, "ZilliqaToken:owner")));
  ((self)->user_allowed) = (ND_Map_2());
  ((self)->user_balances) = (ND_Map_1());
  ((self)->user_totalSupply) =
      (Init_sol_uint256_t(GET_ND_UINT(61, 256, "ZilliqaToken:totalSupply")));
}
sol_bool_t BasicToken_Method_For_ZilliqaToken_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (BasicToken_Method_For_ZilliqaToken_transfer(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_ZilliqaToken_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  if ((self->user_pausedPublic).v) {
    if (!((self->user_pausedOwnerAdmin).v)) {
      sol_require((((sender).v) == ((self->user_admin).v)) ||
                      (((sender).v) == ((self->user_owner).v)),
                  0);
    } else {
      sol_require(0, "Revert.");
    }
  }
  (func_model_rv) = (PausableToken_Method_1_For_ZilliqaToken_transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t ZilliqaToken_Method_1_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (PausableToken_Method_For_ZilliqaToken_transfer(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t ZilliqaToken_Method_transfer(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___to,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_address_t func_user_to = Init_sol_address_t((func_model___to).v);
  sol_require(((func_user_to).v) != (((int)(g_literal_address_0))), 0);
  sol_require(((func_user_to).v) != (((self)->model_address).v), 0);
  (func_model_rv) = (ZilliqaToken_Method_1_transfer(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_ZilliqaToken_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_ZilliqaToken_transferFrom(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___from).v),
             Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_ZilliqaToken_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  if ((self->user_pausedPublic).v) {
    if (!((self->user_pausedOwnerAdmin).v)) {
      sol_require((((sender).v) == ((self->user_admin).v)) ||
                      (((sender).v) == ((self->user_owner).v)),
                  0);
    } else {
      sol_require(0, "Revert.");
    }
  }
  (func_model_rv) = (PausableToken_Method_1_For_ZilliqaToken_transferFrom(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___from, func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t ZilliqaToken_Method_1_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (PausableToken_Method_For_ZilliqaToken_transferFrom(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___from).v),
             Init_sol_address_t((func_user___to).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t ZilliqaToken_Method_transferFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___from,
    sol_address_t func_model___to, sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  sol_address_t func_user_to = Init_sol_address_t((func_model___to).v);
  sol_require(((func_user_to).v) != (((int)(g_literal_address_0))), 0);
  sol_require(((func_user_to).v) != (((self)->model_address).v), 0);
  (func_model_rv) = (ZilliqaToken_Method_1_transferFrom(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___from, func_model___to, func_model___value));
  return func_model_rv;
}
sol_bool_t ZilliqaToken_Method_burn(struct ZilliqaToken *self,
                                    sol_address_t sender, sol_uint256_t value,
                                    sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin,
                                    sol_uint256_t func_user___value) {
  Write_Map_1(
      &(self->user_balances), Init_sol_address_t((sender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t((Read_Map_1(&(self->user_balances),
                                              Init_sol_address_t((sender).v)))
                                      .v),
               Init_sol_uint256_t((func_user___value).v)))
              .v));
  ((self->user_totalSupply).v) =
      ((SafeMath_Method_sub(Init_sol_uint256_t((self->user_totalSupply).v),
                            Init_sol_uint256_t((func_user___value).v)))
           .v);
  sol_emit("Burn(msg.sender, _value)");
  sol_emit("Transfer(msg.sender, address(0), _value)");
  { return Init_sol_bool_t(1); }
}
sol_bool_t ZilliqaToken_Method_burnFrom(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_uint256_t func_user___value) {
  sol_require((ZilliqaToken_Method_transferFrom(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin, Init_sol_address_t((func_user___from).v),
                   Init_sol_address_t((sender).v),
                   Init_sol_uint256_t((func_user___value).v)))
                  .v,
              0);
  {
    return Init_sol_bool_t(
        (ZilliqaToken_Method_burn(self, sender, value, blocknum, timestamp,
                                  Init_sol_bool_t(0), origin,
                                  Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
void ZilliqaToken_Method_1_changeAdmin(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newAdmin) {
  sol_emit("AdminTransferred(admin, newAdmin)");
  ((self->user_admin).v) = ((func_user_newAdmin).v);
}
void ZilliqaToken_Method_changeAdmin(struct ZilliqaToken *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin,
                                     sol_address_t func_model_newAdmin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  ZilliqaToken_Method_1_changeAdmin(self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin,
                                    func_model_newAdmin);
}
sol_bool_t StandardToken_Method_For_ZilliqaToken_approve(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value) {
  Write_Map_2(&(self->user_allowed), Init_sol_address_t((sender).v),
              Init_sol_address_t((func_user___spender).v),
              Init_sol_uint256_t((func_user___value).v));
  sol_emit("Approval(msg.sender, _spender, _value)");
  { return Init_sol_bool_t(1); }
}
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_approve(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value) {
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_ZilliqaToken_approve(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___value).v)))
            .v);
  }
}
sol_bool_t PausableToken_Method_For_ZilliqaToken_approve(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___value) {
  sol_bool_t func_model_rv;
  if ((self->user_pausedPublic).v) {
    if (!((self->user_pausedOwnerAdmin).v)) {
      sol_require((((sender).v) == ((self->user_admin).v)) ||
                      (((sender).v) == ((self->user_owner).v)),
                  0);
    } else {
      sol_require(0, "Revert.");
    }
  }
  (func_model_rv) = (PausableToken_Method_1_For_ZilliqaToken_approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___value));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_ZilliqaToken_increaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_increaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___addedValue) {
  sol_bool_t func_user_success = Init_sol_bool_t(0);
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_ZilliqaToken_increaseApproval(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___addedValue).v)))
            .v);
  }
  return func_user_success;
}
sol_bool_t PausableToken_Method_For_ZilliqaToken_increaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___addedValue) {
  sol_bool_t func_model_rv;
  if ((self->user_pausedPublic).v) {
    if (!((self->user_pausedOwnerAdmin).v)) {
      sol_require((((sender).v) == ((self->user_admin).v)) ||
                      (((sender).v) == ((self->user_owner).v)),
                  0);
    } else {
      sol_require(0, "Revert.");
    }
  }
  (func_model_rv) = (PausableToken_Method_1_For_ZilliqaToken_increaseApproval(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___addedValue));
  return func_model_rv;
}
sol_bool_t StandardToken_Method_For_ZilliqaToken_decreaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
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
sol_bool_t PausableToken_Method_1_For_ZilliqaToken_decreaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___subtractedValue) {
  sol_bool_t func_user_success = Init_sol_bool_t(0);
  {
    return Init_sol_bool_t(
        (StandardToken_Method_For_ZilliqaToken_decreaseApproval(
             self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
             origin, Init_sol_address_t((func_user___spender).v),
             Init_sol_uint256_t((func_user___subtractedValue).v)))
            .v);
  }
  return func_user_success;
}
sol_bool_t PausableToken_Method_For_ZilliqaToken_decreaseApproval(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model___spender,
    sol_uint256_t func_model___subtractedValue) {
  sol_bool_t func_model_rv;
  if ((self->user_pausedPublic).v) {
    if (!((self->user_pausedOwnerAdmin).v)) {
      sol_require((((sender).v) == ((self->user_admin).v)) ||
                      (((sender).v) == ((self->user_owner).v)),
                  0);
    } else {
      sol_require(0, "Revert.");
    }
  }
  (func_model_rv) = (PausableToken_Method_1_For_ZilliqaToken_decreaseApproval(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model___spender, func_model___subtractedValue));
  return func_model_rv;
}
void Pausable_Method_1_For_ZilliqaToken_pause(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_bool_t func_user_newPausedPublic,
    sol_bool_t func_user_newPausedOwnerAdmin) {
  sol_require(!((((func_user_newPausedPublic).v) == (0)) &&
                (((func_user_newPausedOwnerAdmin).v) == (1))),
              0);
  ((self->user_pausedPublic).v) = ((func_user_newPausedPublic).v);
  ((self->user_pausedOwnerAdmin).v) = ((func_user_newPausedOwnerAdmin).v);
  sol_emit("PausePublic(newPausedPublic)");
  sol_emit("PauseOwnerAdmin(newPausedOwnerAdmin)");
}
void Pausable_Method_For_ZilliqaToken_pause(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_bool_t func_model_newPausedPublic,
    sol_bool_t func_model_newPausedOwnerAdmin) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Pausable_Method_1_For_ZilliqaToken_pause(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_newPausedPublic, func_model_newPausedOwnerAdmin);
}
void Ownable_Method_1_For_ZilliqaToken_transferOwnership(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_newOwner) {
  sol_require(((func_user_newOwner).v) != (((int)(g_literal_address_0))), 0);
  sol_emit("OwnershipTransferred(owner, newOwner)");
  ((self->user_owner).v) = ((func_user_newOwner).v);
}
void Ownable_Method_For_ZilliqaToken_transferOwnership(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_newOwner) {
  sol_require(((sender).v) == ((self->user_owner).v), 0);
  Ownable_Method_1_For_ZilliqaToken_transferOwnership(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_newOwner);
}
sol_uint256_t StandardToken_Method_For_ZilliqaToken_allowance(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
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
sol_uint256_t BasicToken_Method_For_ZilliqaToken_balanceOf(
    struct ZilliqaToken *self, sol_address_t sender, sol_uint256_t value,
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
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(95, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(96, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct ZilliqaToken contract_0;
  (g_literal_address_0) = (0);
  (((contract_0).model_address).v) = (1);
  (((contract_0).user_admin).v) = (0);
  (((contract_0).user_owner).v) = (0);
  smartace_log("[Initializing contract_0 and children]");
  if (GET_ND_RANGE(99, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(97, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(98, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(100, 2, 7, "sender"));
    sol_uint256_t value;
    ((value).v) = (0);
    Init_ZilliqaToken(
        &(contract_0), sender, value, blocknum, timestamp, paid, sender,
        Init_sol_address_t(GET_ND_RANGE(101, 0, 7, "ZilliqaToken:_admin")),
        Init_sol_uint256_t(
            GET_ND_UINT(102, 256, "ZilliqaToken:_totalTokenAmount")));
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    if (GET_ND_RANGE(105, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(103, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(104, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(106, 0, 12, "next_call"));
    contract_0.user_balances = ND_Map_1();
    contract_0.user_allowed = ND_Map_2();
    switch (next_call) {
    case 0: {
      smartace_log("[Calling transfer(_to, _value) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(62, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(63, 0, 7, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(64, 256, "_value"));
      ZilliqaToken_Method_transfer(&(contract_0), sender, value, blocknum,
                                   timestamp, paid, sender, arg__to,
                                   arg__value);
      sol_assert(arg__to.v != 0, 0);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling transferFrom(_from, _to, _value) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(65, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(66, 0, 7, "_from"));
      sol_address_t arg__to = Init_sol_address_t(GET_ND_RANGE(67, 0, 7, "_to"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(68, 256, "_value"));
      ZilliqaToken_Method_transferFrom(&(contract_0), sender, value, blocknum,
                                       timestamp, paid, sender, arg__from,
                                       arg__to, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling burn(_value) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(69, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(70, 256, "_value"));
      ZilliqaToken_Method_burn(&(contract_0), sender, value, blocknum,
                               timestamp, paid, sender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling burnFrom(_from, _value) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(71, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__from =
          Init_sol_address_t(GET_ND_RANGE(72, 0, 7, "_from"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(73, 256, "_value"));
      ZilliqaToken_Method_burnFrom(&(contract_0), sender, value, blocknum,
                                   timestamp, paid, sender, arg__from,
                                   arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling changeAdmin(newAdmin) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(74, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newAdmin =
          Init_sol_address_t(GET_ND_RANGE(75, 0, 7, "newAdmin"));
      ZilliqaToken_Method_changeAdmin(&(contract_0), sender, value, blocknum,
                                      timestamp, paid, sender, arg_newAdmin);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling approve(_spender, _value) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(76, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(77, 0, 7, "_spender"));
      sol_uint256_t arg__value =
          Init_sol_uint256_t(GET_ND_UINT(78, 256, "_value"));
      PausableToken_Method_For_ZilliqaToken_approve(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__value);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log(
          "[Calling increaseApproval(_spender, _addedValue) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(79, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(80, 0, 7, "_spender"));
      sol_uint256_t arg__addedValue =
          Init_sol_uint256_t(GET_ND_UINT(81, 256, "_addedValue"));
      PausableToken_Method_For_ZilliqaToken_increaseApproval(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling decreaseApproval(_spender, _subtractedValue) on "
                   "contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(82, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(83, 0, 7, "_spender"));
      sol_uint256_t arg__subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(84, 256, "_subtractedValue"));
      PausableToken_Method_For_ZilliqaToken_decreaseApproval(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg__spender, arg__subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling pause(newPausedPublic, newPausedOwnerAdmin) on "
                   "contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(85, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_bool_t arg_newPausedPublic =
          Init_sol_bool_t(GET_ND_RANGE(86, 0, 2, "newPausedPublic"));
      sol_bool_t arg_newPausedOwnerAdmin =
          Init_sol_bool_t(GET_ND_RANGE(87, 0, 2, "newPausedOwnerAdmin"));
      Pausable_Method_For_ZilliqaToken_pause(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg_newPausedPublic, arg_newPausedOwnerAdmin);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling transferOwnership(newOwner) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(88, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_newOwner =
          Init_sol_address_t(GET_ND_RANGE(89, 0, 7, "newOwner"));
      Ownable_Method_For_ZilliqaToken_transferOwnership(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg_newOwner);
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling allowance(_owner, _spender) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(90, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(91, 0, 7, "_owner"));
      sol_address_t arg__spender =
          Init_sol_address_t(GET_ND_RANGE(92, 0, 7, "_spender"));
      StandardToken_Method_For_ZilliqaToken_allowance(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg__owner, arg__spender);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling balanceOf(_owner) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(93, 2, 7, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__owner =
          Init_sol_address_t(GET_ND_RANGE(94, 0, 7, "_owner"));
      BasicToken_Method_For_ZilliqaToken_balanceOf(&(contract_0), sender, value,
                                                   blocknum, timestamp, paid,
                                                   sender, arg__owner);
      smartace_log("[Call successful]");
      break;
    }
    default: { sol_require(0, "Model failure, next_call out of bounds."); }
    }
  }
}