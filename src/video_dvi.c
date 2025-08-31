#include "video_dvi.h"
#include <string.h>
#include <stdio.h>

#define TERM_COLS 80
#define TERM_ROWS 30

static char termbuf[TERM_ROWS][TERM_COLS];
static int cursor_x = 0;
static int cursor_y = 0;

void dvi_init(void) {
    memset(termbuf, ' ', sizeof(termbuf));
    printf("Video-Stub Initialized (HDMI/DVI)\n");
}

void dvi_putc(char c) {
    if(c == '\n') { cursor_x = 0; cursor_y++; }
    else if(c == '\r') { cursor_x = 0; }
    else {
        termbuf[cursor_y][cursor_x] = c;
        cursor_x++;
        if(cursor_x >= TERM_COLS) { cursor_x = 0; cursor_y++; }
    }
    if(cursor_y >= TERM_ROWS) cursor_y = 0;

    // Stub-Ausgabe
    putchar(c);
}

void dvi_puts(const char *s) {
    while(*s) dvi_putc(*s++);
}
