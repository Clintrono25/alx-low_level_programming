#include <stdlib>
#include "main.h"
/*
 * _strchr - finds char in string
 * @s: points to c address
 * @c: the character to look for
 * @s: Return NULL if the character is not found
 *
 * Return: a pointer to the 1st occrnce of char @c in the str
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
