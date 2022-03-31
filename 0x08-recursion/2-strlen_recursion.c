#include "main.h"
/**
 * _strlen_recursion - finds the lenght of a string
 * @s: points to the string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
