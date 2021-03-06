#pragma once

#define IDS_START_SYNTAX         163
#define IDS_START_HELP_1         164
#define IDS_START_HELP_2         165
#define IDS_START_HELP_3         166
#define IDS_STATISTICS_SYNTAX    167
#define IDS_STATISTICS_HELP_1    168
#define IDS_STATISTICS_HELP_2    169
#define IDS_STOP_SYNTAX          170
#define IDS_STOP_HELP_1          171
#define IDS_STOP_HELP_2          172
#define IDS_STOP_HELP_3          173
#define IDS_TIME_SYNTAX          174
#define IDS_TIME_HELP            175
#define IDS_USE_SYNTAX           176
#define IDS_USE_HELP             177
#define IDS_USER_SYNTAX          178
#define IDS_USER_HELP            179
#define IDS_VIEW_SYNTAX          180
#define IDS_VIEW_HELP            181
#define IDS_NET_SYNTAX           182

#define IDS_ACCOUNTS_FORCE_LOGOFF      200
#define IDS_ACCOUNTS_LOGOFF_SECONDS    201
#define IDS_ACCOUNTS_MIN_PW_AGE        202
#define IDS_ACCOUNTS_MAX_PW_AGE        203
#define IDS_ACCOUNTS_MIN_PW_LENGTH     204
#define IDS_ACCOUNTS_PW_HIST_LENGTH    205
#define IDS_ACCOUNTS_LOCKOUT_THRESHOLD 206
#define IDS_ACCOUNTS_LOCKOUT_DURATION  207
#define IDS_ACCOUNTS_LOCKOUT_WINDOW    208
#define IDS_ACCOUNTS_COMPUTER_ROLE     209
#define IDS_ACCOUNTS_PRIMARY_SERVER    210
#define IDS_ACCOUNTS_BACKUP_SERVER     211
#define IDS_ACCOUNTS_STANDALONE_SERVER 212
#define IDS_ACCOUNTS_WORKSTATION       213

#define IDS_CONFIG_TEXT                 230
#define IDS_CONFIG_SERVER_NAME          231
#define IDS_CONFIG_SERVER_COMMENT       232
#define IDS_CONFIG_SERVER_VERSION       233
#define IDS_CONFIG_SERVER_ACTIVE        234
#define IDS_CONFIG_SERVER_HIDDEN        235
#define IDS_CONFIG_SERVER_USERS         236
#define IDS_CONFIG_SERVER_FILES         237
#define IDS_CONFIG_SERVER_IDLE          238
#define IDS_CONFIG_WORKSTATION_NAME     239
#define IDS_CONFIG_WORKSTATION_FULLNAME 240
#define IDS_CONFIG_WORKSTATION_USERNAME 241
#define IDS_CONFIG_WORKSTATION_ACTIVE   242
#define IDS_CONFIG_WORKSTATION_VERSION  243
#define IDS_CONFIG_WORKSTATION_DOMAIN   244
#define IDS_CONFIG_WORKSTATION_LOGON    245

#define IDS_GROUP_GROUPS                260
#define IDS_GROUP_NAME                  261
#define IDS_GROUP_COMMENT               262
#define IDS_GROUP_MEMBERS               263

#define IDS_LOCALGROUP_ALIASES          300
#define IDS_LOCALGROUP_ALIAS_NAME       301
#define IDS_LOCALGROUP_COMMENT          302
#define IDS_LOCALGROUP_MEMBERS          303

#define IDS_STATISTICS_TEXT             320
#define IDS_STATISTICS_SINCE            321
#define IDS_STATISTICS_SRV_NAME         322
#define IDS_STATISTICS_SRV_SESACCEPT    323
#define IDS_STATISTICS_SRV_SESSTIME     324
#define IDS_STATISTICS_SRV_SESSERROR    325
#define IDS_STATISTICS_SRV_KBSENT       326
#define IDS_STATISTICS_SRV_KBRCVD       327
#define IDS_STATISTICS_SRV_MRESPTIME    328
#define IDS_STATISTICS_SRV_SYSERRORS    329
#define IDS_STATISTICS_SRV_PMERRORS     330
#define IDS_STATISTICS_SRV_PWERRORS     331
#define IDS_STATISTICS_SRV_FILES        332
#define IDS_STATISTICS_SRV_DEVICES      333
#define IDS_STATISTICS_SRV_JOBS         334
#define IDS_STATISTICS_SRV_BUFFERS      335
#define IDS_STATISTICS_SRV_BIGBUFFERS   336
#define IDS_STATISTICS_SRV_REQBUFFERS   337
#define IDS_STATISTICS_WKS_NAME         338
#define IDS_STATISTICS_WKS_BYTESRCVD    339
#define IDS_STATISTICS_WKS_SMBSRCVD     340
#define IDS_STATISTICS_WKS_BYTESTRANS   341
#define IDS_STATISTICS_WKS_SMBSTRANS    342
#define IDS_STATISTICS_WKS_READOPS      343
#define IDS_STATISTICS_WKS_WRITEOPS     344
#define IDS_STATISTICS_WKS_READDENIED   345
#define IDS_STATISTICS_WKS_WRITEDENIED  346
#define IDS_STATISTICS_WKS_NETWORKERROR 347
#define IDS_STATISTICS_WKS_CONNECTS     348
#define IDS_STATISTICS_WKS_RECONNECTS   349
#define IDS_STATISTICS_WKS_DISCONNECTS  350
#define IDS_STATISTICS_WKS_SESSIONS     351
#define IDS_STATISTICS_WKS_HUNGSESSIONS 352
#define IDS_STATISTICS_WKS_FAILSESSIONS 353
#define IDS_STATISTICS_WKS_FAILEDOPS    354
#define IDS_STATISTICS_WKS_USECOUNT     355
#define IDS_STATISTICS_WKS_FAILUSECOUNT 356

#define IDS_USER_ACCOUNTS              449
#define IDS_USER_NAME                  450
#define IDS_USER_FULL_NAME             451
#define IDS_USER_COMMENT               452
#define IDS_USER_USER_COMMENT          453
#define IDS_USER_COUNTRY_CODE          454
#define IDS_USER_ACCOUNT_ACTIVE        455
#define IDS_USER_ACCOUNT_EXPIRES       456
#define IDS_USER_PW_LAST_SET           457
#define IDS_USER_PW_EXPIRES            458
#define IDS_USER_PW_CHANGEABLE         459
#define IDS_USER_PW_REQUIRED           460
#define IDS_USER_CHANGE_PW             461
#define IDS_USER_WORKSTATIONS          462
#define IDS_USER_LOGON_SCRIPT          463
#define IDS_USER_PROFILE               464
#define IDS_USER_HOME_DIR              465
#define IDS_USER_LAST_LOGON            466
#define IDS_USER_LOGON_HOURS           467
#define IDS_USER_LOCAL_GROUPS          468
#define IDS_USER_GLOBAL_GROUPS         469

#define IDS_USER_ENTER_PASSWORD1       490
#define IDS_USER_ENTER_PASSWORD2       491
#define IDS_USER_NO_PASSWORD_MATCH     492

#define IDS_USE_NOW_CONNECTED          500

#define IDS_GENERIC_YES                600
#define IDS_GENERIC_NO                 601
#define IDS_GENERIC_NEVER              602
#define IDS_GENERIC_NONE               603
#define IDS_GENERIC_ALL                604
#define IDS_GENERIC_LOCKED             605
#define IDS_GENERIC_UNLIMITED          606
#define IDS_GENERIC_SYNTAX             607
#define IDS_GENERIC_PAGE               608

#define IDS_ERROR_OPTION_NOT_SUPPORTED 700
#define IDS_ERROR_INVALID_OPTION_VALUE 701
#define IDS_ERROR_SYSTEM_ERROR         702
#define IDS_ERROR_NO_ERROR             703
