#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function frees the list_t.
 * @head: A pointer to the listt.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
