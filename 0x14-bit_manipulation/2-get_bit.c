#include "main.h"

/**
 * get_bit - gets the value of a bt at a given index
 * @n: input integer
 * @index: index
 * Return: Value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}
