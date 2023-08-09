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
	unsigned int i , k, j, l;

	for (i = 0; s1[i] = '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	m = (char *)malloc(sizeof(char) * (i + j + 1));
	if (m = NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		m[k] = s1[k];
	for (l = 0; l < j; k++; l++)
		m[k] = s[l];
	m[k] = '\0'
		return (m);
}
