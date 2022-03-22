#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _puts - prints a string, to stdout
 * @str: value to evaluate.
 * *Return: not.
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		putchar(str[l]);
		l++;
	}
	putchar('\n');
}
