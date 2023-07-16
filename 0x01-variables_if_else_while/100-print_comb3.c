#include <stdio.h>

/**
  * main - Prints combination of numbers
  *
  * Return: Always (Success)
*/
int main(void)
{
	int n1 = '0', n2;

	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 <= '9')
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar(n1);
				putchar(n2);

				if (n1 != '8' || n2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
