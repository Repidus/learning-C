/* calcu_two.c */
#include <stdio.h>

int main(void) {
    int opt;
    float val1, val2;
    float result;

    printf("add 1, subtract 2, multiply 3, divide 4 \n");
    printf("Choose?: ");
    scanf("%d", &opt);
    printf("Enter two real numbers: ");
    scanf("%f %f", &val1, &val2);

    if (opt == 1) {
        result = val1 + val2;
        printf("Result: %f \n", result);
    } else if (opt == 2) {
        result = val1 - val2;
        printf("Result: %f \n", result);
    } else if (opt == 3) {
        result = val1 * val2;
        printf("Result: %f \n", result);
    } else if (opt == 4) {
        result = val1 / val2;
        printf("Result: %f \n", result);
    } else {
        printf("Wrong input. \n");
    }

    return 0;
}