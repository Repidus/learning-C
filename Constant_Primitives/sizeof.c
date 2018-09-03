/* sizeof.c */
#include <stdio.h>

int main(void) {
    char c = 10;
    int i = 3048;
    double f = 3.1415;

    printf("The size of variable c: %d \n", sizeof c);
    printf("The size of variable i: %d \n", sizeof i);
    printf("The size of variable f: %d \n", sizeof f);

    printf("Memory assigned to char: %d \n", sizeof(char));
    printf("Memory assigned to int: %d \n", sizeof(int));
    printf("Memory assigned to double: %d \n", sizeof(double));

    printf("Memory assigned to float: %d \n", sizeof(float));
    printf("Memory assigned to double: %d \n", sizeof(double));
    
    return 0;
}