#include "main.h"
#include <stdio.h>

/**
 * print_numbers-func to print numbers 0-9
 */
void print_numbers(void)
{
	char c;

	for(c = '0'; c <= '9'; c++)
	putchar(c);
	putchar('\n');
}
