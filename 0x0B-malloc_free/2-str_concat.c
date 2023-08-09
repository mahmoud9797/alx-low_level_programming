#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *m;
	unsigned int i, k, j, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	m = (char *)malloc(sizeof(char) * (i + j + 1));
	if (m == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		m[k] = s1[k];
	for (l = 0; l < j; k++, l++)
		m[k] = s2[l];
	m[k] = '\0';
		return (m);
}
