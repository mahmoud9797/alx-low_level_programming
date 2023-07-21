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

	do {
		do {
			_putchar('#');
			a++
		} while (a <= size);
		_putchar('\n');
		b++
	} while (b <= size);
	_putchar('\n');
}
