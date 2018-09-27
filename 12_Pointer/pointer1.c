/* pointer1.c */
#include <stdio.h>

int main(void) {
    int a = 2005;
    int* pA = &a;

    printf("pA: %d \n", pA);    // prints the address that pointer pA has.
    printf("&a: %d \n", &a);    // prints the address of variable a.

    (*pA)++;    // same as a++.

    printf("a: %d \n", a);
    printf("*pA: %d \n", *pA);

    return 0;
}