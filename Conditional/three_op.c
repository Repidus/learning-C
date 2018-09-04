/* three_op.c */
#include <stdio.h>

int main(void) {
    int x;
    char ch;

    printf("Enter a integer: ");
    scanf("%d", &x);

    ch = (x < 0)? '-' : '+';
    (ch == '+')? printf("Positive \n") : printf("Negative \n");
    printf("Absolute: %d \n", (x < 0)? -1*x : x);

    return 0;
}