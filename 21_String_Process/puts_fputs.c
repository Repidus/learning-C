/* puts_fputs.c */

#include <stdio.h>

int main() {
    fputs("The output by fputs: ", stdout);
    fputs("I Love Linux ", stdout);

    fputs("\n", stdout);

    puts("The output by puts: ");
    puts("I Love Linux ");

    return 0;
}