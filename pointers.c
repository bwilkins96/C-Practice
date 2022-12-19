#include <stdio.h>

int main(void) {
    float age = 13.8;
    printf("\nage: %f\n", age);
    printf("memory address: %p\n", &age);
    
    float *address = &age;
    printf("address: %p\n", address);
    printf("address points to: %f\n\n", *address);
}