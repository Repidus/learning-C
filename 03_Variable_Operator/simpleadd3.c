/* simpleadd3.c */
#include <stdio.h>

int main(void) {
    int result;
    int val1, val2;

    printf("The first number: ");
    scanf("%d", &val1);     // The first data input

    printf("The second number: ");
    scanf("%d", &val2);     // The second data input

    result = val1 + val2;
    printf("%d + %d = %d \n", val1, val2, result);

    return 0;
}
