#include <stdio.h>
#define ARRSIZE(x) ( sizeof((x)) / sizeof((x)[0]) )

int main (int argc, char *argv[])
{
        int var = 123;
        int *ptr;
        // wijzig waar "ptr" naar wijst
        ptr = &var;

        printf("ptr\t: %p\n", ptr);
        printf("*ptr\t: %d\n", *ptr);
        printf("&var\t: %p\n", &var);
        printf("&ptr\t: %p\n", &ptr);
        printf("*&var\t: %d\n", *&var);

        printf("====================\n");

        // Toon de memory addresses
        printf("Address of var is                   %p\n", &var);
        printf("Address where ptr is pointing to is %p\n", ptr);

        // Print de waardes
        printf("Var is %d\n", var);
        printf("Var is %d\n", *ptr);

        printf("====================\n");

       int array[4] = { 1, 2, 3, 4 };
        int i;

        for (i = 0; i < ARRSIZE(array); i++) {
                printf("array[%d] = %d\n", i, array[i]);
        }


        return 0;
}
