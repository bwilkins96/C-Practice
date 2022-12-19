#include <stdio.h>

int main(void) {
    int numbers[5] = {1, 2, 3, 4, 5};

    printf("\nnumbers array:\n");
    printf("{");

    for (int i=0; i<5; i++) {
        printf("%u", numbers[i]);
        if (i < 4) {
            printf(", ");
        }
    }

    printf("}\n\n");
}
