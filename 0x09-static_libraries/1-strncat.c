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
	while (dest[l])
	{
		l++;
	}
	for (i = 0 ; src[i] != '\0' && i < n; i++)
	{
		dest[l + i] = src[i];
	}
	dest[l + i] = '\0';
	return (dest);
}
