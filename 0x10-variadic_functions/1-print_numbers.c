#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg>
/**
 * print_numbers - prints numbers
 * @separator: pointer to string btw numbers
 * @n: number of integers passed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < 0; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (i < (n-1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
