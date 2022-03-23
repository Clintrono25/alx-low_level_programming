#include "main.h"
#include <stdio.h>
/**
* print_diagonal - draws a diagonal line
* @n: takes in an integer
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				putchar('\\');
				putchar('\n');
			}
			else
			{
				putchar(' ');
			}
		}
	}
}
