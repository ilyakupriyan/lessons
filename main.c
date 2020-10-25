#include <stdio.h>

int main (void) {
	int a, b = 0;
	puts ("Enter a and b");
	scanf ("%d%d", &a, &b);
	printf ("Sum is %d\n", a+b);
	printf ("Multiplication is %d\n", a*b);
	printf ("Subtraction is %d\n", a-b);
	return 0;
}