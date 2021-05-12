/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2018-2019, Linaro Limited
 */

#ifndef USER_TA_HEADER_DEFINES_H
#define USER_TA_HEADER_DEFINES_H

#include <pkcs11_ta.h>


#define TA_UUID				PKCS11_TA_UUID

#define TA_FLAGS			(TA_FLAG_SINGLE_INSTANCE | \
					 TA_FLAG_MULTI_SESSION | TA_FLAG_EXEC_DDR | \
					 TA_FLAG_INSTANCE_KEEP_ALIVE)

#define TA_STACK_SIZE			(4 * 1024)
#define TA_DATA_SIZE			(16 * 1024)

#define TA_DESCRIPTION			"PKCS#11 trusted application"

#define TA_CURRENT_TA_EXT_PROPERTIES \
    { "gp.ta.description", USER_TA_PROP_TYPE_STRING, \
        TA_DESCRIPTION }, \
    { "gp.ta.version", USER_TA_PROP_TYPE_U32, &(const uint32_t){ 0x0000 } }

#endif /*USER_TA_HEADER_DEFINES_H*/
