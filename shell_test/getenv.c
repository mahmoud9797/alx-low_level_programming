#include "unix.h"
/**
 *_getenv - srearchs environment variables
 *@name: is the target environment var we need it
 *Return: a pointer to string of the target var
 */
char *_getenv(char *name)
{
	int i = 0;
	char *envo;

	while (environ[i] != NULL)
	{
		envo = _strchr(environ[i], '=');
		if (envo != NULL && _strcmp(environ[i], name) == 0)
		{
			return (envo + 1);
		}
		i++;

	}
	return (NULL);

}
