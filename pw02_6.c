#include <stdio.h>
#include <stdint.h>

int main(void) {
    unsigned int input;
    uint8_t reg;

    scanf("%u", &input);
    reg = (uint8_t)input;

    reg = reg + 10;
    printf("ADD: %u\n", (unsigned int)reg);

    reg = (uint8_t)input;
    reg = reg * 2;
    printf("MUL2: %u\n", (unsigned int)reg);

    reg = (uint8_t)input;
    reg = reg * reg;
    printf("SQR: %u\n", (unsigned int)reg);

    return 0;
}
