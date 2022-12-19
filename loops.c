#include <stdio.h>

int main(void) {
    int i;

    printf("\nfor loop\n");
    for(i = 0; i <= 10; i++) {
        printf("%u\n", i);
    }

    printf("\nwhile loop\n");
    while(i >= 0) {
        i--;
        printf("%u\n", i);
    }

    printf("\ndo while loop\n");
    do {
        i++;
        printf("%u\n", i);

        if (i == 9) {
            printf("broken at i = %u!\n\n", i);
            break;
        }
    } while (i<=10);
}
