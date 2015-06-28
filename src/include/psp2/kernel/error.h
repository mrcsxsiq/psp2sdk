/**
 * \file
 * \brief Header file which defines kernel errors
 *
 * Copyright (C) 2015 PSP2SDK Project
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef _PSP2_KERNEL_ERROR_H_
#define _PSP2_KERNEL_ERROR_H_

enum {
	PSP2_KERNEL_OK	= 0x0,
	PSP2_KERNEL_ERROR_ERROR	= 0x80020001,
	PSP2_KERNEL_ERROR_NOT_IMPLEMENTED	= 0x80020002,
	PSP2_KERNEL_ERROR_NOSYS	= 0x80020003,
	PSP2_KERNEL_ERROR_UNSUP	= 0x80020004,
	PSP2_KERNEL_ERROR_INVALID_ARGUMENT	= 0x80020005,
	PSP2_KERNEL_ERROR_ILLEGAL_ADDR	= 0x80020006,
	PSP2_KERNEL_ERROR_ILLEGAL_ALIGNMENT	= 0x80020007,
	PSP2_KERNEL_ERROR_ILLEGAL_PERMISSION	= 0x80020008,
	PSP2_KERNEL_ERROR_INVALID_ARGUMENT_SIZE	= 0x80020009,
	PSP2_KERNEL_ERROR_INVALID_FLAGS	= 0x8002000A,
	PSP2_KERNEL_ERROR_ILLEGAL_SIZE	= 0x8002000B,
	PSP2_KERNEL_ERROR_ILLEGAL_TYPE	= 0x8002000C,
	PSP2_KERNEL_ERROR_ILLEGAL_PATTERN	= 0x8002000D,
	PSP2_KERNEL_ERROR_ILLEGAL_ATTR	= 0x8002000E,
	PSP2_KERNEL_ERROR_ILLEGAL_COUNT	= 0x8002000F,
	PSP2_KERNEL_ERROR_ILLEGAL_MODE	= 0x80020010,
	PSP2_KERNEL_ERROR_ILLEGAL_OPEN_LIMIT	= 0x80020011,
	PSP2_KERNEL_ERROR_ONLY_DEVELOPMENT_MODE	= 0x80020012,
	PSP2_KERNEL_ERROR_DEBUG_ERROR	= 0x80021000,
	PSP2_KERNEL_ERROR_ILLEGAL_DIPSW_NUMBER	= 0x80021001,
	PSP2_KERNEL_ERROR_PA_ERROR	= 0x80021100,
	PSP2_KERNEL_ERROR_PA_NOT_AVAILABLE	= 0x80021101,
	PSP2_KERNEL_ERROR_PA_INVALID_KEY	= 0x80021102,
	PSP2_KERNEL_ERROR_PA_KEY_IS_NOT_SHARED	= 0x80021103,
	PSP2_KERNEL_ERROR_PA_INVALID_SIGNATURE	= 0x80021104,
	PSP2_KERNEL_ERROR_CPU_ERROR	= 0x80022000,
	PSP2_KERNEL_ERROR_MMU_ILLEGAL_L1_TYPE	= 0x80022001,
	PSP2_KERNEL_ERROR_MMU_L2_INDEX_OVERFLOW	= 0x80022002,
	PSP2_KERNEL_ERROR_MMU_L2_SIZE_OVERFLOW	= 0x80022003,
	PSP2_KERNEL_ERROR_INVALID_CPU_AFFINITY	= 0x80022004,
	PSP2_KERNEL_ERROR_INVALID_MEMORY_ACCESS	= 0x80022005,
	PSP2_KERNEL_ERROR_INVALID_MEMORY_ACCESS_PERMISSION	= 0x80022006,
	PSP2_KERNEL_ERROR_VA2PA_FAULT	= 0x80022007,
	PSP2_KERNEL_ERROR_VA2PA_MAPPED	= 0x80022008,
	PSP2_KERNEL_ERROR_VALIDATION_CHECK_FAILED	= 0x80022009,
	PSP2_KERNEL_ERROR_SYSMEM_ERROR	= 0x80024000,
	PSP2_KERNEL_ERROR_INVALID_PROCESS_CONTEXT	= 0x80024001,
	PSP2_KERNEL_ERROR_UID_NAME_TOO_LONG	= 0x80024002,
	PSP2_KERNEL_ERROR_VARANGE_IS_NOT_PHYSICAL_CONTINUOUS	= 0x80024003,
	PSP2_KERNEL_ERROR_PHYADDR_ERROR	= 0x80024100,
	PSP2_KERNEL_ERROR_NO_PHYADDR	= 0x80024101,
	PSP2_KERNEL_ERROR_PHYADDR_USED	= 0x80024102,
	PSP2_KERNEL_ERROR_PHYADDR_NOT_USED	= 0x80024103,
	PSP2_KERNEL_ERROR_NO_IOADDR	= 0x80024104,
	PSP2_KERNEL_ERROR_PHYMEM_ERROR	= 0x80024300,
	PSP2_KERNEL_ERROR_ILLEGAL_PHYPAGE_STATUS	= 0x80024301,
	PSP2_KERNEL_ERROR_NO_FREE_PHYSICAL_PAGE	= 0x80024302,
	PSP2_KERNEL_ERROR_NO_FREE_PHYSICAL_PAGE_UNIT	= 0x80024303,
	PSP2_KERNEL_ERROR_PHYMEMPART_NOT_EMPTY	= 0x80024304,
	PSP2_KERNEL_ERROR_NO_PHYMEMPART_LPDDR2	= 0x80024305,
	PSP2_KERNEL_ERROR_NO_PHYMEMPART_CDRAM	= 0x80024306,
	PSP2_KERNEL_ERROR_PHYMEMPART_OUT_OF_INDEX	= 0x80024307,
	PSP2_KERNEL_ERROR_CANNOT_GROW_PHYMEMPART	= 0x80024308,
	PSP2_KERNEL_ERROR_NO_FREE_PHYSICAL_PAGE_CDRAM	= 0x80024309,
	PSP2_KERNEL_ERROR_INVALID_SUBBUDGET_ID	= 0x8002430A,
	PSP2_KERNEL_ERROR_FIXEDHEAP_ERROR	= 0x80024400,
	PSP2_KERNEL_ERROR_FIXEDHEAP_ILLEGAL_SIZE	= 0x80024401,
	PSP2_KERNEL_ERROR_FIXEDHEAP_ILLEGAL_INDEX	= 0x80024402,
	PSP2_KERNEL_ERROR_FIXEDHEAP_INDEX_OVERFLOW	= 0x80024403,
	PSP2_KERNEL_ERROR_FIXEDHEAP_NO_CHUNK	= 0x80024404,
	PSP2_KERNEL_ERROR_UID_ERROR	= 0x80024500,
	PSP2_KERNEL_ERROR_INVALID_UID	= 0x80024501,
	PSP2_KERNEL_ERROR_SYSMEM_UID_INVALID_ARGUMENT	= 0x80024502,
	PSP2_KERNEL_ERROR_SYSMEM_INVALID_UID_RANGE	= 0x80024503,
	PSP2_KERNEL_ERROR_SYSMEM_NO_VALID_UID	= 0x80024504,
	PSP2_KERNEL_ERROR_SYSMEM_CANNOT_ALLOCATE_UIDENTRY	= 0x80024505,
	PSP2_KERNEL_ERROR_NOT_PROCESS_UID	= 0x80024506,
	PSP2_KERNEL_ERROR_NOT_KERNEL_UID	= 0x80024507,
	PSP2_KERNEL_ERROR_INVALID_UID_CLASS	= 0x80024508,
	PSP2_KERNEL_ERROR_INVALID_UID_SUBCLASS	= 0x80024509,
	PSP2_KERNEL_ERROR_UID_CANNOT_FIND_BY_NAME	= 0x8002450A,
	PSP2_KERNEL_ERROR_UID_NOT_VISIBLE	= 0x8002450B,
	PSP2_KERNEL_ERROR_UID_MAX_OPEN	= 0x8002450C,
	PSP2_KERNEL_ERROR_UID_RL_OVERFLOW	= 0x8002450D,
	PSP2_KERNEL_ERROR_VIRPAGE_ERROR	= 0x80024600,
	PSP2_KERNEL_ERROR_ILLEGAL_VIRPAGE_TYPE	= 0x80024601,
	PSP2_KERNEL_ERROR_BLOCK_ERROR	= 0x80024700,
	PSP2_KERNEL_ERROR_ILLEGAL_BLOCK_ID	= 0x80024701,
	PSP2_KERNEL_ERROR_ILLEGAL_BLOCK_TYPE	= 0x80024702,
	PSP2_KERNEL_ERROR_BLOCK_IN_USE	= 0x80024703,
	PSP2_KERNEL_ERROR_PARTITION_ERROR	= 0x80024800,
	PSP2_KERNEL_ERROR_ILLEGAL_PARTITION_ID	= 0x80024801,
	PSP2_KERNEL_ERROR_ILLEGAL_PARTITION_INDEX	= 0x80024802,
	PSP2_KERNEL_ERROR_NO_L2PAGETABLE	= 0x80024803,
	PSP2_KERNEL_ERROR_HEAPLIB_ERROR	= 0x80024900,
	PSP2_KERNEL_ERROR_ILLEGAL_HEAP_ID	= 0x80024901,
	PSP2_KERNEL_ERROR_OUT_OF_RANG	= 0x80024902,
	PSP2_KERNEL_ERROR_HEAPLIB_NOMEM	= 0x80024903,
	PSP2_KERNEL_ERROR_HEAPLIB_VERIFY_ERROR	= 0x80024904,
	PSP2_KERNEL_ERROR_SYSMEM_ADDRESS_SPACE_ERROR	= 0x80024A00,
	PSP2_KERNEL_ERROR_INVALID_ADDRESS_SPACE_ID	= 0x80024A01,
	PSP2_KERNEL_ERROR_INVALID_PARTITION_INDEX	= 0x80024A02,
	PSP2_KERNEL_ERROR_ADDRESS_SPACE_CANNOT_FIND_PARTITION_BY_ADDR	= 0x80024A03,
	PSP2_KERNEL_ERROR_SYSMEM_MEMBLOCK_ERROR	= 0x80024B00,
	PSP2_KERNEL_ERROR_ILLEGAL_MEMBLOCK_TYPE	= 0x80024B01,
	PSP2_KERNEL_ERROR_ILLEGAL_MEMBLOCK_REMAP_TYPE	= 0x80024B02,
	PSP2_KERNEL_ERROR_NOT_PHY_CONT_MEMBLOCK	= 0x80024B03,
	PSP2_KERNEL_ERROR_ILLEGAL_MEMBLOCK_CODE	= 0x80024B04,
	PSP2_KERNEL_ERROR_ILLEGAL_MEMBLOCK_SIZE	= 0x80024B05,
	PSP2_KERNEL_ERROR_ILLEGAL_USERMAP_SIZE	= 0x80024B06,
	PSP2_KERNEL_ERROR_MEMBLOCK_TYPE_FOR_KERNEL_PROCESS	= 0x80024B07,
	PSP2_KERNEL_ERROR_PROCESS_CANNOT_REMAP_MEMBLOCK	= 0x80024B08,
	PSP2_KERNEL_ERROR_MEMBLOCK_RANGE_ERROR	= 0x80024B09,
	PSP2_KERNEL_ERROR_MEMBLOCK_TYPE_FOR_UPDATER_OR_SAFEMODE	= 0x80024B0A,
	PSP2_KERNEL_ERROR_MEMBLOCK_OVERFLOW	= 0x80024B0B,
	PSP2_KERNEL_ERROR_SYSMEM_PHYMEMLOW_ERROR	= 0x80024C00,
	PSP2_KERNEL_ERROR_CANNOT_ALLOC_PHYMEMLOW	= 0x80024C01,
	PSP2_KERNEL_ERROR_UNKNOWN_PHYMEMLOW_TYPE	= 0x80024C02,
	PSP2_KERNEL_ERROR_SYSMEM_BITHEAP_ERROR	= 0x80024D00,
	PSP2_KERNEL_ERROR_CANNOT_ALLOC_BITHEAP	= 0x80024D01,
	PSP2_KERNEL_ERROR_SYSMEM_NAMEHEAP_ERROR	= 0x80024E00,
	PSP2_KERNEL_ERROR_NO_SUCH_NAME	= 0x80024E01,
	PSP2_KERNEL_ERROR_DUPLICATE_NAME	= 0x80024E02,
	PSP2_KERNEL_ERROR_LOADCORE_ERROR	= 0x80025000,
	PSP2_KERNEL_ERROR_ILLEGAL_ELF_HEADER	= 0x80025001,
	PSP2_KERNEL_ERROR_ILLEGAL_SELF_HEADER	= 0x80025002,
	PSP2_KERNEL_ERROR_EXCPMGR_ERROR	= 0x80027000,
	PSP2_KERNEL_ERROR_ILLEGAL_EXCPCODE	= 0x80027001,
	PSP2_KERNEL_ERROR_ILLEGAL_EXCPHANDLER	= 0x80027002,
	PSP2_KERNEL_ERROR_NOTFOUND_EXCPHANDLER	= 0x80027003,
	PSP2_KERNEL_ERROR_CANNOT_RELEASE_EXCPHANDLER	= 0x80027004,
	PSP2_KERNEL_ERROR_INTRMGR_ERROR	= 0x80027100,
	PSP2_KERNEL_ERROR_ILLEGAL_CONTEXT	= 0x80027101,
	PSP2_KERNEL_ERROR_ILLEGAL_INTRCODE	= 0x80027102,
	PSP2_KERNEL_ERROR_ILLEGAL_INTRPARAM	= 0x80027103,
	PSP2_KERNEL_ERROR_ILLEGAL_INTRPRIORITY	= 0x80027104,
	PSP2_KERNEL_ERROR_ILLEGAL_TARGET_CPU	= 0x80027105,
	PSP2_KERNEL_ERROR_ILLEGAL_INTRFILTER	= 0x80027106,
	PSP2_KERNEL_ERROR_ILLEGAL_INTRTYPE	= 0x80027107,
	PSP2_KERNEL_ERROR_ILLEGAL_HANDLER	= 0x80027108,
	PSP2_KERNEL_ERROR_FOUND_HANDLER	= 0x80027109,
	PSP2_KERNEL_ERROR_NOTFOUND_HANDLER	= 0x8002710A,
	PSP2_KERNEL_ERROR_NO_MEMORY	= 0x8002710B,
	PSP2_KERNEL_ERROR_DMACMGR_ERROR	= 0x80027200,
	PSP2_KERNEL_ERROR_ALREADY_QUEUED	= 0x80027201,
	PSP2_KERNEL_ERROR_NOT_QUEUED	= 0x80027202,
	PSP2_KERNEL_ERROR_NOT_SETUP	= 0x80027203,
	PSP2_KERNEL_ERROR_ON_TRANSFERRING	= 0x80027204,
	PSP2_KERNEL_ERROR_NOT_INITIALIZED	= 0x80027205,
	PSP2_KERNEL_ERROR_TRANSFERRED	= 0x80027206,
	PSP2_KERNEL_ERROR_NOT_UNDER_CONTROL	= 0x80027207,
	PSP2_KERNEL_ERROR_CANCELING	= 0x80027208,
	PSP2_KERNEL_ERROR_SYSTIMER_ERROR	= 0x80027300,
	PSP2_KERNEL_ERROR_NO_FREE_TIMER	= 0x80027301,
	PSP2_KERNEL_ERROR_TIMER_NOT_ALLOCATED	= 0x80027302,
	PSP2_KERNEL_ERROR_TIMER_COUNTING	= 0x80027303,
	PSP2_KERNEL_ERROR_TIMER_STOPPED	= 0x80027304,
	PSP2_KERNEL_ERROR_THREADMGR_ERROR	= 0x80028000,
	PSP2_KERNEL_ERROR_UNKNOWN_UID	= 0x80028001,
	PSP2_KERNEL_ERROR_DIFFERENT_UID_CLASS	= 0x80028002,
	PSP2_KERNEL_ERROR_ALREADY_REGISTERED	= 0x80028003,
	PSP2_KERNEL_ERROR_CAN_NOT_WAIT	= 0x80028004,
	PSP2_KERNEL_ERROR_WAIT_TIMEOUT	= 0x80028005,
	PSP2_KERNEL_ERROR_WAIT_DELETE	= 0x80028006,
	PSP2_KERNEL_ERROR_WAIT_CANCEL	= 0x80028007,
	PSP2_KERNEL_ERROR_THREAD_ERROR	= 0x80028020,
	PSP2_KERNEL_ERROR_UNKNOWN_THREAD_ID	= 0x80028021,
	PSP2_KERNEL_ERROR_ILLEGAL_THREAD_ID	= 0x80028022,
	PSP2_KERNEL_ERROR_ILLEGAL_PRIORITY	= 0x80028023,
	PSP2_KERNEL_ERROR_ILLEGAL_STACK_SIZE	= 0x80028024,
	PSP2_KERNEL_ERROR_ILLEGAL_CPU_AFFINITY_MASK	= 0x80028025,
	PSP2_KERNEL_ERROR_ILLEGAL_THREAD_PARAM_COMBINATION	= 0x80028026,
	PSP2_KERNEL_ERROR_DORMANT	= 0x80028027,
	PSP2_KERNEL_ERROR_NOT_DORMANT	= 0x80028028,
	PSP2_KERNEL_ERROR_RUNNING	= 0x80028029,
	PSP2_KERNEL_ERROR_DELETED	= 0x8002802A,
	PSP2_KERNEL_ERROR_CAN_NOT_SUSPEND	= 0x8002802B,
	PSP2_KERNEL_ERROR_THREAD_STOPPED	= 0x8002802C,
	PSP2_KERNEL_ERROR_THREAD_SUSPENDED	= 0x8002802D,
	PSP2_KERNEL_ERROR_NOT_SUSPENDED	= 0x8002802E,
	PSP2_KERNEL_ERROR_ALREADY_DEBUG_SUSPENDED	= 0x8002802F,
	PSP2_KERNEL_ERROR_NOT_DEBUG_SUSPENDED	= 0x80028030,
	PSP2_KERNEL_ERROR_CAN_NOT_USE_VFP	= 0x80028031,
	PSP2_KERNEL_ERROR_THREAD_EVENT_ERROR	= 0x80028060,
	PSP2_KERNEL_ERROR_UNKNOWN_THREAD_EVENT_ID	= 0x80028061,
	PSP2_KERNEL_ERROR_KERNEL_TLS_ERROR	= 0x80028080,
	PSP2_KERNEL_ERROR_KERNEL_TLS_FULL	= 0x80028081,
	PSP2_KERNEL_ERROR_ILLEGAL_KERNEL_TLS_INDEX	= 0x80028082,
	PSP2_KERNEL_ERROR_KERNEL_TLS_BUSY	= 0x80028083,
	PSP2_KERNEL_ERROR_CALLBACK_ERROR	= 0x800280A0,
	PSP2_KERNEL_ERROR_UNKNOWN_CALLBACK_ID	= 0x800280A1,
	PSP2_KERNEL_ERROR_NOTIFY_CALLBACK	= 0x800280A2,
	PSP2_KERNEL_ERROR_CALLBACK_NOT_REGISTERED	= 0x800280A3,
	PSP2_KERNEL_ERROR_ALARM_ERROR	= 0x800280C0,
	PSP2_KERNEL_ERROR_UNKNOWN_ALARM_ID	= 0x800280C1,
	PSP2_KERNEL_ERROR_ALARM_CAN_NOT_CANCEL	= 0x800280C2,
	PSP2_KERNEL_ERROR_EVF_ERROR	= 0x800280E0,
	PSP2_KERNEL_ERROR_UNKNOWN_EVF_ID	= 0x800280E1,
	PSP2_KERNEL_ERROR_EVF_MULTI	= 0x800280E2,
	PSP2_KERNEL_ERROR_EVF_COND	= 0x800280E3,
	PSP2_KERNEL_ERROR_SEMA_ERROR	= 0x80028100,
	PSP2_KERNEL_ERROR_UNKNOWN_SEMA_ID	= 0x80028101,
	PSP2_KERNEL_ERROR_SEMA_ZERO	= 0x80028102,
	PSP2_KERNEL_ERROR_SEMA_OVF	= 0x80028103,
	PSP2_KERNEL_ERROR_SIGNAL_ERROR	= 0x80028120,
	PSP2_KERNEL_ERROR_ALREADY_SENT	= 0x80028121,
	PSP2_KERNEL_ERROR_MUTEX_ERROR	= 0x80028140,
	PSP2_KERNEL_ERROR_UNKNOWN_MUTEX_ID	= 0x80028141,
	PSP2_KERNEL_ERROR_MUTEX_RECURSIVE	= 0x80028142,
	PSP2_KERNEL_ERROR_MUTEX_LOCK_OVF	= 0x80028143,
	PSP2_KERNEL_ERROR_MUTEX_UNLOCK_UDF	= 0x80028144,
	PSP2_KERNEL_ERROR_MUTEX_FAILED_TO_OWN	= 0x80028145,
	PSP2_KERNEL_ERROR_MUTEX_NOT_OWNED	= 0x80028146,
	PSP2_KERNEL_ERROR_FAST_MUTEX_ERROR	= 0x80028160,
	PSP2_KERNEL_ERROR_UNKNOWN_FAST_MUTEX_ID	= 0x80028161,
	PSP2_KERNEL_ERROR_FAST_MUTEX_RECURSIVE	= 0x80028162,
	PSP2_KERNEL_ERROR_FAST_MUTEX_LOCK_OVF	= 0x80028163,
	PSP2_KERNEL_ERROR_FAST_MUTEX_FAILED_TO_OWN	= 0x80028164,
	PSP2_KERNEL_ERROR_FAST_MUTEX_NOT_OWNED	= 0x80028165,
	PSP2_KERNEL_ERROR_FAST_MUTEX_OWNED	= 0x80028166,
	PSP2_KERNEL_ERROR_FAST_MUTEX_ALREADY_INITIALIZED	= 0x80028167,
	PSP2_KERNEL_ERROR_FAST_MUTEX_NOT_INITIALIZED	= 0x80028168,
	PSP2_KERNEL_ERROR_LW_MUTEX_ERROR	= 0x80028180,
	PSP2_KERNEL_ERROR_UNKNOWN_LW_MUTEX_ID	= 0x80028181,
	PSP2_KERNEL_ERROR_LW_MUTEX_RECURSIVE	= 0x80028182,
	PSP2_KERNEL_ERROR_LW_MUTEX_LOCK_OVF	= 0x80028183,
	PSP2_KERNEL_ERROR_LW_MUTEX_UNLOCK_UDF	= 0x80028184,
	PSP2_KERNEL_ERROR_LW_MUTEX_FAILED_TO_OWN	= 0x80028185,
	PSP2_KERNEL_ERROR_LW_MUTEX_NOT_OWNED	= 0x80028186,
	PSP2_KERNEL_ERROR_COND_ERROR	= 0x800281A0,
	PSP2_KERNEL_ERROR_UNKNOWN_COND_ID	= 0x800281A1,
	PSP2_KERNEL_ERROR_WAIT_DELETE_MUTEX	= 0x800281A2,
	PSP2_KERNEL_ERROR_WAIT_CANCEL_MUTEX	= 0x800281A3,
	PSP2_KERNEL_ERROR_WAIT_DELETE_COND	= 0x800281A4,
	PSP2_KERNEL_ERROR_WAIT_CANCEL_COND	= 0x800281A5,
	PSP2_KERNEL_ERROR_LW_COND_ERROR	= 0x800281C0,
	PSP2_KERNEL_ERROR_UNKNOWN_LW_COND_ID	= 0x800281C1,
	PSP2_KERNEL_ERROR_WAIT_DELETE_LW_MUTEX	= 0x800281C2,
	PSP2_KERNEL_ERROR_WAIT_DELETE_LW_COND	= 0x800281C3,
	PSP2_KERNEL_ERROR_RW_LOCK_ERROR	= 0x800281E0,
	PSP2_KERNEL_ERROR_UNKNOWN_RW_LOCK_ID	= 0x800281E1,
	PSP2_KERNEL_ERROR_RW_LOCK_RECURSIVE	= 0x800281E2,
	PSP2_KERNEL_ERROR_RW_LOCK_LOCK_OVF	= 0x800281E3,
	PSP2_KERNEL_ERROR_RW_LOCK_NOT_OWNED	= 0x800281E4,
	PSP2_KERNEL_ERROR_RW_LOCK_UNLOCK_UDF	= 0x800281E5,
	PSP2_KERNEL_ERROR_RW_LOCK_FAILED_TO_LOCK	= 0x800281E6,
	PSP2_KERNEL_ERROR_RW_LOCK_FAILED_TO_UNLOCK	= 0x800281E7,
	PSP2_KERNEL_ERROR_EVENT_ERROR	= 0x80028200,
	PSP2_KERNEL_ERROR_UNKNOWN_EVENT_ID	= 0x80028201,
	PSP2_KERNEL_ERROR_EVENT_COND	= 0x80028202,
	PSP2_KERNEL_ERROR_MSG_PIPE_ERROR	= 0x80028220,
	PSP2_KERNEL_ERROR_UNKNOWN_MSG_PIPE_ID	= 0x80028221,
	PSP2_KERNEL_ERROR_MSG_PIPE_FULL	= 0x80028222,
	PSP2_KERNEL_ERROR_MSG_PIPE_EMPTY	= 0x80028223,
	PSP2_KERNEL_ERROR_MSG_PIPE_DELETED	= 0x80028224,
	PSP2_KERNEL_ERROR_TIMER_ERROR	= 0x80028240,
	PSP2_KERNEL_ERROR_UNKNOWN_TIMER_ID	= 0x80028241,
	PSP2_KERNEL_ERROR_EVENT_NOT_SET	= 0x80028242,
	PSP2_KERNEL_ERROR_SIMPLE_EVENT_ERROR	= 0x80028260,
	PSP2_KERNEL_ERROR_UNKNOWN_SIMPLE_EVENT_ID	= 0x80028261,
	PSP2_KERNEL_ERROR_PMON_ERROR	= 0x80028280,
	PSP2_KERNEL_ERROR_PMON_NOT_THREAD_MODE	= 0x80028281,
	PSP2_KERNEL_ERROR_PMON_NOT_CPU_MODE	= 0x80028282,
	PSP2_KERNEL_ERROR_WORK_QUEUE	= 0x80028300,
	PSP2_KERNEL_ERROR_UNKNOWN_WORK_QUEUE_ID	= 0x80028301,
	PSP2_KERNEL_ERROR_UNKNOWN_WORK_TASK_ID	= 0x80028302,
	PSP2_KERNEL_ERROR_PROCESSMGR_ERROR	= 0x80029000,
	PSP2_KERNEL_ERROR_INVALID_PID	= 0x80029001,
	PSP2_KERNEL_ERROR_INVALID_PROCESS_TYPE	= 0x80029002,
	PSP2_KERNEL_ERROR_PLS_FULL	= 0x80029003,
	PSP2_KERNEL_ERROR_INVALID_PROCESS_STATUS	= 0x80029004,
	PSP2_KERNEL_ERROR_PROCESS_CALLBACK_NOTFOUND	= 0x80029005,
	PSP2_KERNEL_ERROR_INVALID_BUDGET_ID	= 0x80029006,
	PSP2_KERNEL_ERROR_INVALID_BUDGET_SIZE	= 0x80029007,
	PSP2_KERNEL_ERROR_CP14_DISABLED	= 0x80029008,
	PSP2_KERNEL_ERROR_EXCEEDED_MAX_PROCESSES	= 0x80029009,
	PSP2_KERNEL_ERROR_PROCESS_REMAINING	= 0x8002900A,
	PSP2_KERNEL_ERROR_NO_PROCESS_DATA	= 0x8002900B,
	PSP2_KERNEL_ERROR_PROCESS_EVENT_INHIBITED	= 0x8002900C,
	PSP2_KERNEL_ERROR_IOFILEMGR_ERROR	= 0x8002A000,
	PSP2_KERNEL_ERROR_IO_NAME_TOO_LONG	= 0x8002A001,
	PSP2_KERNEL_ERROR_IO_REG_DEV	= 0x8002A002,
	PSP2_KERNEL_ERROR_IO_ALIAS_USED	= 0x8002A003,
	PSP2_KERNEL_ERROR_IO_DEL_DEV	= 0x8002A004,
	PSP2_KERNEL_ERROR_IO_WOULD_BLOCK	= 0x8002A005,
	PSP2_KERNEL_ERROR_MODULEMGR_START_FAILED	= 0x8002D000,
	PSP2_KERNEL_ERROR_MODULEMGR_STOP_FAIL	= 0x8002D001,
	PSP2_KERNEL_ERROR_MODULEMGR_IN_USE	= 0x8002D002,
	PSP2_KERNEL_ERROR_MODULEMGR_NO_LIB	= 0x8002D003,
	PSP2_KERNEL_ERROR_MODULEMGR_SYSCALL_REG	= 0x8002D004,
	PSP2_KERNEL_ERROR_MODULEMGR_NOMEM_LIB	= 0x8002D005,
	PSP2_KERNEL_ERROR_MODULEMGR_NOMEM_STUB	= 0x8002D006,
	PSP2_KERNEL_ERROR_MODULEMGR_NOMEM_SELF	= 0x8002D007,
	PSP2_KERNEL_ERROR_MODULEMGR_NOMEM	= 0x8002D008,
	PSP2_KERNEL_ERROR_MODULEMGR_INVALID_LIB	= 0x8002D009,
	PSP2_KERNEL_ERROR_MODULEMGR_INVALID_STUB	= 0x8002D00A,
	PSP2_KERNEL_ERROR_MODULEMGR_NO_FUNC_NID	= 0x8002D00B,
	PSP2_KERNEL_ERROR_MODULEMGR_NO_VAR_NID	= 0x8002D00C,
	PSP2_KERNEL_ERROR_MODULEMGR_INVALID_TYPE	= 0x8002D00D,
	PSP2_KERNEL_ERROR_MODULEMGR_NO_MOD_ENTRY	= 0x8002D00E,
	PSP2_KERNEL_ERROR_MODULEMGR_INVALID_PROC_PARAM	= 0x8002D00F,
	PSP2_KERNEL_ERROR_MODULEMGR_NO_MODOBJ	= 0x8002D010,
	PSP2_KERNEL_ERROR_MODULEMGR_NO_MOD	= 0x8002D011,
	PSP2_KERNEL_ERROR_MODULEMGR_NO_PROCESS	= 0x8002D012,
	PSP2_KERNEL_ERROR_MODULEMGR_OLD_LIB	= 0x8002D013,
	PSP2_KERNEL_ERROR_MODULEMGR_STARTED	= 0x8002D014,
	PSP2_KERNEL_ERROR_MODULEMGR_NOT_STARTED	= 0x8002D015,
	PSP2_KERNEL_ERROR_MODULEMGR_NOT_STOPPED	= 0x8002D016,
	PSP2_KERNEL_ERROR_MODULEMGR_INVALID_PROCESS_UID	= 0x8002D017,
	PSP2_KERNEL_ERROR_MODULEMGR_CANNOT_EXPORT_LIB_TO_SHARED	= 0x8002D018,
	PSP2_KERNEL_ERROR_MODULEMGR_INVALID_REL_INFO	= 0x8002D019,
	PSP2_KERNEL_ERROR_MODULEMGR_INVALID_REF_INFO	= 0x8002D01A,
	PSP2_KERNEL_ERROR_MODULEMGR_ELINK	= 0x8002D01B,
	PSP2_KERNEL_ERROR_MODULEMGR_NOENT	= 0x8002D01C,
	PSP2_KERNEL_ERROR_MODULEMGR_BUSY	= 0x8002D01D,
	PSP2_KERNEL_ERROR_MODULEMGR_NOEXEC	= 0x8002D01E,
	PSP2_KERNEL_ERROR_MODULEMGR_NAMETOOLONG	= 0x8002D01F,
	PSP2_KERNEL_ERROR_LIBRARYDB_NOENT	= 0x8002D080,
	PSP2_KERNEL_ERROR_LIBRARYDB_NO_LIB	= 0x8002D081,
	PSP2_KERNEL_ERROR_LIBRARYDB_NO_MOD	= 0x8002D082,
	PSP2_KERNEL_ERROR_PRELOAD_FAILED	= 0x8002D0F0,
	PSP2_KERNEL_ERROR_PRELOAD_LIBC_FAILED	= 0x8002D0F1,
	PSP2_KERNEL_ERROR_PRELOAD_FIOS2_FAILED	= 0x8002D0F2,
	PSP2_KERNEL_ERROR_AUTHFAIL	= 0x8002F000,
	PSP2_KERNEL_ERROR_NO_AUTH	= 0x8002F001
};

#endif
