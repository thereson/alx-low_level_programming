#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: number if converted or 0
 * if NULL or there is one char in b that isn't 0
 * or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0, len = 0, base = 1;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] == '1')
			value += base;

		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		base *= 2;
		len--;
	}
	return (value);
}
