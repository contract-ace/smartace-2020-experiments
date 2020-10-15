#include "cmodel.h"
sol_raw_uint160_t g_literal_address_0;
struct Map_3 {
  sol_bool_t data_0;
  sol_bool_t data_1;
  sol_bool_t data_2;
  sol_bool_t data_3;
  sol_bool_t data_4;
  sol_bool_t data_5;
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
};
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
struct Token {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct Roles_Struct_Role user___minters;
  sol_uint256_t user___name;
  sol_uint256_t user___symbol;
  sol_uint8_t user___decimals;
  struct Map_1 user___balances;
  struct Map_2 user___allowances;
  sol_uint256_t user___totalSupply;
};
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b);
struct Map_3 ZeroInit_Map_3(void);
struct Map_3 ND_Map_3(void);
sol_bool_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0);
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_bool_t dat);
void Set_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_bool_t dat);
struct Roles_Struct_Role ZeroInit_Roles_Struct_Role(void);
struct Roles_Struct_Role Init_Roles_Struct_Role(void);
struct Roles_Struct_Role ND_Roles_Struct_Role(void);
void Roles_Method_add(struct Roles_Struct_Role *func_user_role,
                      sol_address_t func_user_account);
void Roles_Method_remove(struct Roles_Struct_Role *func_user_role,
                         sol_address_t func_user_account);
sol_bool_t Roles_Method_has(struct Roles_Struct_Role *func_user_role,
                            sol_address_t func_user_account);
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
void ERC20_Method_For_Token___transfer(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_sender,
    sol_address_t func_user_recipient, sol_uint256_t func_user_amount);
void ERC20_Method_For_Token___mint(struct Token *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin,
                                   sol_address_t func_user_account,
                                   sol_uint256_t func_user_amount);
void ERC20_Method_For_Token___approve(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner,
    sol_address_t func_user_spender, sol_uint256_t func_user_value);
void MinterRole_Method_For_Token___addMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account);
void MinterRole_Method_For_Token___removeMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account);
sol_uint256_t SafeMath_Method_add(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) + ((func_user_b).v));
  sol_require(((func_user_c).v) >= ((func_user_a).v),
              "SafeMath: addition overflow");
  { return Init_sol_uint256_t((func_user_c).v); }
}
sol_uint256_t SafeMath_Method_sub(sol_uint256_t func_user_a,
                                  sol_uint256_t func_user_b) {
  sol_require(((func_user_b).v) <= ((func_user_a).v),
              "SafeMath: subtraction overflow");
  sol_uint256_t func_user_c =
      Init_sol_uint256_t(((func_user_a).v) - ((func_user_b).v));
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
  return tmp;
}
struct Map_3 ND_Map_3(void) {
  struct Map_3 tmp;
  ((tmp).data_0) = (Init_sol_bool_t(GET_ND_RANGE(0, 0, 2, "Map_3:data_0")));
  ((tmp).data_1) = (Init_sol_bool_t(GET_ND_RANGE(1, 0, 2, "Map_3:data_1")));
  ((tmp).data_2) = (Init_sol_bool_t(GET_ND_RANGE(2, 0, 2, "Map_3:data_2")));
  ((tmp).data_3) = (Init_sol_bool_t(GET_ND_RANGE(3, 0, 2, "Map_3:data_3")));
  ((tmp).data_4) = (Init_sol_bool_t(GET_ND_RANGE(4, 0, 2, "Map_3:data_4")));
  ((tmp).data_5) = (Init_sol_bool_t(GET_ND_RANGE(5, 0, 2, "Map_3:data_5")));
  return tmp;
}
sol_bool_t Read_Map_3(struct Map_3 *arr, sol_address_t key_0) {
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
  return Init_sol_bool_t(0);
}
void Write_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_bool_t dat) {
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
void Set_Map_3(struct Map_3 *arr, sol_address_t key_0, sol_bool_t dat) {
  Write_Map_3(arr, key_0, dat);
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
  ((tmp).user_bearer) = (ND_Map_3());
  return tmp;
}
void Roles_Method_add(struct Roles_Struct_Role *func_user_role,
                      sol_address_t func_user_account) {
  sol_require(!((Roles_Method_has(func_user_role,
                                  Init_sol_address_t((func_user_account).v)))
                    .v),
              "Roles: account already has role");
  Write_Map_3(&((func_user_role)->user_bearer),
              Init_sol_address_t((func_user_account).v), Init_sol_bool_t(1));
}
void Roles_Method_remove(struct Roles_Struct_Role *func_user_role,
                         sol_address_t func_user_account) {
  sol_require((Roles_Method_has(func_user_role,
                                Init_sol_address_t((func_user_account).v)))
                  .v,
              "Roles: account does not have role");
  Write_Map_3(&((func_user_role)->user_bearer),
              Init_sol_address_t((func_user_account).v), Init_sol_bool_t(0));
}
sol_bool_t Roles_Method_has(struct Roles_Struct_Role *func_user_role,
                            sol_address_t func_user_account) {
  sol_require(((func_user_account).v) != (((int)(g_literal_address_0))),
              "Roles: account is the zero address");
  {
    return Init_sol_bool_t(
        (Read_Map_3(&((func_user_role)->user_bearer),
                    Init_sol_address_t((func_user_account).v)))
            .v);
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
struct Map_1 ND_Map_1(void) {
  struct Map_1 tmp;
  ((tmp).data_0) = (Init_sol_uint256_t(GET_ND_UINT(6, 256, "Map_1:data_0")));
  ((tmp).data_1) = (Init_sol_uint256_t(GET_ND_UINT(7, 256, "Map_1:data_1")));
  ((tmp).data_2) = (Init_sol_uint256_t(GET_ND_UINT(8, 256, "Map_1:data_2")));
  ((tmp).data_3) = (Init_sol_uint256_t(GET_ND_UINT(9, 256, "Map_1:data_3")));
  ((tmp).data_4) = (Init_sol_uint256_t(GET_ND_UINT(10, 256, "Map_1:data_4")));
  ((tmp).data_5) = (Init_sol_uint256_t(GET_ND_UINT(11, 256, "Map_1:data_5")));
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
struct Map_2 ND_Map_2(void) {
  struct Map_2 tmp;
  ((tmp).data_0_0) =
      (Init_sol_uint256_t(GET_ND_UINT(12, 256, "Map_2:data_0_0")));
  ((tmp).data_0_1) =
      (Init_sol_uint256_t(GET_ND_UINT(13, 256, "Map_2:data_0_1")));
  ((tmp).data_0_2) =
      (Init_sol_uint256_t(GET_ND_UINT(14, 256, "Map_2:data_0_2")));
  ((tmp).data_0_3) =
      (Init_sol_uint256_t(GET_ND_UINT(15, 256, "Map_2:data_0_3")));
  ((tmp).data_0_4) =
      (Init_sol_uint256_t(GET_ND_UINT(16, 256, "Map_2:data_0_4")));
  ((tmp).data_0_5) =
      (Init_sol_uint256_t(GET_ND_UINT(17, 256, "Map_2:data_0_5")));
  ((tmp).data_1_0) =
      (Init_sol_uint256_t(GET_ND_UINT(18, 256, "Map_2:data_1_0")));
  ((tmp).data_1_1) =
      (Init_sol_uint256_t(GET_ND_UINT(19, 256, "Map_2:data_1_1")));
  ((tmp).data_1_2) =
      (Init_sol_uint256_t(GET_ND_UINT(20, 256, "Map_2:data_1_2")));
  ((tmp).data_1_3) =
      (Init_sol_uint256_t(GET_ND_UINT(21, 256, "Map_2:data_1_3")));
  ((tmp).data_1_4) =
      (Init_sol_uint256_t(GET_ND_UINT(22, 256, "Map_2:data_1_4")));
  ((tmp).data_1_5) =
      (Init_sol_uint256_t(GET_ND_UINT(23, 256, "Map_2:data_1_5")));
  ((tmp).data_2_0) =
      (Init_sol_uint256_t(GET_ND_UINT(24, 256, "Map_2:data_2_0")));
  ((tmp).data_2_1) =
      (Init_sol_uint256_t(GET_ND_UINT(25, 256, "Map_2:data_2_1")));
  ((tmp).data_2_2) =
      (Init_sol_uint256_t(GET_ND_UINT(26, 256, "Map_2:data_2_2")));
  ((tmp).data_2_3) =
      (Init_sol_uint256_t(GET_ND_UINT(27, 256, "Map_2:data_2_3")));
  ((tmp).data_2_4) =
      (Init_sol_uint256_t(GET_ND_UINT(28, 256, "Map_2:data_2_4")));
  ((tmp).data_2_5) =
      (Init_sol_uint256_t(GET_ND_UINT(29, 256, "Map_2:data_2_5")));
  ((tmp).data_3_0) =
      (Init_sol_uint256_t(GET_ND_UINT(30, 256, "Map_2:data_3_0")));
  ((tmp).data_3_1) =
      (Init_sol_uint256_t(GET_ND_UINT(31, 256, "Map_2:data_3_1")));
  ((tmp).data_3_2) =
      (Init_sol_uint256_t(GET_ND_UINT(32, 256, "Map_2:data_3_2")));
  ((tmp).data_3_3) =
      (Init_sol_uint256_t(GET_ND_UINT(33, 256, "Map_2:data_3_3")));
  ((tmp).data_3_4) =
      (Init_sol_uint256_t(GET_ND_UINT(34, 256, "Map_2:data_3_4")));
  ((tmp).data_3_5) =
      (Init_sol_uint256_t(GET_ND_UINT(35, 256, "Map_2:data_3_5")));
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
  ((tmp).data_5_0) =
      (Init_sol_uint256_t(GET_ND_UINT(42, 256, "Map_2:data_5_0")));
  ((tmp).data_5_1) =
      (Init_sol_uint256_t(GET_ND_UINT(43, 256, "Map_2:data_5_1")));
  ((tmp).data_5_2) =
      (Init_sol_uint256_t(GET_ND_UINT(44, 256, "Map_2:data_5_2")));
  ((tmp).data_5_3) =
      (Init_sol_uint256_t(GET_ND_UINT(45, 256, "Map_2:data_5_3")));
  ((tmp).data_5_4) =
      (Init_sol_uint256_t(GET_ND_UINT(46, 256, "Map_2:data_5_4")));
  ((tmp).data_5_5) =
      (Init_sol_uint256_t(GET_ND_UINT(47, 256, "Map_2:data_5_5")));
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
void Set_Map_2(struct Map_2 *arr, sol_address_t key_0, sol_address_t key_1,
               sol_uint256_t dat) {
  Write_Map_2(arr, key_0, key_1, dat);
}
void Token_Constructor(struct Token *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin) {}
void Init_ERC20_For_Token(struct Token *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin) {
  ((self)->user___balances) = (ZeroInit_Map_1());
  ((self)->user___allowances) = (ZeroInit_Map_2());
  ((self)->user___totalSupply) = (Init_sol_uint256_t(0));
}
void ERC20Detailed_Constructor_For_Token(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t func_user_name,
    sol_uint256_t func_user_symbol, sol_uint8_t func_user_decimals) {
  ((self->user___name).v) = ((func_user_name).v);
  ((self->user___symbol).v) = ((func_user_symbol).v);
  ((self->user___decimals).v) = ((func_user_decimals).v);
}
void Init_ERC20Detailed_For_Token(struct Token *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin, sol_uint256_t user_name,
                                  sol_uint256_t user_symbol,
                                  sol_uint8_t user_decimals) {
  ((self)->user___name) = (Init_sol_uint256_t(0));
  ((self)->user___symbol) = (Init_sol_uint256_t(0));
  ((self)->user___decimals) = (Init_sol_uint8_t(0));
  ERC20Detailed_Constructor_For_Token(self, sender, value, blocknum, timestamp,
                                      Init_sol_bool_t(0), origin, user_name,
                                      user_symbol, user_decimals);
}
void MinterRole_Constructor_For_Token(struct Token *self, sol_address_t sender,
                                      sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin) {
  MinterRole_Method_For_Token___addMinter(self, sender, value, blocknum,
                                          timestamp, Init_sol_bool_t(0), origin,
                                          Init_sol_address_t((sender).v));
}
void Init_MinterRole_For_Token(struct Token *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin) {
  ((self)->user___minters) = (ZeroInit_Roles_Struct_Role());
  MinterRole_Constructor_For_Token(self, sender, value, blocknum, timestamp,
                                   Init_sol_bool_t(0), origin);
}
void Init_ERC20Mintable_For_Token(struct Token *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin) {
  Init_ERC20_For_Token(self, sender, value, blocknum, timestamp,
                       Init_sol_bool_t(0), origin);
  Init_MinterRole_For_Token(self, sender, value, blocknum, timestamp,
                            Init_sol_bool_t(0), origin);
}
void Init_Token(struct Token *self, sol_address_t sender, sol_uint256_t value,
                sol_uint256_t blocknum, sol_uint256_t timestamp,
                sol_bool_t paid, sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Init_ERC20_For_Token(self, sender, value, blocknum, timestamp,
                       Init_sol_bool_t(0), origin);
  Init_ERC20Detailed_For_Token(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_uint256_t(3410405211892838846),
      Init_sol_uint256_t(6974095845037180476), Init_sol_uint8_t(18));
  Init_ERC20Mintable_For_Token(self, sender, value, blocknum, timestamp,
                               Init_sol_bool_t(0), origin);
  Token_Constructor(self, sender, value, blocknum, timestamp,
                    Init_sol_bool_t(0), origin);
}
void ND_Token(struct Token *self) {
  ((self)->model_balance) =
      (Init_sol_uint256_t(GET_ND_UINT(48, 256, "Token:model_balance")));
  ((self)->user___minters) = (ND_Roles_Struct_Role());
  ((self)->user___name) =
      (Init_sol_uint256_t(GET_ND_UINT(49, 256, "Token:_name")));
  ((self)->user___symbol) =
      (Init_sol_uint256_t(GET_ND_UINT(50, 256, "Token:_symbol")));
  ((self)->user___decimals) =
      (Init_sol_uint8_t(GET_ND_UINT(51, 8, "Token:_decimals")));
  ((self)->user___balances) = (ND_Map_1());
  ((self)->user___allowances) = (ND_Map_2());
  ((self)->user___totalSupply) =
      (Init_sol_uint256_t(GET_ND_UINT(52, 256, "Token:_totalSupply")));
}
sol_bool_t ERC20Mintable_Method_1_For_Token_mint(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account,
    sol_uint256_t func_user_amount) {
  ERC20_Method_For_Token___mint(self, sender, value, blocknum, timestamp,
                                Init_sol_bool_t(0), origin,
                                Init_sol_address_t((func_user_account).v),
                                Init_sol_uint256_t((func_user_amount).v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20Mintable_Method_For_Token_mint(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_account,
    sol_uint256_t func_model_amount) {
  sol_bool_t func_model_rv;
  sol_require((MinterRole_Method_For_Token_isMinter(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin, Init_sol_address_t((sender).v)))
                  .v,
              "MinterRole: caller does not have the Minter role");
  (func_model_rv) = (ERC20Mintable_Method_1_For_Token_mint(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      func_model_account, func_model_amount));
  return func_model_rv;
}
sol_bool_t MinterRole_Method_For_Token_isMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account) {
  {
    return Init_sol_bool_t(
        (Roles_Method_has(&(self->user___minters),
                          Init_sol_address_t((func_user_account).v)))
            .v);
  }
}
void MinterRole_Method_1_For_Token_addMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account) {
  MinterRole_Method_For_Token___addMinter(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_account).v));
}
void MinterRole_Method_For_Token_addMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_account) {
  sol_require((MinterRole_Method_For_Token_isMinter(
                   self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin, Init_sol_address_t((sender).v)))
                  .v,
              "MinterRole: caller does not have the Minter role");
  MinterRole_Method_1_For_Token_addMinter(self, sender, value, blocknum,
                                          timestamp, Init_sol_bool_t(0), origin,
                                          func_model_account);
}
void MinterRole_Method_For_Token_renounceMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  MinterRole_Method_For_Token___removeMinter(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v));
}
sol_uint256_t
ERC20Detailed_Method_For_Token_name(struct Token *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___name).v); }
}
sol_uint256_t ERC20Detailed_Method_For_Token_symbol(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___symbol).v); }
}
sol_uint8_t ERC20Detailed_Method_For_Token_decimals(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin) {
  { return Init_sol_uint8_t((self->user___decimals).v); }
}
sol_uint256_t
ERC20_Method_For_Token_totalSupply(struct Token *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin) {
  { return Init_sol_uint256_t((self->user___totalSupply).v); }
}
sol_uint256_t ERC20_Method_For_Token_balanceOf(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account) {
  {
    return Init_sol_uint256_t(
        (Read_Map_1(&(self->user___balances),
                    Init_sol_address_t((func_user_account).v)))
            .v);
  }
}
sol_bool_t ERC20_Method_For_Token_transfer(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_recipient,
    sol_uint256_t func_user_amount) {
  ERC20_Method_For_Token___transfer(self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin,
                                    Init_sol_address_t((sender).v),
                                    Init_sol_address_t((func_user_recipient).v),
                                    Init_sol_uint256_t((func_user_amount).v));
  { return Init_sol_bool_t(1); }
}
sol_uint256_t ERC20_Method_For_Token_allowance(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner,
    sol_address_t func_user_spender) {
  {
    return Init_sol_uint256_t(
        (Read_Map_2(&(self->user___allowances),
                    Init_sol_address_t((func_user_owner).v),
                    Init_sol_address_t((func_user_spender).v)))
            .v);
  }
}
sol_bool_t ERC20_Method_For_Token_approve(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_value) {
  ERC20_Method_For_Token___approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_address_t((func_user_spender).v),
      Init_sol_uint256_t((func_user_value).v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_Token_transferFrom(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_sender,
    sol_address_t func_user_recipient, sol_uint256_t func_user_amount) {
  ERC20_Method_For_Token___transfer(self, sender, value, blocknum, timestamp,
                                    Init_sol_bool_t(0), origin,
                                    Init_sol_address_t((func_user_sender).v),
                                    Init_sol_address_t((func_user_recipient).v),
                                    Init_sol_uint256_t((func_user_amount).v));
  ERC20_Method_For_Token___approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((func_user_sender).v), Init_sol_address_t((sender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user___allowances),
                               Init_sol_address_t((func_user_sender).v),
                               Init_sol_address_t((sender).v)))
                       .v),
               Init_sol_uint256_t((func_user_amount).v)))
              .v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_Token_increaseAllowance(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_addedValue) {
  ERC20_Method_For_Token___approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_address_t((func_user_spender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user___allowances),
                               Init_sol_address_t((sender).v),
                               Init_sol_address_t((func_user_spender).v)))
                       .v),
               Init_sol_uint256_t((func_user_addedValue).v)))
              .v));
  { return Init_sol_bool_t(1); }
}
sol_bool_t ERC20_Method_For_Token_decreaseAllowance(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_spender,
    sol_uint256_t func_user_subtractedValue) {
  ERC20_Method_For_Token___approve(
      self, sender, value, blocknum, timestamp, Init_sol_bool_t(0), origin,
      Init_sol_address_t((sender).v), Init_sol_address_t((func_user_spender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_2(&(self->user___allowances),
                               Init_sol_address_t((sender).v),
                               Init_sol_address_t((func_user_spender).v)))
                       .v),
               Init_sol_uint256_t((func_user_subtractedValue).v)))
              .v));
  { return Init_sol_bool_t(1); }
}
void ERC20_Method_For_Token___transfer(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_sender,
    sol_address_t func_user_recipient, sol_uint256_t func_user_amount) {
  sol_require(((func_user_sender).v) != (((int)(g_literal_address_0))),
              "ERC20: transfer from the zero address");
  sol_require(((func_user_recipient).v) != (((int)(g_literal_address_0))),
              "ERC20: transfer to the zero address");
  Write_Map_1(
      &(self->user___balances), Init_sol_address_t((func_user_sender).v),
      Init_sol_uint256_t(
          (SafeMath_Method_sub(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user___balances),
                               Init_sol_address_t((func_user_sender).v)))
                       .v),
               Init_sol_uint256_t((func_user_amount).v)))
              .v));
  Write_Map_1(
      &(self->user___balances), Init_sol_address_t((func_user_recipient).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user___balances),
                               Init_sol_address_t((func_user_recipient).v)))
                       .v),
               Init_sol_uint256_t((func_user_amount).v)))
              .v));
  sol_emit("Transfer(sender, recipient, amount)");
}
void ERC20_Method_For_Token___mint(struct Token *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin,
                                   sol_address_t func_user_account,
                                   sol_uint256_t func_user_amount) {
  sol_require(((func_user_account).v) != (((int)(g_literal_address_0))),
              "ERC20: mint to the zero address");
  ((self->user___totalSupply).v) =
      ((SafeMath_Method_add(Init_sol_uint256_t((self->user___totalSupply).v),
                            Init_sol_uint256_t((func_user_amount).v)))
           .v);
  Write_Map_1(
      &(self->user___balances), Init_sol_address_t((func_user_account).v),
      Init_sol_uint256_t(
          (SafeMath_Method_add(
               Init_sol_uint256_t(
                   (Read_Map_1(&(self->user___balances),
                               Init_sol_address_t((func_user_account).v)))
                       .v),
               Init_sol_uint256_t((func_user_amount).v)))
              .v));
  sol_emit("Transfer(address(0), account, amount)");
}
void ERC20_Method_For_Token___approve(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_owner,
    sol_address_t func_user_spender, sol_uint256_t func_user_value) {
  sol_require(((func_user_owner).v) != (((int)(g_literal_address_0))),
              "ERC20: approve from the zero address");
  sol_require(((func_user_spender).v) != (((int)(g_literal_address_0))),
              "ERC20: approve to the zero address");
  Write_Map_2(&(self->user___allowances),
              Init_sol_address_t((func_user_owner).v),
              Init_sol_address_t((func_user_spender).v),
              Init_sol_uint256_t((func_user_value).v));
  sol_emit("Approval(owner, spender, value)");
}
void MinterRole_Method_For_Token___addMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account) {
  Roles_Method_add(&(self->user___minters),
                   Init_sol_address_t((func_user_account).v));
  sol_emit("MinterAdded(account)");
}
void MinterRole_Method_For_Token___removeMinter(
    struct Token *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_account) {
  Roles_Method_remove(&(self->user___minters),
                      Init_sol_address_t((func_user_account).v));
  sol_emit("MinterRemoved(account)");
}
void run_model(void) {
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(86, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(87, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct Token contract_0;
  (g_literal_address_0) = (0);
  (((contract_0).model_address).v) = (1);
  smartace_log("[Initializing contract_0 and children]");
  if (GET_ND_RANGE(90, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(88, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(89, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(91, 2, 6, "sender"));
    sol_uint256_t value;
    ((value).v) = (0);
    Init_Token(&(contract_0), sender, value, blocknum, timestamp, paid, sender);
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    if (GET_ND_RANGE(94, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(92, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(93, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(95, 0, 15, "next_call"));
    contract_0.user___balances = ND_Map_1();
    contract_0.user___allowances = ND_Map_2();
    contract_0.user___minters.user_bearer = ND_Map_3();
    switch (next_call) {
    case 0: {
      smartace_log("[Calling mint(account, amount) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(53, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_account =
          Init_sol_address_t(GET_ND_RANGE(54, 0, 6, "account"));
      sol_uint256_t arg_amount =
          Init_sol_uint256_t(GET_ND_UINT(55, 256, "amount"));
      ERC20Mintable_Method_For_Token_mint(&(contract_0), sender, value,
                                          blocknum, timestamp, paid, sender,
                                          arg_account, arg_amount);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling isMinter(account) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(56, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_account =
          Init_sol_address_t(GET_ND_RANGE(57, 0, 6, "account"));
      MinterRole_Method_For_Token_isMinter(&(contract_0), sender, value,
                                           blocknum, timestamp, paid, sender,
                                           arg_account);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling addMinter(account) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(58, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_account =
          Init_sol_address_t(GET_ND_RANGE(59, 0, 6, "account"));
      MinterRole_Method_For_Token_addMinter(&(contract_0), sender, value,
                                            blocknum, timestamp, paid, sender,
                                            arg_account);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling renounceMinter() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(60, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      MinterRole_Method_For_Token_renounceMinter(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling name() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(61, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_Token_name(&(contract_0), sender, value,
                                          blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling symbol() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(62, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_Token_symbol(&(contract_0), sender, value,
                                            blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 6: {
      smartace_log("[Calling decimals() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(63, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20Detailed_Method_For_Token_decimals(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 7: {
      smartace_log("[Calling totalSupply() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(64, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      ERC20_Method_For_Token_totalSupply(&(contract_0), sender, value, blocknum,
                                         timestamp, paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 8: {
      smartace_log("[Calling balanceOf(account) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(65, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_account =
          Init_sol_address_t(GET_ND_RANGE(66, 0, 6, "account"));
      ERC20_Method_For_Token_balanceOf(&(contract_0), sender, value, blocknum,
                                       timestamp, paid, sender, arg_account);
      smartace_log("[Call successful]");
      break;
    }
    case 9: {
      smartace_log("[Calling transfer(recipient, amount) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(67, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_recipient =
          Init_sol_address_t(GET_ND_RANGE(68, 0, 6, "recipient"));
      sol_uint256_t arg_amount =
          Init_sol_uint256_t(GET_ND_UINT(69, 256, "amount"));
      sol_address_t pos;
      pos.v = (GET_ND_RANGE(67, 0, 6, "pos"));
      sol_uint256_t last = Read_Map_1(&contract_0.user___balances, pos);
      ERC20_Method_For_Token_transfer(&(contract_0), sender, value, blocknum,
                                      timestamp, paid, sender, arg_recipient,
                                      arg_amount);
      sol_uint256_t next = Read_Map_1(&contract_0.user___balances, pos);
      if (last.v > next.v) {
        sol_assert(pos.v == sender.v, 0);
      }
      smartace_log("[Call successful]");
      break;
    }
    case 10: {
      smartace_log("[Calling allowance(owner, spender) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(70, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_owner =
          Init_sol_address_t(GET_ND_RANGE(71, 0, 6, "owner"));
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(72, 0, 6, "spender"));
      ERC20_Method_For_Token_allowance(&(contract_0), sender, value, blocknum,
                                       timestamp, paid, sender, arg_owner,
                                       arg_spender);
      smartace_log("[Call successful]");
      break;
    }
    case 11: {
      smartace_log("[Calling approve(spender, value) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(73, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(74, 0, 6, "spender"));
      sol_uint256_t arg_value =
          Init_sol_uint256_t(GET_ND_UINT(75, 256, "value"));
      ERC20_Method_For_Token_approve(&(contract_0), sender, value, blocknum,
                                     timestamp, paid, sender, arg_spender,
                                     arg_value);
      smartace_log("[Call successful]");
      break;
    }
    case 12: {
      smartace_log(
          "[Calling transferFrom(sender, recipient, amount) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(76, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_sender =
          Init_sol_address_t(GET_ND_RANGE(77, 0, 6, "sender"));
      sol_address_t arg_recipient =
          Init_sol_address_t(GET_ND_RANGE(78, 0, 6, "recipient"));
      sol_uint256_t arg_amount =
          Init_sol_uint256_t(GET_ND_UINT(79, 256, "amount"));
      ERC20_Method_For_Token_transferFrom(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg_sender, arg_recipient, arg_amount);
      smartace_log("[Call successful]");
      break;
    }
    case 13: {
      smartace_log(
          "[Calling increaseAllowance(spender, addedValue) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(80, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(81, 0, 6, "spender"));
      sol_uint256_t arg_addedValue =
          Init_sol_uint256_t(GET_ND_UINT(82, 256, "addedValue"));
      ERC20_Method_For_Token_increaseAllowance(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg_spender, arg_addedValue);
      smartace_log("[Call successful]");
      break;
    }
    case 14: {
      smartace_log("[Calling decreaseAllowance(spender, subtractedValue) on "
                   "contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(83, 2, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg_spender =
          Init_sol_address_t(GET_ND_RANGE(84, 0, 6, "spender"));
      sol_uint256_t arg_subtractedValue =
          Init_sol_uint256_t(GET_ND_UINT(85, 256, "subtractedValue"));
      ERC20_Method_For_Token_decreaseAllowance(
          &(contract_0), sender, value, blocknum, timestamp, paid, sender,
          arg_spender, arg_subtractedValue);
      smartace_log("[Call successful]");
      break;
    }
    default: { sol_require(0, "Model failure, next_call out of bounds."); }
    }
  }
}