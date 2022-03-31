#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string followed by new line
 * @s:pointer to string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recusion(s + 1);
}
