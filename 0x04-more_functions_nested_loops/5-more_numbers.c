#include "main.h"
/**
 *more_numbers - function to print numbers from 0 to 14
*/

void more_numbers(void)
{
	int r, n;

	for (r = 1; r <= 10; r++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			else
			{
				_putchar(a + 48);
			}
		}
	}
	_putchar('\n');
}
