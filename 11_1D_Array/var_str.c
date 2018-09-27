/* var_str.c */
#include <stdio.h>

int main(void) {
    int i;
    char ch;
    char str[6] = "Hello";

    printf("--String before the change--\n");
    printf("%s \n", str);

    for (i = 0; i < 6; i++)
        printf("%c | ", str[i]);
    
    // Changes the string
    for (i = 0; i < 3; i++) {
        ch = str[4-i];
        str[4-i] = str[i];
        str[i] = ch;
    }   // The last character of the string is \0.

    printf("\n\n--String after the change--\n");
    printf("%s \n", str);

    return 0;
}