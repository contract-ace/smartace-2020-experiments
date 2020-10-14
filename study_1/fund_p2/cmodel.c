#include "cmodel.h"
GHOST_VAR sol_uint256_t recipient_pre;
GHOST_VAR sol_uint256_t recipient_post;
GHOST_VAR sol_uint256_t sender_pre;
GHOST_VAR sol_uint256_t sender_post;
sol_raw_uint160_t g_literal_address_0;
sol_uint256_t sol_pay(sol_uint256_t *bal, sol_uint256_t amt) {
  sol_require(((bal)->v) >= ((amt).v), "Insufficient funds to call.");
  ((bal)->v) -= ((amt).v);
  return amt;
}
struct Map_1 {
  sol_uint256_t data_0;
  sol_uint256_t data_1;
  sol_uint256_t data_2;
  sol_uint256_t data_3;
  sol_uint256_t data_4;
  sol_uint256_t data_5;
};
struct Fund {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  sol_bool_t user_isOpen;
  sol_address_t user_owner;
  struct Map_1 user_invested;
};
struct Manager {
  sol_address_t model_address;
  sol_uint256_t model_balance;
  struct Fund user_fund;
};
struct Map_1 ZeroInit_Map_1(void);
struct Map_1 ND_Map_1(void);
sol_uint256_t Read_Map_1(struct Map_1 *arr, sol_address_t key_0);
void Write_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
void Set_Map_1(struct Map_1 *arr, sol_address_t key_0, sol_uint256_t dat);
void Manager_Constructor(struct Manager *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  Init_Fund(&(self->user_fund), (self)->model_address, Init_sol_uint256_t(0),
            blocknum, timestamp, Init_sol_bool_t(1), origin);
}
void Init_Manager(struct Manager *self, sol_address_t sender,
                  sol_uint256_t value, sol_uint256_t blocknum,
                  sol_uint256_t timestamp, sol_bool_t paid,
                  sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  Manager_Constructor(self, sender, value, blocknum, timestamp,
                      Init_sol_bool_t(0), origin);
}
void ND_Manager(struct Manager *self) {
  ((self)->model_balance) =
      (Init_sol_uint256_t(GET_ND_UINT(0, 256, "Manager:model_balance")));
}
void Manager_Method_openFund(struct Manager *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin) {
  Fund_Method_open(&(self->user_fund), (self)->model_address,
                   Init_sol_uint256_t(0), blocknum, timestamp,
                   Init_sol_bool_t(1), origin);
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
  ((tmp).data_0) = (Init_sol_uint256_t(GET_ND_UINT(1, 256, "Map_1:data_0")));
  ((tmp).data_1) = (Init_sol_uint256_t(GET_ND_UINT(2, 256, "Map_1:data_1")));
  ((tmp).data_2) = (Init_sol_uint256_t(GET_ND_UINT(3, 256, "Map_1:data_2")));
  ((tmp).data_3) = (Init_sol_uint256_t(GET_ND_UINT(4, 256, "Map_1:data_3")));
  ((tmp).data_4) = (Init_sol_uint256_t(GET_ND_UINT(5, 256, "Map_1:data_4")));
  ((tmp).data_5) = (Init_sol_uint256_t(GET_ND_UINT(6, 256, "Map_1:data_5")));
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
void Fund_Constructor(struct Fund *self, sol_address_t sender,
                      sol_uint256_t value, sol_uint256_t blocknum,
                      sol_uint256_t timestamp, sol_bool_t paid,
                      sol_address_t origin) {
  ((self->user_owner).v) = ((sender).v);
}
void Init_Fund(struct Fund *self, sol_address_t sender, sol_uint256_t value,
               sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
               sol_address_t origin) {
  ((self)->model_balance) = (Init_sol_uint256_t(0));
  ((self)->user_isOpen) = (Init_sol_bool_t(0));
  ((self)->user_owner) = (Init_sol_address_t(0));
  ((self)->user_invested) = (ZeroInit_Map_1());
  Fund_Constructor(self, sender, value, blocknum, timestamp, Init_sol_bool_t(0),
                   origin);
}
void ND_Fund(struct Fund *self) {
  ((self)->model_balance) =
      (Init_sol_uint256_t(GET_ND_UINT(7, 256, "Fund:model_balance")));
  ((self)->user_isOpen) =
      (Init_sol_bool_t(GET_ND_RANGE(8, 0, 2, "Fund:isOpen")));
  ((self)->user_owner) =
      (Init_sol_address_t(GET_ND_RANGE(9, 0, 6, "Fund:owner")));
  ((self)->user_invested) = (ND_Map_1());
}
void Fund_Method_1_releaseTo(struct Fund *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin,
                             sol_address_t func_user___new) {
  ((self->user_owner).v) = ((func_user___new).v);
}
void Fund_Method_releaseTo(struct Fund *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin,
                           sol_address_t func_model___new) {
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Fund_Method_1_releaseTo(self, sender, value, blocknum, timestamp,
                          Init_sol_bool_t(0), origin, func_model___new);
}
void Fund_Method_1_open(struct Fund *self, sol_address_t sender,
                        sol_uint256_t value, sol_uint256_t blocknum,
                        sol_uint256_t timestamp, sol_bool_t paid,
                        sol_address_t origin) {
  ((self->user_isOpen).v) = (1);
}
void Fund_Method_open(struct Fund *self, sol_address_t sender,
                      sol_uint256_t value, sol_uint256_t blocknum,
                      sol_uint256_t timestamp, sol_bool_t paid,
                      sol_address_t origin) {
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Fund_Method_1_open(self, sender, value, blocknum, timestamp,
                     Init_sol_bool_t(0), origin);
}
void Fund_Method_1_close(struct Fund *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  ((self->user_isOpen).v) = (0);
}
void Fund_Method_close(struct Fund *self, sol_address_t sender,
                       sol_uint256_t value, sol_uint256_t blocknum,
                       sol_uint256_t timestamp, sol_bool_t paid,
                       sol_address_t origin) {
  sol_require(((self->user_owner).v) == ((sender).v), 0);
  Fund_Method_1_close(self, sender, value, blocknum, timestamp,
                      Init_sol_bool_t(0), origin);
}
void Fund_Method_deposit(struct Fund *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin) {
  if (((paid).v) == (1))
    (((self)->model_balance).v) += ((value).v);
  sol_require((self->user_isOpen).v, 0);
  Write_Map_1(&(self->user_invested), Init_sol_address_t((sender).v),
              Init_sol_uint256_t(((Read_Map_1(&(self->user_invested),
                                              Init_sol_address_t((sender).v)))
                                      .v) +
                                 ((value).v)));
}
void Fund_Method_transfer(struct Fund *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin,
                          sol_address_t func_user___destination,
                          sol_uint256_t func_user___amount) {
  recipient_pre = Read_Map_1(&self->user_invested, func_user___destination);;
  sender_pre = Read_Map_1(&self->user_invested, sender);

  sol_require(((func_user___amount).v) > (0), 0);
  sol_require((((Read_Map_1(&(self->user_invested),
                            Init_sol_address_t((func_user___destination).v)))
                    .v) +
               ((func_user___amount).v)) >
                  ((Read_Map_1(&(self->user_invested),
                               Init_sol_address_t((func_user___destination).v)))
                       .v),
              0);
  sol_require(
      ((Read_Map_1(&(self->user_invested), Init_sol_address_t((sender).v)))
           .v) >= ((func_user___amount).v),
      0);
  Write_Map_1(&(self->user_invested), Init_sol_address_t((sender).v),
              Init_sol_uint256_t(((Read_Map_1(&(self->user_invested),
                                              Init_sol_address_t((sender).v)))
                                      .v) -
                                 ((func_user___amount).v)));
  Write_Map_1(&(self->user_invested),
              Init_sol_address_t((func_user___destination).v),
              Init_sol_uint256_t(
                  ((Read_Map_1(&(self->user_invested),
                               Init_sol_address_t((func_user___destination).v)))
                       .v) +
                  ((func_user___amount).v)));

  sender_post = Read_Map_1(&self->user_invested, sender);
  recipient_post = Read_Map_1(&self->user_invested, func_user___destination);
  if (sender.v != func_user___destination.v)
  {
    sol_assert(sender_pre.v == sender_post.v + func_user___amount.v, "Failure.");
    sol_assert(recipient_post.v == recipient_pre.v + func_user___amount.v, "Failure.");
  }
}
void run_model(void) {
  sol_uint256_t blocknum;
  ((blocknum).v) = (GET_ND_UINT(20, 256, "blocknum"));
  sol_uint256_t timestamp;
  ((timestamp).v) = (GET_ND_UINT(21, 256, "timestamp"));
  sol_bool_t paid;
  ((paid).v) = (1);
  struct Manager contract_0;
  struct Fund *contract_1;
  (g_literal_address_0) = (0);
  (((contract_0).model_address).v) = (1);
  (contract_1) = (&((contract_0).user_fund));
  (((contract_1)->model_address).v) = (2);
  (((contract_1)->user_owner).v) = (0);
  smartace_log("[Initializing contract_0 and children]");
  if (GET_ND_RANGE(24, 0, 2, "take_step")) {
    ((blocknum).v) = (GET_ND_INCREASE(22, (blocknum).v, 1, "blocknum"));
    ((timestamp).v) = (GET_ND_INCREASE(23, (timestamp).v, 1, "timestamp"));
  }
  {
    sol_address_t sender;
    ((sender).v) = (GET_ND_RANGE(25, 3, 6, "sender"));
    sol_uint256_t value;
    ((value).v) = (0);
    Init_Manager(&(contract_0), sender, value, blocknum, timestamp, paid,
                 sender);
  }
  smartace_log("[Entering transaction loop]");
  while (sol_continue()) {
    sol_on_transaction();
    contract_1->user_invested = ND_Map_1();
    if (GET_ND_RANGE(28, 0, 2, "take_step")) {
      ((blocknum).v) = (GET_ND_INCREASE(26, (blocknum).v, 1, "blocknum"));
      ((timestamp).v) = (GET_ND_INCREASE(27, (timestamp).v, 1, "timestamp"));
    }
    uint8_t next_call;
    (next_call) = (GET_ND_RANGE(29, 0, 6, "next_call"));
    switch (next_call) {
    case 0: {
      smartace_log("[Calling openFund() on contract_0]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(10, 3, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      Manager_Method_openFund(&(contract_0), sender, value, blocknum, timestamp,
                              paid, sender);
      smartace_log("[Call successful]");
      break;
    }
    case 1: {
      smartace_log("[Calling releaseTo(_new) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(11, 3, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__new =
          Init_sol_address_t(GET_ND_RANGE(12, 0, 6, "_new"));
      Fund_Method_releaseTo(contract_1, sender, value, blocknum, timestamp,
                            paid, sender, arg__new);
      smartace_log("[Call successful]");
      break;
    }
    case 2: {
      smartace_log("[Calling open() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(13, 3, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      Fund_Method_open(contract_1, sender, value, blocknum, timestamp, paid,
                       sender);
      smartace_log("[Call successful]");
      break;
    }
    case 3: {
      smartace_log("[Calling close() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(14, 3, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      Fund_Method_close(contract_1, sender, value, blocknum, timestamp, paid,
                        sender);
      smartace_log("[Call successful]");
      break;
    }
    case 4: {
      smartace_log("[Calling deposit() on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(15, 3, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      ((value).v) = (GET_ND_UINT(16, 256, "value"));
      Fund_Method_deposit(contract_1, sender, value, blocknum, timestamp, paid,
                          sender);
      smartace_log("[Call successful]");
      break;
    }
    case 5: {
      smartace_log("[Calling transfer(_destination, _amount) on contract_1]");
      sol_address_t sender;
      ((sender).v) = (GET_ND_RANGE(17, 3, 6, "sender"));
      sol_uint256_t value;
      ((value).v) = (0);
      sol_address_t arg__destination =
          Init_sol_address_t(GET_ND_RANGE(18, 0, 6, "_destination"));
      sol_uint256_t arg__amount =
          Init_sol_uint256_t(GET_ND_UINT(19, 256, "_amount"));
      Fund_Method_transfer(contract_1, sender, value, blocknum, timestamp, paid,
                           sender, arg__destination, arg__amount);
      smartace_log("[Call successful]");
      break;
    }
    default: { sol_require(0, "Model failure, next_call out of bounds."); }
    }
  }
}
