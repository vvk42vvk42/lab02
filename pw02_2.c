#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int num1, num2, sum;
    bool flag1, flag2;

    scanf("%d %d", &num1, &num2);

    flag1 = num1;
    flag2 = num2;
    sum = flag1 + flag2;

    printf("MODULE_READY: %d\n", flag1);
    printf("FAULT_STATE: %d\n", flag2);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", sum);

    return 0;
}
