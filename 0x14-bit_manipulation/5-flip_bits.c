#include "main.h"

/**
 * flip_bits - calculates the number of bits you would need to flip
 * to get from one number to another
 * @n: input integer
 * @m: destination
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
