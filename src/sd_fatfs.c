#include "sd_fatfs.h"
#include <stdio.h>

bool sd_init(void) {
    printf("[SD] Init stub\n");
    return true;
}

bool sd_mount(void) {
    printf("[SD] Mount stub\n");
    return true;
}

bool sd_unmount(void) {
    printf("[SD] Unmount stub\n");
    return true;
}
