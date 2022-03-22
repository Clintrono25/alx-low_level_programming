#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints pair val
 * @str: value to eval
 * Return: not
 */
void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for (z = 0 ; z <= l ; z++)
	{
		if (z % 2 == 0)
		{
			putchar(str[z]);
		}
	}
	putchar('\n');
}
