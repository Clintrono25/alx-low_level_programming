#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - free a linked list
 * @head: the befinning of the list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
