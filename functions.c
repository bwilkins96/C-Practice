#include <stdio.h>

int main(void) {
    int add(int val1, int val2) {
        return val1 + val2;
    }

    int subtract(int val1, int val2) {
        return val1 - val2;
    }

    int value1 = 14;
    int value2 = 5;

    printf("\n%u + %u = %u\n", value1, value2, add(value1, value2));
    printf("\n%u - %u = %u\n\n", value1, value2, subtract(value1, value2));
}