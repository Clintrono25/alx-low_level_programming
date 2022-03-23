#include "main.h"
#include <stdio.h>
/**
* print_square - function to print a square
* @size: takes in the size of the square
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			putchar('#');
		putchar('\n');
	}
}
