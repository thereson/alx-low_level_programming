#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: a string
 * @src: a string
 * @n: an input integer
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n){
strncat(dest, src, n);
return(dest);
}
