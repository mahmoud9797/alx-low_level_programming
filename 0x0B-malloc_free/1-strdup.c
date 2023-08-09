#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *m;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	m = (char *)malloc(sizeof(char) * (i + 1));
	if (m == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		str[j] = m[j];
	return (m);
}
