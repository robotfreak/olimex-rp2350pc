#include "hardware_rp2350.h"
#include "video_dvi.h"
#include "usb_host_hid.h"
#include "sd_fatfs.h"
#include "es8311_audio.h"
#include "pico/stdlib.h"

#include "hardware_rp2350.h"
#include "hardware/spi.h"
#include "hardware/i2c.h"

void hardware_init(void) {
    stdio_init_all();

    // Beispiel-Init für I2C & SPI
    i2c_init(i2c0, 100 * 1000);
    gpio_set_function(PIN_I2C_SDA, GPIO_FUNC_I2C);
    gpio_set_function(PIN_I2C_SCL, GPIO_FUNC_I2C);
    gpio_pull_up(PIN_I2C_SDA);
    gpio_pull_up(PIN_I2C_SCL);

    spi_init(spi0, 1000 * 1000);
    gpio_set_function(PIN_SPI_MISO, GPIO_FUNC_SPI);
    gpio_set_function(PIN_SPI_MOSI, GPIO_FUNC_SPI);
    gpio_set_function(PIN_SPI_SCK, GPIO_FUNC_SPI);
}

/*
int tb_putc(char c) {
    dvi_putc(c); // deine Videoausgabe-Funktion
    return 0;
}

int tb_getc(void) {
    return usbhost_getc(); // wartet auf Tastatureingabe
}

int tb_load(const char *name, uint8_t *buf, size_t maxlen) {
    return sd_load(name, buf, maxlen); // FatFS-Wrap
}

int tb_save(const char *name, const uint8_t *buf, size_t len) {
    return sd_save(name, buf, len);
}

void tb_beep(uint16_t freq, uint16_t ms) {
    es8311_play_tone(freq, ms); // I²S/PWM-Ausgabe
}

void tb_delay_ms(uint32_t ms) {
    sleep_ms(ms);
}
*/