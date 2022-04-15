#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - give the number of its params
 * @n: constant integer which stores the number of parametere
 * Return: Number of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return(sum)
}
