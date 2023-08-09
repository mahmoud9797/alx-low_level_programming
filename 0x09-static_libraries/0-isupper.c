#include "main.h"
/**
 *_isupper - function which check the charcter is uppercase
 *@c: is charcter will be checked.
 *
 *Return: 1 if the cahrcter is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);

}
