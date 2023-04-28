#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t new node
 *
 * Return: If the function fails - NULL.
 * ion sucess, the pointer address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str_dup;
	int len;
	list_t *new;
	list_t *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = str_dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
