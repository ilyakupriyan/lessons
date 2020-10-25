#include <stdio.h>

int main (void) {
	int a, b = 0;
	float div = 0;
	puts ("Enter a and b");
	scanf ("%d%d", &a, &b);
	div = (float) a / b;
	printf ("Sum is %d\n", a+b);
	printf ("Multiplication is %d\n", a*b);
	printf ("Subtraction is %d\n", a-b);
	printf ("Division is %.3f", div);
	return 0;
}