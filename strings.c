#include <stdio.h>
#include <string.h>

int main(void) {
    char name1[4] = "Ben";
    char name2[7] = "Hannah";

    printf("\n%s loves %s!\n", name1, name2);
    printf("\n%s's name is %lu characters long\n\n", name2, strlen(name2));
}
