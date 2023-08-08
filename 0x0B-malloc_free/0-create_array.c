#include "main.h"

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	m = malloc(size);
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		m[i] = c;
	return (m);
}
