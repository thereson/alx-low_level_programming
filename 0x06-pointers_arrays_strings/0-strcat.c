#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings
 *
 * @dest: string
 * @src: string
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
   strcat(dest, src);
   return(dest);
}
