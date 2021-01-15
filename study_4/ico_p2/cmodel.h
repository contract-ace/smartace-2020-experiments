#pragma once
#include "primitive.h"
void run_model(void);
struct Map_2;
struct Map_1;
struct GVToken;
struct GVOptionToken;
struct GVOptionProgram;
struct ICO;
void ICO_Constructor(struct ICO *self, sol_address_t sender,
                     sol_uint256_t value, sol_uint256_t blocknum,
                     sol_uint256_t timestamp, sol_bool_t paid,
                     sol_address_t origin, sol_address_t func_user___team,
                     sol_address_t func_user___gvAgent,
                     sol_address_t func_user___migrationMaster,
                     sol_address_t func_user___teamAllocator);
void Init_ICO(struct ICO *self, sol_address_t sender, sol_uint256_t value,
              sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
              sol_address_t origin, sol_address_t user___team,
              sol_address_t user___gvAgent,
              sol_address_t user___migrationMaster,
              sol_address_t user___teamAllocator);
void ICO_Method_1_initOptionProgram(struct ICO *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin);
void ICO_Method_initOptionProgram(struct ICO *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin);
void ICO_Method_1_startOptionsSelling(struct ICO *self, sol_address_t sender,
                                      sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin);
void ICO_Method_startOptionsSelling(struct ICO *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin);
void ICO_Method_1_startIcoForOptionsHolders(
    struct ICO *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ICO_Method_startIcoForOptionsHolders(
    struct ICO *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void ICO_Method_1_startIco(struct ICO *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin);
void ICO_Method_startIco(struct ICO *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin);
void ICO_Method_1_pauseIco(struct ICO *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin);
void ICO_Method_pauseIco(struct ICO *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin);
void ICO_Method_1_resumeIco(struct ICO *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin);
void ICO_Method_resumeIco(struct ICO *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin);
void ICO_Method_1_finishIco(struct ICO *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin,
                            sol_address_t func_user___fund,
                            sol_address_t func_user___bounty);
void ICO_Method_finishIco(struct ICO *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin, sol_address_t func_model___fund,
                          sol_address_t func_model___bounty);
sol_uint256_t ICO_Method_1_buyTokens(
    struct ICO *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_buyer,
    sol_uint256_t func_user_usdCents, sol_uint256_t func_user_txHash);
sol_uint256_t ICO_Method_buyTokens(struct ICO *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin,
                                   sol_address_t func_model_buyer,
                                   sol_uint256_t func_model_usdCents,
                                   sol_uint256_t func_model_txHash);
sol_uint256_t ICO_Method_1_buyTokensByOptions(
    struct ICO *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_buyer,
    sol_uint256_t func_user_usdCents, sol_uint256_t func_user_txHash);
sol_uint256_t ICO_Method_buyTokensByOptions(
    struct ICO *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_buyer,
    sol_uint256_t func_model_usdCents, sol_uint256_t func_model_txHash);
void ICO_Method_1_buyOptions(struct ICO *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin,
                             sol_address_t func_user_buyer,
                             sol_uint256_t func_user_usdCents,
                             sol_uint256_t func_user_txHash);
void ICO_Method_buyOptions(struct ICO *self, sol_address_t sender,
                           sol_uint256_t value, sol_uint256_t blocknum,
                           sol_uint256_t timestamp, sol_bool_t paid,
                           sol_address_t origin, sol_address_t func_model_buyer,
                           sol_uint256_t func_model_usdCents,
                           sol_uint256_t func_model_txHash);
void GVToken_Constructor(struct GVToken *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin, sol_address_t func_user___ico,
                         sol_address_t func_user___migrationMaster);
void Init_ERC20Basic_For_GVToken(struct GVToken *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin);
void Init_ERC20_For_GVToken(struct GVToken *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin);
void Init_BasicToken_For_GVToken(struct GVToken *self, sol_address_t sender,
                                 sol_uint256_t value, sol_uint256_t blocknum,
                                 sol_uint256_t timestamp, sol_bool_t paid,
                                 sol_address_t origin);
void Init_StandardToken_For_GVToken(struct GVToken *self, sol_address_t sender,
                                    sol_uint256_t value, sol_uint256_t blocknum,
                                    sol_uint256_t timestamp, sol_bool_t paid,
                                    sol_address_t origin);
void Init_GVToken(struct GVToken *self, sol_address_t sender,
                  sol_uint256_t value, sol_uint256_t blocknum,
                  sol_uint256_t timestamp, sol_bool_t paid,
                  sol_address_t origin, sol_address_t user___ico,
                  sol_address_t user___migrationMaster);
void GVToken_Method_mint(struct GVToken *self, sol_address_t sender,
                         sol_uint256_t value, sol_uint256_t blocknum,
                         sol_uint256_t timestamp, sol_bool_t paid,
                         sol_address_t origin, sol_address_t func_user_holder,
                         sol_uint256_t func_user_value);
void GVToken_Method_unfreeze(struct GVToken *self, sol_address_t sender,
                             sol_uint256_t value, sol_uint256_t blocknum,
                             sol_uint256_t timestamp, sol_bool_t paid,
                             sol_address_t origin);
sol_bool_t BasicToken_Method_For_GVToken_transfer(
    struct GVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_bool_t GVToken_Method_transfer(struct GVToken *self, sol_address_t sender,
                                   sol_uint256_t value, sol_uint256_t blocknum,
                                   sol_uint256_t timestamp, sol_bool_t paid,
                                   sol_address_t origin,
                                   sol_address_t func_user___to,
                                   sol_uint256_t func_user___value);
sol_bool_t StandardToken_Method_For_GVToken_transferFrom(
    struct GVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t GVToken_Method_transferFrom(
    struct GVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t StandardToken_Method_For_GVToken_approve(
    struct GVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value);
sol_bool_t GVToken_Method_approve(struct GVToken *self, sol_address_t sender,
                                  sol_uint256_t value, sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin,
                                  sol_address_t func_user___spender,
                                  sol_uint256_t func_user___value);
void GVToken_Method_migrate(struct GVToken *self, sol_address_t sender,
                            sol_uint256_t value, sol_uint256_t blocknum,
                            sol_uint256_t timestamp, sol_bool_t paid,
                            sol_address_t origin,
                            sol_uint256_t func_user_value);
void GVToken_Method_setMigrationAgent(struct GVToken *self,
                                      sol_address_t sender, sol_uint256_t value,
                                      sol_uint256_t blocknum,
                                      sol_uint256_t timestamp, sol_bool_t paid,
                                      sol_address_t origin,
                                      sol_address_t func_user___agent);
void GVToken_Method_setMigrationMaster(
    struct GVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___master);
sol_uint256_t StandardToken_Method_For_GVToken_allowance(
    struct GVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner,
    sol_address_t func_user___spender);
sol_uint256_t BasicToken_Method_For_GVToken_balanceOf(
    struct GVToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner);
void GVOptionProgram_Constructor(
    struct GVOptionProgram *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___ico,
    sol_address_t func_user___gvAgent, sol_address_t func_user___team);
void Init_GVOptionProgram(struct GVOptionProgram *self, sol_address_t sender,
                          sol_uint256_t value, sol_uint256_t blocknum,
                          sol_uint256_t timestamp, sol_bool_t paid,
                          sol_address_t origin, sol_address_t user___ico,
                          sol_address_t user___gvAgent,
                          sol_address_t user___team);
sol_uint256_t GVOptionProgram_Method_getBalance(
    struct GVOptionProgram *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t *func_user_1,
    sol_uint256_t *func_user_2);
sol_uint256_t GVOptionProgram_Method_1_executeOptions(
    struct GVOptionProgram *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t *func_user_remainingCents,
    sol_address_t func_user_buyer, sol_uint256_t func_user_usdCents,
    sol_uint256_t func_user_txHash);
sol_uint256_t GVOptionProgram_Method_executeOptions(
    struct GVOptionProgram *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_uint256_t *func_model_remainingCents,
    sol_address_t func_model_buyer, sol_uint256_t func_model_usdCents,
    sol_uint256_t func_model_txHash);
void GVOptionProgram_Method_1_buyOptions(
    struct GVOptionProgram *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_buyer,
    sol_uint256_t func_user_usdCents, sol_uint256_t func_user_txHash);
void GVOptionProgram_Method_buyOptions(
    struct GVOptionProgram *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_buyer,
    sol_uint256_t func_model_usdCents, sol_uint256_t func_model_txHash);
void GVOptionToken_Constructor(struct GVOptionToken *self, sol_address_t sender,
                               sol_uint256_t value, sol_uint256_t blocknum,
                               sol_uint256_t timestamp, sol_bool_t paid,
                               sol_address_t origin,
                               sol_address_t func_user___optionProgram,
                               sol_uint256_t func_user___name,
                               sol_uint256_t func_user___symbol,
                               sol_uint256_t func_user___TOKEN__LIMIT);
void Init_ERC20Basic_For_GVOptionToken(struct GVOptionToken *self,
                                       sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin);
void Init_ERC20_For_GVOptionToken(struct GVOptionToken *self,
                                  sol_address_t sender, sol_uint256_t value,
                                  sol_uint256_t blocknum,
                                  sol_uint256_t timestamp, sol_bool_t paid,
                                  sol_address_t origin);
void Init_BasicToken_For_GVOptionToken(struct GVOptionToken *self,
                                       sol_address_t sender,
                                       sol_uint256_t value,
                                       sol_uint256_t blocknum,
                                       sol_uint256_t timestamp, sol_bool_t paid,
                                       sol_address_t origin);
void Init_StandardToken_For_GVOptionToken(
    struct GVOptionToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
void Init_GVOptionToken(struct GVOptionToken *self, sol_address_t sender,
                        sol_uint256_t value, sol_uint256_t blocknum,
                        sol_uint256_t timestamp, sol_bool_t paid,
                        sol_address_t origin,
                        sol_address_t user___optionProgram,
                        sol_uint256_t user___name, sol_uint256_t user___symbol,
                        sol_uint256_t user___TOKEN__LIMIT);
void GVOptionToken_Method_1_buyOptions(
    struct GVOptionToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_buyer,
    sol_uint256_t func_user_value);
void GVOptionToken_Method_buyOptions(struct GVOptionToken *self,
                                     sol_address_t sender, sol_uint256_t value,
                                     sol_uint256_t blocknum,
                                     sol_uint256_t timestamp, sol_bool_t paid,
                                     sol_address_t origin,
                                     sol_address_t func_model_buyer,
                                     sol_uint256_t func_model_value);
sol_uint256_t GVOptionToken_Method_remainingTokensCount(
    struct GVOptionToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin);
sol_uint256_t GVOptionToken_Method_1_executeOption(
    struct GVOptionToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user_addr,
    sol_uint256_t func_user_optionsCount);
sol_uint256_t GVOptionToken_Method_executeOption(
    struct GVOptionToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_model_addr,
    sol_uint256_t func_model_optionsCount);
sol_bool_t StandardToken_Method_For_GVOptionToken_transferFrom(
    struct GVOptionToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___from,
    sol_address_t func_user___to, sol_uint256_t func_user___value);
sol_bool_t StandardToken_Method_For_GVOptionToken_approve(
    struct GVOptionToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___spender,
    sol_uint256_t func_user___value);
sol_uint256_t StandardToken_Method_For_GVOptionToken_allowance(
    struct GVOptionToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner,
    sol_address_t func_user___spender);
sol_bool_t BasicToken_Method_For_GVOptionToken_transfer(
    struct GVOptionToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___to,
    sol_uint256_t func_user___value);
sol_uint256_t BasicToken_Method_For_GVOptionToken_balanceOf(
    struct GVOptionToken *self, sol_address_t sender, sol_uint256_t value,
    sol_uint256_t blocknum, sol_uint256_t timestamp, sol_bool_t paid,
    sol_address_t origin, sol_address_t func_user___owner);