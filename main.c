#include <stdio.h>

void test (int sum, int mult, int substr, float div);

int main (void) {
	int a, b, sum, mult, substr = 0;
	float div = 0;
	puts ("Enter a and b");
	scanf ("%d%d", &a, &b);
	sum = a + b;
	mult = a*b;
	substr = a - b;
	div = (float) a/b;
	test (sum, mult, substr, div);
	return 0;
}

void test (int sum, int mult, int substr, float div) {
	printf ("Summ is %d\n", sum);
	printf ("Multiplication is %d\n", mult);
	printf ("Substracion is %d\n", substr);
	printf ("Division is %.3f\n", div);
}