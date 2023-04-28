#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len- returns the number of elements in a linked list_t list.
 * @h: pointer to a constant list_t
 *
 * Return: The number of nodes in h.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
