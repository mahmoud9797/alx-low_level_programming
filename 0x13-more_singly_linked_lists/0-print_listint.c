#include "list.h"


/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	temp = h;
	size_t c = 0;

	while (temp != '\0')
	{
		printf("%d\n", temp -> data)
		c++;
		temp = temp -> next;
	}
	return (c);
}
