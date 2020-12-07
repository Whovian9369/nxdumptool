/*
 * ums.h
 *
 * Copyright (c) 2020, DarkMatterCore <pabloacurielz@gmail.com>.
 *
 * This file is part of nxdumptool (https://github.com/DarkMatterCore/nxdumptool).
 *
 * nxdumptool is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * nxdumptool is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifndef __UMS_H__
#define __UMS_H__

/// Initializes the USB Mass Storage interface.
bool umsInitialize(void);

/// Closes the USB Mass Storage interface.
void umsExit(void);

/// Returns true if USB Mass Storage device info has been updated.
bool umsIsDeviceInfoUpdated(void);

/// Returns the available USB Mass Storage device count.
u32 umsGetDeviceCount(void);

/// Saves USB Mass Storage device info to 'out_device' using the provided index.
bool umsGetDeviceByIndex(u32 idx, UsbHsFsDevice *out_device);

#endif /* __UMS_H__ */
