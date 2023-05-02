#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a linked list.
 * @head: A pointer to the first node of the list.
 *
 * Return: If the list is empty - 0.
 * Otherwise - sum of all the data (n) of a linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
