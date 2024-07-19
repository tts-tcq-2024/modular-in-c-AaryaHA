#include <stdio.h>
#include <string.h>
#include "color_code.h"

#define NUM_COLOR_PAIRS 25

void initialize_color_pairs(ColorPair pairs[]) {
    const char* major_colors[NUM_COLOR_PAIRS] = {
        "White", "Red", "Black", "Yellow", "Violet", 
        "Orange", "Blue", "Green", "Brown", "Slate",
        "Red", "Black", "Yellow", "Violet", "Orange", 
        "Blue", "Green", "Brown", "Slate", "White",
        "Black", "Yellow", "Violet", "Orange", "Blue"
    };

    const char* minor_colors[NUM_COLOR_PAIRS] = {
        "Blue", "Black", "Red", "Green", "Slate",
        "White", "Orange", "Violet", "Blue", "White",
        "Black", "Red", "Green", "Slate", "White",
        "Orange", "Violet", "Blue", "White", "Black",
        "Red", "Green", "Slate", "White", "Orange"
    };

    for (int i = 0; i < NUM_COLOR_PAIRS; ++i) {
        strcpy(pairs[i].major_color, major_colors[i]);
        strcpy(pairs[i].minor_color, minor_colors[i]);
        pairs[i].number = i + 1;
    }
}

const char* get_major_color(int number) {
    return (number >= 1 && number <= NUM_COLOR_PAIRS) ? get_major_color(number - 1) : "Unknown";
}

const char* get_minor_color(int number) {
    return (number >= 1 && number <= NUM_COLOR_PAIRS) ? get_minor_color(number - 1) : "Unknown";
}

void print_color_manual(ColorPair pairs[]) {
    printf("Color Coding Manual:\n");
    for (int i = 0; i < NUM_COLOR_PAIRS; ++i) {
        printf("%d. Major: %-10s, Minor: %-10s\n", 
               pairs[i].number, pairs[i].major_color, pairs[i].minor_color);
    }
}
