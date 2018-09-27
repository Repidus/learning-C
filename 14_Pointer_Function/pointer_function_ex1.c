#include <stdio.h>

int main(void) {
    int arr[5];
    int* pArr = arr;

    printf("%d \n", sizeof(arr));
    printf("%d \n", sizeof(pArr));  // Commonly you should pass the length of the array with it.

    return 0;
}