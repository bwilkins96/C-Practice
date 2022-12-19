#include <stdio.h>
#define PI 3.14
#define POWER(x) ((x) * (x))

int main(void) {
    #ifdef PI
        printf("\n%f", PI);
        printf("\n%f\n\n", POWER(PI)); 
    #endif
}