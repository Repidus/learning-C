/* two_same.c */
#include <stdio.h>

int main(void) {
    int arr[2] = {1, 2};
    int* pArr = arr;

    // print by array name (use array name like a pointer)
    printf("%d, %d \n", arr[0], *(arr+1));

    // print by pointer (use pointer like array name)
    printf("%d, %d \n", pArr[0], *(pArr+1));

    return 0;
}