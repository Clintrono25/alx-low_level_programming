#include "main.h"
#include <stdio.h>
/**
* print_triangle - prints a triangle
* @size: takes in a integer for size of triangle
*/
void print_triangle(int size)
{
	int row, column, k;

	if (size <= 0)
		putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			putchar(' ');
		for (k = row + column; k >= 1; k--)
			putchar('#');
		putchar('\n');
	}
}
