#include "lists.h"




listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;
	
	newnode = (node*)malloc(sizeof(node));

	if (newnode == NULL)
	{
		return (0);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
}
