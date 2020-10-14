#pragma once
#include "libverify/verify.h"
extern sol_raw_uint256_t sea_nd_0(void);
extern sol_raw_uint256_t sea_nd_1(void);
extern sol_raw_uint256_t sea_nd_2(void);
extern sol_raw_uint256_t sea_nd_3(void);
extern sol_raw_uint256_t sea_nd_4(void);
extern sol_raw_uint256_t sea_nd_5(void);
extern sol_raw_uint256_t sea_nd_6(void);
extern sol_raw_uint256_t sea_nd_7(void);
extern sol_raw_uint8_t sea_nd_8(void);
extern sol_raw_uint8_t sea_nd_9(void);
extern sol_raw_uint8_t sea_nd_10(void);
extern sol_raw_uint8_t sea_nd_11(void);
extern sol_raw_uint8_t sea_nd_12(void);
extern sol_raw_uint8_t sea_nd_13(void);
extern sol_raw_uint8_t sea_nd_14(void);
extern sol_raw_uint8_t sea_nd_15(void);
extern sol_raw_uint256_t sea_nd_16(void);
extern sol_raw_uint8_t sea_nd_17(void);
extern sol_raw_uint8_t sea_nd_18(void);
extern sol_raw_uint256_t sea_nd_19(void);
extern sol_raw_uint256_t sea_nd_20(void);
extern sol_raw_uint256_t sea_nd_21(void);
extern sol_raw_uint256_t sea_nd_22(void);
extern sol_raw_uint256_t sea_nd_23(void);
extern sol_raw_uint8_t sea_nd_24(void);
extern sol_raw_uint8_t sea_nd_25(void);
extern sol_raw_uint256_t sea_nd_26(void);
extern sol_raw_uint256_t sea_nd_27(void);
extern sol_raw_uint8_t sea_nd_28(void);
extern sol_raw_uint8_t sea_nd_29(void);
struct sol_bool {
  sol_raw_uint8_t v;
};
typedef struct sol_bool sol_bool_t;
static inline sol_bool_t Init_sol_bool_t(sol_raw_uint8_t v) {
  sol_bool_t tmp;
  ((tmp).v) = (v);
  return tmp;
}
struct sol_address {
  sol_raw_uint160_t v;
};
typedef struct sol_address sol_address_t;
static inline sol_address_t Init_sol_address_t(sol_raw_uint160_t v) {
  sol_address_t tmp;
  ((tmp).v) = (v);
  return tmp;
}
struct sol_uint8 {
  sol_raw_uint8_t v;
};
typedef struct sol_uint8 sol_uint8_t;
static inline sol_uint8_t Init_sol_uint8_t(sol_raw_uint8_t v) {
  sol_uint8_t tmp;
  ((tmp).v) = (v);
  return tmp;
}
struct sol_uint64 {
  sol_raw_uint64_t v;
};
typedef struct sol_uint64 sol_uint64_t;
static inline sol_uint64_t Init_sol_uint64_t(sol_raw_uint64_t v) {
  sol_uint64_t tmp;
  ((tmp).v) = (v);
  return tmp;
}
struct sol_uint256 {
  sol_raw_uint256_t v;
};
typedef struct sol_uint256 sol_uint256_t;
static inline sol_uint256_t Init_sol_uint256_t(sol_raw_uint256_t v) {
  sol_uint256_t tmp;
  ((tmp).v) = (v);
  return tmp;
}