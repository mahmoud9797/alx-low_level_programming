#include "main.h"
/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @s: The string will be modified
  *
  * Return: char var
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (i <= 122 && i >= 97)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
