#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints string followed by new line
 * @separator: seperators
 * @n: number of arguments
 */
void print_strings(const char *separator, const undigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *ptr;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
