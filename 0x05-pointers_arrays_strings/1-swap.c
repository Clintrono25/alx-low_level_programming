#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers.
 *@a: value to evluate
 *@b: value to evaluate
 *Return: not:
 */

void swap_int(int *a, int *b)
{
	int n = *b;
	*b = *a;
	*a = n;
}
