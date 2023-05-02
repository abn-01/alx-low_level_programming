#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n)
 * @head: double pointer to the head of the linked list
 *
 * Return: the head node's data (n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (data);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
