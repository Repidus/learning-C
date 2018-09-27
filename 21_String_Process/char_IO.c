/* char_IO.c */

#include <stdio.h>

int main() {
    char ch = 0;

    while (ch != 'q') {
        ch = getchar();     // same as fgetc(stdin).
        putchar(ch);        // same as fputc(ch, stdout).
    }

    return 0;
}