#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: pointer to char
 * @f: pointer to function that returns nothing
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
