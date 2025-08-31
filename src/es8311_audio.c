#include "es8311_audio.h"
#include <stdio.h>

void es8311_init(void) {
    // TODO: ES8311 I2C-Init
    printf("[Audio] ES8311 Init stub\n");
}

void es8311_play_tone(int frequency, int duration_ms) {
    // TODO: Später echte Audioausgabe
    printf("[Audio] Play tone %d Hz for %d ms\n", frequency, duration_ms);
}
