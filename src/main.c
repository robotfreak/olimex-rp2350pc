#include "hardware_rp2350.h"
#include "video_dvi.h"
#include "usb_host_hid.h"
#include "sd_fatfs.h"
#include "es8311_audio.h"
#include "tinybasic.h"
//#include "ff.h"
//#include "ffsystem.h"

#include "pico/stdlib.h"

int main(void) {
    hardware_init();
    dvi_init();
    usbhost_init();
    sd_init();
    es8311_init();

    tb_init();
    tb_run();

    while(1) {
        usbhost_poll();
    }
}
