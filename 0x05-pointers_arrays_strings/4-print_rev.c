#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse.
 * @str: value to evluate
 * Return: not
 */
void print_rev(char *s)
{
	int len;

	for (len = len - 1; len >= 0; len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}
