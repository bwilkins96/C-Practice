#include <stdio.h>

int main(void) {
    char name[20];

    printf("\nEnter your name: ");
    scanf("%s", name);
    printf("\nHello %s! I hope you are doing well.\n\n", name);

    int num1;
    int num2;

    printf("Please enter a number: ");
    scanf("%u", &num1);
    printf("\nPlease enter another number: ");
    scanf("%u", &num2);

    int ans = num1 + num2;

    printf("\n%u + %u = %u\n\n", num1, num2, ans);
}