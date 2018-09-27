/* main_arg.c */
#include <stdio.h>

int main(int argc, char** argv) {
    int i = 0;
    printf("The number of delivered strings: %d \n", argc);

    for (i=0; i < argc; i++)
        printf("String number %d: %s \n", i+1, argv[i]);

    return 0;
}