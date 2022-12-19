#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("\nYou included %d parameters in the command line.\n\nThose parameters were:", argc);

    for(int i=0; i < argc; i++) {
        printf("\n%s", argv[i]);
    }

    printf("\n\n");
}