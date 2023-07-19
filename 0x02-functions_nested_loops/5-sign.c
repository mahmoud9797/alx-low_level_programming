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
		putcahr('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar ('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}

}
