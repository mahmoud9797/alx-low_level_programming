#include <main.h>
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	for (i = 0; dest[i]; i++)
	{
		len++
	}
	for (i = 0; src[i]; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
