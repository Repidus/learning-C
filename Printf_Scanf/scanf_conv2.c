/* scanf_conv2.c */
#include <stdio.h>

int main(void) {
    float f;
    double d;

    printf("Enter two real numbers: ");
    scanf("%f %le", &f, &d);    // You should use format character %le for double type input. Not %e.

    printf("The output according to the input: ");
    printf("%f %e \n", f, d);

    return 0;
}