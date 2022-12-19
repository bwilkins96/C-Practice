#include <stdio.h>
#include <stdlib.h>
#include "age.h"

int main(int argc, char *argv[]) {
    if (argc >= 2) {
        int year = atoi(argv[1]);
        int age = calculateAge(year);
        printf("\nIt has been %u years since %u\n\n", age, year);
    } else {
        printf("\nIt is currently 2022\n\n");
    }
}