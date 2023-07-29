#include "main.h"
/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */

void reverse_array(int *a, int n)
{
	int n, i, j, t;

	for (i = 0; i < n; i++)
	j = n - 1;
	i = 0;
	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;

	}
}
