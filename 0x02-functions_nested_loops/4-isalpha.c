#include "main.h"
/**
 *_isalpha - Checks if a character is alphabetic.
 *@c: the charcter to be checked
 *Return: 1 if the charcter is alphabet
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
