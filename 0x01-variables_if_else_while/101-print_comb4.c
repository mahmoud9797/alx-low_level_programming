#include <stdio.h>

/**
 * main - print combination of three digits
 *
 *Return: Always (success)
*/

int main(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			for (n3 = 0; n2 <= 9; n3++)
			{
				if (n1 < n2 && n2 < n3)
				{
					putchar(n1 + 48);
					putchar(n2 + 48);
					putchar(b3 + 48);

					if (n1 != 7)
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
