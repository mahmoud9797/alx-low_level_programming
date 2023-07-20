#include "main.h"
/**
 *_isdigit - is the function which check if charcter is digit.
 *@c: is the charcter will be checked.
 *
 *Return: 1 if the charcter is digit, otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
