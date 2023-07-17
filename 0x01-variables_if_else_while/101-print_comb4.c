#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int n1, n2, n3;

	for (n1 = '0'; n1 <= '9'; n1++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n3 = '0'; n3 <= '9'; n3++)
			{
				if (n1 < n2 && n2 < n3)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);

					if (n1 != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
