#include "main.h"
/**
 *print_numbers - function which print numbers from 0 to 9
 *
 *c: is the number will be printed
 *
*/


void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
