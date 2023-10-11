#include "unix.h"
/**
 * _realloc - reallocate new block of memory for preexisting memory block
 *@p: pointer to memory block
 *@new_s: the new size for memory block in bytes
 *Return: pointer to new memory blocki
 */
void *_realloc(void *p, size_t new_s)
{
	void *new_p;

	if (p == NULL)
	{
		return (malloc(new_s));
	}
	else if (new_s == 0)
	{
		free(p);
		return (NULL);
	}
	else
	{
		new_p = malloc(new_s);
		if (new_p == NULL)
		{
			return (NULL);
		}
		_memcpy(new_p, p, new_s);
		free(p);
	}
	return (new_p);
}
/*
 *_memcpy _ transfer data from memory block to anothor one
 *@d: is a pointer to new memory block which recive data
 *@s: is a pointer source
 *@n: is a number of bytes will be transfer
 *Return: distebation
 */
void *_memcpy(void *d, const void *s, size_t n)
{
	char *dd;
	char *ss;
	unsigned int i = 0;

	dd = (char *)d;
	ss = (char *)s;

	while (i < n)
	{
		dd[i] = ss[i];
		i++;
	}
	return (d);
}
