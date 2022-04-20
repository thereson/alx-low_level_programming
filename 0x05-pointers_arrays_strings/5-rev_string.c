#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char rev;

	while (s[i] != '\0')
		i++;

	while (j < i--)
	{
		rev = s[j];
		s[j++] = s[i];
		s[i] = rev;
	}
}
