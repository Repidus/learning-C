/* char_add.c */
#include <stdio.h>

int main(void) {
    char a, b;
    char result;

    printf("Enter 2 numbers from -50 to 50: ");
    scanf("%d %d", &a, &b);
    result = a + b;
    printf("The result of addition: %d \n", result);

    return 0;
}