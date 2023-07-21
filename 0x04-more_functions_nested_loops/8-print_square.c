#include "main.h"
/**
 * print_square - function that checks for uppercase character.
 * @size: the int for the paramaters of my function
 * Return: 0
 */
void print_square(int size)
{
	int a = 1;
	int b = 1;

	if (size > 0)
	{
		while (a <= size)
		{
			while (b <= size)
			{
				_putchar('#');
				b++;
			}
		a++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
