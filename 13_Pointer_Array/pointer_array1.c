/* pointer_array.c */
#include <stdio.h>

int main(void) {
    int a[5] = {0, 1, 2, 3, 4};

    printf("%d, %d \n", a[0], a[1]);            // prints elements of the array.

    printf("%d, %d \n", &a[0], &a[1]);          // prints addresses of elements of the array.

    printf("The name of the array: %d \n", a);  // prints the name of the array.

    return 0;
}