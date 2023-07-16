#include <stdio.h>

/**
 * main - print number fron 0 to 9 seprated by ',' and ' '
 *
 *
 *Return: Always success
*/
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++
	}
	putchar(\n);
	return (0);
}
