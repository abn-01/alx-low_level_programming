#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Adds a new node at the end of a list_t.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t new node
 *
 * Return: If the function fails - NULL.
 * On sucess, the pointer address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = str_dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
