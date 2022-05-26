#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: pointer to the struct
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
