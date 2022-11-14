#ifndef A1586A61_CB02_42BE_9F21_90C4BF8DCEC7
#define A1586A61_CB02_42BE_9F21_90C4BF8DCEC7
#include <lpc17xx.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define LCD_WIDTH   (320)
#define LCD_HEIGHT  (240)
#define LCD_LENGTH  (LCD_WIDTH * LCD_HEIGHT)

struct bfont {
    bool flip_h;
    size_t char_width;
    size_t char_height;
    size_t ascii_offset;
    const uint8_t *data;
};

void lcd_init(void);
void lcd_clear(uint16_t color);
void lcd_rect(uint16_t color, size_t x, size_t y, size_t width, size_t height);
void lcd_bfont_char(const struct bfont *font, uint16_t fg, uint16_t bg, size_t cx, size_t cy, char c);
void lcd_bfont_string(const struct bfont *font, uint16_t fg, uint16_t bg, size_t cx, size_t cy, const char *s);

#endif /* A1586A61_CB02_42BE_9F21_90C4BF8DCEC7 */
