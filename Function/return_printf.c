/* return_printf.c */
#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 0;

    a = printf("12345 \n");
    b = printf("I love my home. \n");

    printf("%d %d \n", a, b);   // Function printf returns the length of output.

    return 0;
}