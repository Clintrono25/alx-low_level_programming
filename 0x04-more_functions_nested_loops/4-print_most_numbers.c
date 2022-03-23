#include "main.h"
/*
 * print_most_numbers - prints 0-9 except 2,4
 */
int void print_most_numbers(void)
{
	char c;
	
	for (c = '0'; c <= '9'; c++)
		if (c != '2' && c != '4')
			putchar(c);		}
	putchar('\n');
	}
}
