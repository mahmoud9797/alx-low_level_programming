#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, l;
	char ch;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l / 2; i++)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
}
