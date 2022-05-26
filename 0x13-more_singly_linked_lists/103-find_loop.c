#include "lists.h"

/**
 * find_listint_loop - finds the loop in a list
 * @head: pointer to the listint_t struct
 * Return: the address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head, *two = head;

	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		{
			one = head;
			break;
		}
	}
	if (!one || !two || !two->next)
		return (NULL);

	while (one != two)
	{
		one = one->next;
		two = two->next;
	}
	return (two);
}
