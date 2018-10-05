/* distance1.c */

#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main() {
    struct point p1, p2;
    double distance;

    fputs("Enter x, y values of the 1st point: ", stdout);
    scanf("%d %d", &p1.x, &p1.y);

    fputs("Enter x, y values of the 2nd point: ", stdout);
    scanf("%d %d", &p2.x, &p2.y);

    // The formula about the distance between 2 points
    distance = sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));

    printf("The distance between those 2 points is %f.", distance);

    return 0;
}