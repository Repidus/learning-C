/* fgets.c */

#include <stdio.h>

int main() {
    char str[10];

    fputs("Enter a string: ", stdout);
    fgets(str, sizeof(str), stdin);     
    // Function gets is never used because of its string overflow issue.
    // And also it automatically insert a null character at last of the string.

    fputs("Entered string: ", stdout);
    fputs(str, stdout);

    return 0;
}