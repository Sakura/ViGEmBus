﻿#pragma once

#include <Windows.h>
#include "ViGEm/km/BusShared.h"

class XusbNotificationRequest
{
    HANDLE parent_bus;
    XUSB_REQUEST_NOTIFICATION payload;
    DWORD transferred;
    OVERLAPPED overlapped;

public:
    XusbNotificationRequest(HANDLE bus, ULONG serial, HANDLE notification);
    bool request_async();

    UCHAR get_led_number() const;
    UCHAR get_large_motor() const;
    UCHAR get_small_motor() const;
};
