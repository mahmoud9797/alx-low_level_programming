#include "main.h"
/**
 * _strspn - function that gets the length of prefix substring
 * @s: first value - char
 * @accept: second value - char
 *
 * Return: char with result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, r;
	unsigned int n = 0;

	for (r = 0; s[r] != '\0'; r++)
	{
		for (i = 0, accept != '\0'; i++)
		{
			if (accept[i] == s[i])
				n++
		}
	}
	return (n);
}
