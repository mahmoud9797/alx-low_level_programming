#include "main.h"

/**
 *main - print alphabet
 *Return: Always success
 */

void print_alphabet(void);
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
