// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "core/libraries/error_codes.h"

// Pad library
constexpr int ORBIS_PAD_ERROR_INVALID_ARG = 0x80920001;
constexpr int ORBIS_PAD_ERROR_INVALID_PORT = 0x80920002;
constexpr int ORBIS_PAD_ERROR_INVALID_HANDLE = 0x80920003;
constexpr int ORBIS_PAD_ERROR_ALREADY_OPENED = 0x80920004;
constexpr int ORBIS_PAD_ERROR_NOT_INITIALIZED = 0x80920005;
constexpr int ORBIS_PAD_ERROR_INVALID_LIGHTBAR_SETTING = 0x80920006;
constexpr int ORBIS_PAD_ERROR_DEVICE_NOT_CONNECTED = 0x80920007;
constexpr int ORBIS_PAD_ERROR_DEVICE_NO_HANDLE = 0x80920008;
constexpr int ORBIS_PAD_ERROR_FATAL = 0x809200FF;
constexpr int ORBIS_PAD_ERROR_NOT_PERMITTED = 0x80920101;
constexpr int ORBIS_PAD_ERROR_INVALID_BUFFER_LENGTH = 0x80920102;
constexpr int ORBIS_PAD_ERROR_INVALID_REPORT_LENGTH = 0x80920103;
constexpr int ORBIS_PAD_ERROR_INVALID_REPORT_ID = 0x80920104;
constexpr int ORBIS_PAD_ERROR_SEND_AGAIN = 0x80920105;
