/* func_add.c */
#include <stdio.h>

int Add(int a, int b);
int Input(void);
void Result_Print(int val);
void Intro(void);

int main(void) {
    int a, b;
    int output;

    Intro();                // Notifies start.
    a = Input();            // Get input.
    b = Input();            // Get input.

    output = Add(a, b);     // Practice addition.
    Result_Print(output);   // Print the result adequately.

    return 0;
}

int Add(int i, int j) {
    int result = i + j;
    return result;
}

int Input(void) {
    int input;
    scanf("%d", &input);
    return input;
}

void Result_Print(int val) {
    printf("The result of addtion: %d \n", val);
    printf("****** END ****** \n");
}

void Intro(void) {
    printf("****** START ****** \n");
    printf("Enter two integers: ");
}