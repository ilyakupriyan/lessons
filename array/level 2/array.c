#include <stdio.h>
#define HEIGHT 10
#define WIDTH 10

void init_array(int height, int width, int cp_array[][WIDTH], int init);
void print_array (int height, int width, int cp_array[][WIDTH]);

int main (void) {
	int array[HEIGHT][WIDTH];
	init_array (HEIGHT, WIDTH, array, 0);
	print_array (HEIGHT, WIDTH, array);
	init_array (HEIGHT, WIDTH, array, 1);
	print_array (HEIGHT, WIDTH, array);
	return 0;
}

void init_array(int height, int width, int cp_array[][WIDTH], int init) {
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			cp_array[i][j] = init;
}

void print_array (int height, int width, int cp_array[][WIDTH]) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
			printf ("%d" , cp_array[i][j]);
		puts (" ");
	}
}
