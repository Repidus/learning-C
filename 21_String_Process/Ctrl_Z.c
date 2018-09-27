/* Ctrl_Z.c */

#include <stdio.h>

int main() {
    char ch = 0;

    while (ch != EOF) {
        ch = getchar();
        putchar(ch);
    }

    printf("Program ends. \n");

    return 0;
}