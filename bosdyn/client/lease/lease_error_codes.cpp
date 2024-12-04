/**
 * Copyright (c) 2023 Boston Dynamics, Inc.  All rights reserved.
 *
 * Downloading, reproducing, distributing or otherwise using the SDK Software
 * is subject to the terms and conditions of the Boston Dynamics Software
 * Development Kit License (20191101-BDSDK-SL).
 */


#include "bosdyn/client/lease/lease_error_codes.h"
#include "bosdyn/client/error_codes/proto_enum_to_stderror_macro_source.h"

DEFINE_PROTO_ENUM_ERRORCODE_IMPL_API(LeaseUseResult_Status, valcode == 1)
DEFINE_PROTO_ENUM_ERRORCODE_IMPL_API(AcquireLeaseResponse_Status, valcode == 1)
DEFINE_PROTO_ENUM_ERRORCODE_IMPL_API(TakeLeaseResponse_Status, valcode == 1)
DEFINE_PROTO_ENUM_ERRORCODE_IMPL_API(ReturnLeaseResponse_Status, valcode == 1)
