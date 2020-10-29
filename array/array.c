#include <stdio.h>

int main (void) {
	int array[10], count = 0;
	for (int i = 0; i <=9; i++) {
		array[i] = i % 2;
		if (i == 4)
 			array[i] = 3;
		else if (i == 5)
			array[i] = 2;
	}
	while (count != 10)
		printf ("%d ", array[count++]);
	return 0;
}
