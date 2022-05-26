#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the listint_t structure
 * Return: nil
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	temp = head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}
