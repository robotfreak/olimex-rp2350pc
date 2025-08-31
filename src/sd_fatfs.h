#ifndef SD_FATFS_H
#define SD_FATFS_H

#include <stdbool.h>

bool sd_init(void);
bool sd_mount(void);
bool sd_unmount(void);

#endif
