#include <stdio.h>
#include <stdint.h>

int main(void) {
    long long val8 = (long long)INT8_MAX - INT8_MIN + 1;
    printf("INT8: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int8_t), INT8_MIN, INT8_MAX, val8);

    unsigned long long uval8 = (unsigned long long)UINT8_MAX - 0 + 1;
    printf("UINT8: size=%zu, min=0, max=%d, values=%llu\n", sizeof(uint8_t), UINT8_MAX, uval8);

    long long val16 = (long long)INT16_MAX - INT16_MIN + 1;
    printf("INT16: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int16_t), INT16_MIN, INT16_MAX, val16);

    unsigned long long uval16 = (unsigned long long)UINT16_MAX - 0 + 1;
    printf("UINT16: size=%zu, min=0, max=%d, values=%llu\n", sizeof(uint16_t), UINT16_MAX, uval16);

    long long val32 = (long long)INT32_MAX - INT32_MIN + 1;
    printf("INT32: size=%zu, min=%d, max=%d, values=%lld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, val32);

    unsigned long long uval32 = (unsigned long long)UINT32_MAX - 0 + 1;
    printf("UINT32: size=%zu, min=0, max=%d, values=%llu\n", sizeof(uint32_t), UINT32_MAX, uval32);

    return 0;
}
