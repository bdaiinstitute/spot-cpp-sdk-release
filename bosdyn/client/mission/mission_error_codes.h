/**
 * Copyright (c) 2023 Boston Dynamics, Inc.  All rights reserved.
 *
 * Downloading, reproducing, distributing or otherwise using the SDK Software
 * is subject to the terms and conditions of the Boston Dynamics Software
 * Development Kit License (20191101-BDSDK-SL).
 */


#include <bosdyn/api/mission/mission.pb.h>
#include "bosdyn/client/error_codes/proto_enum_to_stderror_macro.h"

DEFINE_PROTO_ENUM_ERRORCODE_HEADER_MISSION(PauseMissionResponse_Status)
DEFINE_PROTO_ENUM_ERRORCODE_HEADER_MISSION(LoadMissionResponse_Status)
DEFINE_PROTO_ENUM_ERRORCODE_HEADER_MISSION(PlayMissionResponse_Status)
DEFINE_PROTO_ENUM_ERRORCODE_HEADER_MISSION(RestartMissionResponse_Status)
