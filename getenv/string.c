#include "unix.h"
/**
 *_strchr - function used to search on the first occuerence of charchtr
 *@str: is the string will be searched
 *@c: is the charcteter to search for
 *Return: a pointer to the first char
 */
char *_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}

int _strcmp(char *s1, char *s2)
{
	int ch = 0;

	while ((s1[ch] != '\0' && s2[ch] != '\0') && s1[ch] == s2[ch])
	{
		ch++;
	}
	return (s1[ch] - s2[ch]);
}

char *_strdup(char *s)
{
	char *d;
	int i = 0;

	d = (char *)malloc((_strlen(s) + 1) * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
int _strlen(const char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
