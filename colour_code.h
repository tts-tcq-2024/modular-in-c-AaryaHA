#ifndef COLOR_CODE_H
#define COLOR_CODE_H

typedef struct {
    char major_color[20];
    char minor_color[20];
    int number;
} ColorPair;

void initialize_color_pairs(ColorPair pairs[]);
void print_color_manual(ColorPair pairs[]);
const char* get_major_color(int number);
const char* get_minor_color(int number);

#endif /* COLOR_CODE_H */
