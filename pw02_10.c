#include <stdio.h>
#include <stdint.h>

int main(void) {
    int id;
    unsigned int raw_status;
    uint8_t status;
    float voltage;
    uint16_t checksum;

    scanf("%x %o %f", &id, &raw_status, &voltage);

    status = (uint8_t)raw_status;
    checksum = (uint16_t)(id + status);

    printf("PACKET ID: %d\n", id);
    printf("STATUS CODE: %u\n", (unsigned int)status);
    printf("STATUS CHAR: %c\n", status);
    printf("VOLTAGE: %.2f\n", (double)voltage);
    printf("CHECKSUM: %u\n", (unsigned int)checksum);

    return 0;
}
