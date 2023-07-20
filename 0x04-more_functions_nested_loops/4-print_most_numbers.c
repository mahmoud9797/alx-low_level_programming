#include "main.h"
/**
 *print_most_numbers - is the function to print numbers from 0 to 9 except 4, 2
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0 ; n <= 9; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n + 48);
	}
	_putchar('\n');
}
