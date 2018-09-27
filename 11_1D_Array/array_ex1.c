#include <stdio.h>

int main(void) {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 3, 5, 7, 9};
    int arr3[5] = {1, 2};

    printf("%d \n", sizeof(arr2)/sizeof(int));
    printf("%d %d %d \n", arr3[2], arr3[3], arr3[4]);

    return 0;
}