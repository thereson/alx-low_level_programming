#include "lists.h"

/**
 * sum_listint - sums all the data in listint
 * @head: pointer to first node
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}

