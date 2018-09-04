/* add_ton.c */
#include <stdio.h>

int main(void) {
    int total = 0;
    int i, n;

    printf("Add from 0 to n, n is: ");
    scanf("%d", &n);

    for (i = 0; i < n+1; i++) 
        total += i;

    printf("Addition from 0 to %d is: %d \n", n, total);

    return 0;
}