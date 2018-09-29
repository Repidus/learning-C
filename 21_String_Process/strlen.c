/* strlen.c */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    while (1) {
        fgets(str, sizeof(str), stdin);
        printf("The length of the string: %d \n", strlen(str));
        // strlen returns the length of passed string, without the null charater in the end.
        // In this program it counts the newline character(\n) in the end of the input string.
    }

    return 0;
}