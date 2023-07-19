#include "main.h"
/**
 * print_sign - function to print sign of number.
 *@n: is the number which sigh will be printed.
 *Return: 0 if n is 0.
 *        1 if n greater than 0.
 *        -1 if n less than 0.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putcahr('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
