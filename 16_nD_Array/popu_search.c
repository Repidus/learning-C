/* popu_search.c */
#include <stdio.h>

int main(void) {
    int somang[4][2];
    int i, j;
    int popu;

    // input population of every household
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("input population of room #%d %d floor: ", j+1, i+1);
            scanf("%d", &somang[i][j]);
        }
    }

    // print population of each floor of Somang apartment
    for (i = 0; i < 4; i++) {
        popu = 0;
        for (j = 0; j < 2; j++) {
            popu += somang[i][j];
        }
        printf("Population of floor %d: %d \n", i+1, popu);
    }

    return 0;
}