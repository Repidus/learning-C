/* fct_ptr2.c */
#include <stdio.h>

void SelFunction(int s);
void Add(void);
void Min(void);

int main(void) {
    int sel;

    while (1) {
        printf("Choose: addition(1), subtraction(2), exit(3) ");
        scanf("%d", &sel);
        if (sel == 3)
            break;
        SelFunction(sel);
    }

    printf("Program ends. \n");

    return 0;
}

void SelFunction(int s) {
    void (*fPtr)(void);
    if (s == 1)
        fPtr = Add;
    else 
        fPtr = Min;
    fPtr();
}

void Add(void) {
    int a, b;
    printf("Input two numbers for addition: ");
    scanf("%d %d", &a, &b);
    printf("Result of addition: %d \n\n", a+b);
}

void Min(void) {
    int a, b;
    printf("Input two numbers for subtraction: ");
    scanf("%d %d", &a, &b);
    printf("Result of subtraction: %d \n\n", a-b);
}