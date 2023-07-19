#include "main.h"

/**
 *main - print alphabet
 *Return: Always success
 */

void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
