#ifndef HARDWARE_RP2350_H
#define HARDWARE_RP2350_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "pico/stdlib.h"

// Falls Board-spezifische Pins / Einstellungen nötig sind:
#define PIN_I2C_SDA 4
#define PIN_I2C_SCL 5
#define PIN_SPI_MISO 16
#define PIN_SPI_MOSI 19
#define PIN_SPI_SCK  18
#define PIN_SD_CS    17

void hardware_init(void);

// ==== TinyBASIC I/O API ====
// Diese Funktionen werden vom TinyBASIC-Core aufgerufen.
// Sie müssen in deiner Plattform-Implementierung definiert werden.

/*
#ifdef __cplusplus
extern "C" {
#endif

// Ein Zeichen ausgeben (z.B. auf DVI-Textkonsole)
int tb_putc(char c);

// Ein Zeichen von der Tastatur lesen (USB Host HID)
// Soll blockierend auf Eingabe warten
int tb_getc(void);

// Datei aus SD/FatFS laden (liefert gelesene Bytes oder -1 bei Fehler)
int tb_load(const char *name, uint8_t *buf, size_t maxlen);

// Datei auf SD/FatFS speichern (liefert geschriebene Bytes oder -1 bei Fehler)
int tb_save(const char *name, const uint8_t *buf, size_t len);

// Einfacher Ton (BEEP) ausgeben
void tb_beep(uint16_t freq, uint16_t ms);

// Optional: Millisekunden-Delay
void tb_delay_ms(uint32_t ms);

#ifdef __cplusplus
}
#endif
*/
#endif // HARDWARE_RP2350_H
