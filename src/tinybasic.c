#include <stdio.h>
#include <string.h>
#include "tinybasic.h"
#include "video_dvi.h"
#include "es8311_audio.h"
#include "sd_fatfs.h"

void tb_init(void) {
    dvi_puts("TinyBASIC Initialized\n");
}

void tb_run(void) {
    char line[64];
    while(1) {
        dvi_puts("> ");
        // Einfacher Input über USB Tastatur (Stub)
        // In echter Version usbhost_getc() verwenden
        fgets(line, sizeof(line), stdin);

        if(strncmp(line, "PRINT", 5) == 0) {
            dvi_puts(line + 6);
        } else if(strncmp(line, "BEEP", 4) == 0) {
            es8311_play_tone(440, 200); // feste Frequenz als Beispiel
        } else {
            dvi_puts("OK\n");
        }
    }
}
