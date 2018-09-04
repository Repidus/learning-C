/* english_school.c */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a integer between 1 to 5: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("1 is ONE. \n");
            break;
        case 2:
            printf("2 is TWO. \n");
            break;
        case 3:
            printf("3 is THREE. \n");
            break;
        case 4:
            printf("4 is FOUR. \n");
            break;
        case 5:
            printf("5 is FIVE. \n");
            break;
        default:
            printf("I don't know! \n");
    }

    return 0;
}