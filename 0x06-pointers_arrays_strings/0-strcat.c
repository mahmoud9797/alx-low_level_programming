#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (l = 0; src[l] != '\0'; l++)
	{
		dest[i++] = src[l];
	}
	dest[i] = '\0';
	return (dest);
}
