/* fct_ptr1.c */
#include <stdio.h>

void Add(int a, int b);
void SPrint(char* str);

int main(void) {
    char* string = "Function Pointer";
    int a = 10, b = 20;

    void (*fPtr1)(int, int) = Add;
    void (*fPtr2)(char*) = SPrint;

    // Call by function pointers
    fPtr1(a, b);
    fPtr2(string);

    return 0;
}

void Add(int a, int b) {
    printf("Result of addition: %d \n", a+b);
}

void SPrint(char* str) {
    printf("String input: %s \n", str);
}