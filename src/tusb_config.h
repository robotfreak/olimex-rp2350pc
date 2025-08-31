#ifndef _TUSB_CONFIG_H_
#define _TUSB_CONFIG_H_

// --- MCU & OS ---
#define CFG_TUSB_MCU OPT_MCU_RP2040
#define CFG_TUSB_OS  OPT_OS_PICO

// --- Debug ---
#define CFG_TUSB_DEBUG 0

// --- Host Configuration ---
#define CFG_TUH_ENABLED 1           // Host mode enabled
#define CFG_TUH_HID 1               // HID class enabled
#define CFG_TUH_HID_KEYBOARD 1      // Keyboard enabled
#define CFG_TUH_HID_MOUSE 0         // Mouse disabled
#define CFG_TUH_HID_GENERIC 0       // Generic HID disabled

// --- Device Configuration (deaktiviert, da Host) ---
#define CFG_TUD_ENABLED 0

// --- Stack Sizes ---
#define CFG_TUH_TASK_PRIORITY 1
#define CFG_TUH_TASK_STACK_SZ 256

#endif // _TUSB_CONFIG_H_
