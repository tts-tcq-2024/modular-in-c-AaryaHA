#include <stdio.h>
#include "color_code.h"

int main() {
    ColorPair pairs[NUM_COLOR_PAIRS];
    initialize_color_pairs(pairs);
    print_color_manual(pairs);
    return 0;
}
