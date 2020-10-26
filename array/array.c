#include <stdio.h>

int main (void) {
	int array[10], count = 0;
	for (int i = 0; i <=9; i++)
		array[i] = 1;
	while (count != 10)
		printf ("%d ", array[count++]);
	return 0;
}
