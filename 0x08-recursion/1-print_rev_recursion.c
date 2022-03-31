#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s - 1);
		putchar(*s);
	}
}
