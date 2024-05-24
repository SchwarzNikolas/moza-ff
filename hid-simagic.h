/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __HID_SIMAGIC_H
#define __HID_SIMAGIC_H

#define USB_VENDOR_ID_SIMAGIC		0x346e
#define USB_DEVICE_ID_SIMAGIC_WHEEL 0x0006

int hid_pidff_init_simagic(struct hid_device *hdev);

#endif
