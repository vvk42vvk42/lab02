#include <stdio.h>

int main(void) {
    int dec_lit = 10;
    int oct_lit = 010;
    int hex_lit = 0x10;
    char ch = 'A';

    printf("DEC 10: %d\n", dec_lit);
    printf("OCT 10: %d\n", oct_lit);
    printf("HEX 10: %d\n", hex_lit);

    printf("INT SUFFIX: %zu %zu %zu %zu\n", sizeof(10), sizeof(10u), sizeof(10LL), sizeof(10ULL));
    printf("FLOAT SUFFIX: %zu %zu %zu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1L));
    printf("FLOAT EQ: %d\n", 0.1f == 0.1);

    printf("CHAR FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR LIT VAR STR: %zu %zu %zu\n", sizeof('A'), sizeof(ch), sizeof("A"));

    return 0;
}
