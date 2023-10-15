#include "unix.h"
/**
 *_strchar - function used to search on the first occuerence of charchtr
 *@str: is the string will be searched
 *@c: is the charcteter to search for
 *Return: a pointer to the first char
 * */

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
