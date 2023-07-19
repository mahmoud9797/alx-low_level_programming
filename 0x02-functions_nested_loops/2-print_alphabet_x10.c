#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char a;

	for (n = 0; n <= 9; n++)
	{
		for (a = 'a'; a <= 'z'; n++)
			_putcahr(a);
		_putchar('\n');
	}
}
