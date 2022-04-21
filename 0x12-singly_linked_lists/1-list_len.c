#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/*
 * list_len - returns numeber of elements in a linked list
 * @h: linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
