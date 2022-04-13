#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: pointer to a char
 * @f: pointer to a function that returns nothing
 * Return: nothing
 **/
void print_name(char * name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
