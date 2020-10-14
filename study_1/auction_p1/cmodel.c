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
    return 0;
  }
  ((bal)->v) -= ((amt).v);
  return GET_ND_BYTE(0, "Return value for send/transfer.");
}
void sol_transfer(sol_uint256_t *bal, sol_address_t dst, sol_uint256_t amt) {
  sol_require(sol_send(bal, dst, amt), "Transfer failed.");
}
struct Map_1 {
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
};
struct Auction {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_bool_t user_isOpen;
  sol_address_t user_owner;
  sol_uint256_t user_maxBid;
  struct Map_1 user_bids;
};
struct Map_1 ZeroInit_Map_1(void);
struct Map_1 ND_Map_1(void);
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0);
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
void Set_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
struct Map_1 ZeroInit_Map_1(void) {
  struct Map_1 tmp;
  ((tmp).data_0) = (Init_sol_uint256_t(0));
  ((tmp).data_1) = (Init_sol_uint256_t(0));
  ((tmp).data_2) = (Init_sol_uint256_t(0));
  ((tmp).data_3) = (Init_sol_uint256_t(0));
  ((tmp).data_4) = (Init_sol_uint256_t(0));
  return tmp;
}
struct Map_1 ND_Map_1(void) {
  struct Map_1 tmp;
  ((tmp).data_0) = (Init_sol_uint256_t(GET_ND_UINT(1, 256, "Map_1:data_0")));
  ((tmp).data_1) = (Init_sol_uint256_t(GET_ND_UINT(2, 256, "Map_1:data_1")));
  ((tmp).data_2) = (Init_sol_uint256_t(GET_ND_UINT(3, 256, "Map_1:data_2")));
  ((tmp).data_3) = (Init_sol_uint256_t(GET_ND_UINT(4, 256, "Map_1:data_3")));
  ((tmp).data_4) = (Init_sol_uint256_t(GET_ND_UINT(5, 256, "Map_1:data_4")));
  return tmp;
}
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0) {
  {
    sol_assert((5) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((4) == ((key_0).v))
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
    sol_assert((5) >= ((key_0).v), "Model failure, mapping key out of bounds.");
    if ((4) == ((key_0).v)) {
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
void Auction_Constructor(struct Auction *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Auction(struct Auction *self, sol_address_t sender,
                  sol_uint256_t value, sol_uint256_t blocknum,
                  sol_uint256_t timestamp, sol_bool_t paid,
                  sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  ((self)->user_isOpen) = (Init_sol_bool_t(0));
  ((self)->user_owner) = (Init_sol_address_t(0));
  ((self)->user_maxBid) = (Init_sol_uint256_t(0));
  ((self)->user_bids) = (ZeroInit_Map_1());
  Auction_Constructor(self, sender, value, blocknum, timestamp,
                      Init_sol_bool_t(0), origin);
}
void ND_Auction(struct Auction *self) {
  ((self)->model_balance) =
      (Init_sol_uint256_t(GET_ND_UINT(6, 256, "Auction:model_balance")));
  ((self)->user_isOpen) =
      (Init_sol_bool_t(GET_ND_RANGE(7, 0, 2, "Auction:isOpen")));
  ((self)->user_owner) =
      (Init_sol_address_t(GET_ND_RANGE(8, 0, 5, "Auction:owner")));
  ((self)->user_maxBid) =
      (Init_sol_uint256_t(GET_ND_UINT(9, 256, "Auction:maxBid")));
  ((self)->user_bids) = (ND_Map_1());
}
void Auction_Method_1_releaseTo(struct Auction *self, sol_address_t sender,
                                sol_uint256_t value, sol_uint256_t blocknum,
                                sol_uint256_t timestamp, sol_bool_t paid,
                                sol_address_t origin,
                                sol_address_t func_user___new) {
  ((self->user_owner).v) = ((func_user___new).v);
}
void Auction_Method_releaseTo(struct Auction *self, sol_address_t sender,
                              sol_uint256_t value, sol_uint256_t blocknum,
                              sol_uint256_t timestamp, sol_bool_t paid,
                              sol_address_t origin,
                              sol_address_t func_model___new) {
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Auction_Method_1_releaseTo(self, sender, value, blocknum, timestamp,
                             Init_sol_bool_t(0), origin, func_model___new);
}
void Auction_Method_1_open(struct Auction *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin) {
  ((self->user_isOpen).v) = (1);
}
void Auction_Method_open(struct Auction *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Auction_Method_1_open(self, sender, value, blocknum, timestamp,
                        Init_sol_bool_t(0), origin);
}
void Auction_Method_1_close(struct Auction *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin) {
  ((self->user_isOpen).v) = (0);
}
void Auction_Method_close(struct Auction *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin) {
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Auction_Method_1_close(self, sender, value, blocknum, timestamp,
                         Init_sol_bool_t(0), origin);
}
void Auction_Method_deposit(struct Auction *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_uint256_t func_user_bid = Init_sol_uint256_t(
      ((Read_Map_1(&(self->user_bids), Init_sol_address_t((sender).v))).v) +
      ((value).v));
  sol_require((self->user_isOpen).v, 0);
  sol_require(((func_user_bid).v) > ((self->user_maxBid).v), 0);
  Write_Map_1(&(self->user_bids), Init_sol_address_t((sender).v),
              Init_sol_uint256_t((func_user_bid).v));
  ((self->user_maxBid).v) = ((func_user_bid).v);
}
void Auction_Method_withdraw(struct Auction *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_uint256_t func_user_bid = Init_sol_uint256_t(
      (Read_Map_1(&(self->user_bids), Init_sol_address_t((sender).v))).v);
  sol_require((self->user_isOpen).v, 0);
  sol_require(((func_user_bid).v) < ((self->user_maxBid).v), 0);
  Write_Map_1(&(self->user_bids), Init_sol_address_t((sender).v),
              Init_sol_uint256_t(0));
  sol_transfer(&((self)->model_balance), Init_sol_address_t((sender).v),
               Init_sol_uint256_t((func_user_bid).v));
}
void run_model(void) {
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(18, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(19, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct Auction contract_0;
  (g_literal_address_0) = (0);
  (((contract_0).model_address).v) = (1);
  (((contract_0).user_owner).v) = (0);
  smartace_log("[Initializing contract_0 and children]");
  if (GET_ND_RANGE(22, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(20, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(21, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(23, 2, 5, "sender"));
    sol_uint256_t value;
    ((value).v) = (0);
    Init_Auction(&(contract_0), sender, value, blocknum, timestamp, paid,
                 sender);
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    contract_0.user_bids = ND_Map_1();
    sol_require(Read_Map_1(&contract_0.user_bids, Init_sol_address_t(0)).v <= contract_0.user_maxBid.v, 0);
    sol_require(Read_Map_1(&contract_0.user_bids, Init_sol_address_t(1)).v <= contract_0.user_maxBid.v, 0);
    sol_require(Read_Map_1(&contract_0.user_bids, Init_sol_address_t(2)).v <= contract_0.user_maxBid.v, 0);
    sol_require(Read_Map_1(&contract_0.user_bids, Init_sol_address_t(3)).v <= contract_0.user_maxBid.v, 0);
    sol_require(Read_Map_1(&contract_0.user_bids, Init_sol_address_t(4)).v <= contract_0.user_maxBid.v, 0);
    if (GET_ND_RANGE(26, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(24, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(25, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(27, 0, 5, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling releaseTo(_new) on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(10, 2, 5, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__new =
          Init_sol_address_t(GET_ND_RANGE(11, 0, 5, "_new"));
      Auction_Method_releaseTo(&(contract_0), sender, value, blocknum,
                               timestamp, paid, sender, arg__new);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling open() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(12, 2, 5, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      Auction_Method_open(&(contract_0), sender, value, blocknum, timestamp,
                          paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling close() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(13, 2, 5, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      Auction_Method_close(&(contract_0), sender, value, blocknum, timestamp,
                           paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling deposit() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(14, 2, 5, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(15, 256, "value"));
      Auction_Method_deposit(&(contract_0), sender, value, blocknum, timestamp,
                             paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling withdraw() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(16, 2, 5, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(17, 256, "value"));
      Auction_Method_withdraw(&(contract_0), sender, value, blocknum, timestamp,
                              paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    default: { sol_require(0, "Model failure, next_call out of bounds."); }
    }
    sol_assert(Read_Map_1(&contract_0.user_bids, Init_sol_address_t(0)).v <= contract_0.user_maxBid.v, 0);
    sol_assert(Read_Map_1(&contract_0.user_bids, Init_sol_address_t(1)).v <= contract_0.user_maxBid.v, 0);
    sol_assert(Read_Map_1(&contract_0.user_bids, Init_sol_address_t(2)).v <= contract_0.user_maxBid.v, 0);
    sol_assert(Read_Map_1(&contract_0.user_bids, Init_sol_address_t(3)).v <= contract_0.user_maxBid.v, 0);
    sol_assert(Read_Map_1(&contract_0.user_bids, Init_sol_address_t(4)).v <= contract_0.user_maxBid.v, 0);
  }
}
