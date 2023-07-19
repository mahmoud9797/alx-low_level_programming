#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		l = -1 % 10;
	else
		l = n % 10;
	putchar(l + '0');
	return (l);
}
