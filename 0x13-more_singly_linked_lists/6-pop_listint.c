#include "lists.h"

/**
 * pop_listint - deletes the first element of a linked list
 * @head: pointer to list
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}

