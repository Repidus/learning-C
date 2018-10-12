/* enum_usable2.c */

#include <stdio.h>

enum days {MON, TUE, WED, THU, FRI, SAT, SUN};

int main() {
    enum days day;
    printf("Input a day(0:Monday ~ 6:Sunday): ");
    scanf("%d", &day);

    switch (day) {
        case MON:
            printf("swim.\n");
            break;
        case TUE:
            printf("jog.\n");
            break;
        case WED:
            printf("sleep more.\n");
            break;
        case THU:
            printf("bowl.\n");
            break;
        case FRI:
            printf("sleep more.\n");
            break;
        case SAT:
            printf("hike.\n");
            break;
        case SUN:
            printf("do whatever you want.\n");
            break;
    }

    return 0;
}