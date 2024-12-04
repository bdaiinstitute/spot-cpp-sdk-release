/**
 * Copyright (c) 2023 Boston Dynamics, Inc.  All rights reserved.
 *
 * Downloading, reproducing, distributing or otherwise using the SDK Software
 * is subject to the terms and conditions of the Boston Dynamics Software
 * Development Kit License (20191101-BDSDK-SL).
 */


#pragma once

#include <system_error>

enum class SuccessCondition { Success = 0 };

namespace std {
template <>
struct is_error_condition_enum<SuccessCondition> : true_type {};
}  // namespace std

std::error_condition make_error_condition(SuccessCondition);
