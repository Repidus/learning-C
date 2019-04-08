/* square3.c */
#include <stdio.h>

#define SQUARE(x) ((x) * (x))
int square(int x);

int main(void) {
	int a;

	printf("Input a number(int): ");
	scanf("%d", &a);

	printf("Square of %d: %d \n", a+3, SQUARE(a+3));
	printf("Square of %d: %d \n", a+3, square(a+3));

	return 0;
}

int square(int x) {
	return x*x;
}