/*
 *
 * Copyright (c) 2016 Nest Labs, Inc.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *    Description:
 *      This file declares function related to "add-route" command
 *      in wpanctl.
 *
 */

#ifndef WPANCTL_TOOL_CMD_ADD_ROUTE_H
#define WPANCTL_TOOL_CMD_ADD_ROUTE_H

#include "wpanctl-utils.h"

int tool_cmd_add_route(int argc, char* argv[]);

#endif