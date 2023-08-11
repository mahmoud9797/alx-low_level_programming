#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = 0;
	}
	if (s2 == NULL)
		s2 = 0;
	for (len1 = 0; s[len1] != '\0'; len++)
		;
	for (len2 = 0; s[len2] != '\0'; len++)
		;
	m = malloc((n + len1 + 1) * sizeof(char));
	if (m == NULL)
		return (NULL);
	for (i = 0; s1[i] != NULL; i++)
		m[i] = s1[i];
	for (j = 0; j < n; j++)
		m[i++] = s1[j];
	m[i] = NULL;
	return (m);
}
