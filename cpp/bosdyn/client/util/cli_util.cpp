/**
 * Copyright (c) 2023 Boston Dynamics, Inc.  All rights reserved.
 *
 * Downloading, reproducing, distributing or otherwise using the SDK Software
 * is subject to the terms and conditions of the Boston Dynamics Software
 * Development Kit License (20191101-BDSDK-SL).
 */


#include "bosdyn/client/util/cli_util.h"
#include <CLI/CLI.hpp>
#include "bosdyn/common/status.h"

namespace bosdyn {

namespace client {

void AddBaseArguments(CLI::App& parser, std::string& hostname) {
    parser.add_option("hostname", hostname, "Hostname or IP of the robot.");
}

void AddCommonArguments(CLI::App& parser, CommonCLIArgs& args) {
    AddBaseArguments(parser, args.hostname);
    parser.add_option("--username", args.username, "Username to authenticate with the robot.")
        ->envname("BOSDYN_CLIENT_USERNAME");
    parser.add_option("--password", args.password, "Password to authenticate with the robot.")
        ->envname("BOSDYN_CLIENT_PASSWORD");
}


}  // namespace client

}  // namespace bosdyn
