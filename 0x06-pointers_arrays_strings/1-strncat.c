#include "main.h"
/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	l = 0;

	for (i = 0; dest[i]; i++)
	while (src[l] && l < n)
	{
		dest[i++] = src[l];
		l++;
	}
	dest[i + n + 1] = '\0';
	return (dest);
}
