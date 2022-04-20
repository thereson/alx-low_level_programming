#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string whose characters are to be printed
 */

void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;

	i -= 1;

	for (; j <= i; j += 2)
		_putchar(str[j]);

	_putchar('\n');
}
