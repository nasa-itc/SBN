#include "sbn_tbl.h"
#include "cfe_tbl_filedef.h"

SBN_ConfTbl_t SBN_ConfTbl = {.ProtocolModules = {
                                                {/* [0] */
                                                  .Name        = "TCP",
                                                  .LibFileName = "/cf/sbn_tcp.so",
                                                  .LibSymbol   = "SBN_TCP_Ops",
                                                  .BaseEID     = 0x0200}
                                                },
                             .ProtocolCnt     = 1,
                             .Peers =
                                 {
                                     {/* [0] */ //cFS
                                      .ProcessorID  = 1,
                                      .SpacecraftID = 0x42,
                                      .NetNum       = 0,
                                      .ProtocolName = "TCP",
                                      // .Filters      = {"Remap"},
                                      .Address      = "127.0.0.1:2234",
                                      .TaskFlags    = SBN_TASK_POLL},
                                     {/* [1] */ //OnAIR
                                      .ProcessorID  = 2,
                                      .SpacecraftID = 0x42,
                                      .NetNum       = 0,
                                      .ProtocolName = "TCP",
                                      // .Filters      = {"Remap"},
                                      .Address      = "127.0.0.1:2235",
                                      .TaskFlags    = SBN_TASK_POLL},
                                 },
                             .PeerCnt = 2};

CFE_TBL_FILEDEF(SBN_ConfTbl, SBN.SBN_ConfTbl, SBN Configuration Table, sbn_conf_tbl.tbl)
