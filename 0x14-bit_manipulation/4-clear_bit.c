#include "main.h"

/**
 * clear_bit - sets thr value of a bit to 0 at a given index
 * @n: input integer
 * @index: index
 * Return: 1 upon success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
