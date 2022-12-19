#include <stdio.h>

typedef enum {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
} WEEKDAY;

void printWeekdays(void) {
    WEEKDAY day = Monday;

    while (day <= Sunday) {

        if (day == Saturday) {
            printf("It's saturday! :)\n");
        } else if (day == Sunday) {
            printf("It's sunday! :)\n");
        } else if (day == Monday) {
            printf("It's monday! :(\n");
        } else if (day == Tuesday) {
            printf("It's tuesday! :(\n");
        } else if (day == Wednesday) {
            printf("It's wednesday!\n");
        } else if (day == Thursday) {
            printf("It's thursday!\n");
        } else if (day == Friday) {
            printf("It's friday! :)\n");
        } else {
            printf("I don't know what day it is!\n");
        }

        day++;
    }
}

typedef struct {
   int age;
   char *name; 
} PERSON;

void printPeople(void) {
    PERSON Hannah = { 24, "Hannah" };
    PERSON Ben = { 26, "Ben" };

    printf("\n%s, %d, loves %s, %d, very very much!\n", Ben.name, Ben.age, Hannah.name, Hannah.age);
}

int main(void) {
    printf("\n");
    printWeekdays();
    printPeople();
    printf("\n");
}