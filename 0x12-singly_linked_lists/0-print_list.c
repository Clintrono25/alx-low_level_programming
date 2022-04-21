#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * print_list - prints the elements of linked list_t
 * @h: singly linked list to print
 * Return: number of nodes in the list 
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
