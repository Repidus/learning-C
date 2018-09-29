/* fflush.c */

#include <stdio.h>

int main() {
    char perID[7];  // 6 + null char = 7
    char name[10];

    fputs("Enter the front 6 digits of the social security number: ", stdout);
    fgets(perID, sizeof(perID), stdin);

    fflush(stdin);  // clear the input buffer.

    fputs("Enter the name: ", stdout);
    fgets(name, sizeof(name), stdin);

    printf("The front 6 digits of the SSN: %s\n", perID);
    printf("Name:                          %s\n", name);

    return 0;
}