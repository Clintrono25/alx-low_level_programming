#include "main.h"
/**
 (* print_chessboard - prints the chessboard
 *
 * @a: the row of the array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0l j < 8; j++)
		{
			if (j == 7)
			{
				putchar(a[i][j]);
				putchar('\n');
			}
			else
				putchar(a[i][j]);
		}
	}
}
