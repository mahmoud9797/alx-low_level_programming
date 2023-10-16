#include "unix.h"
/**
 *takeinput - to read user input
 *Return: line which hold the user input
 */
char *takeinput()
{
	size_t bufsize = 1024;
	int cmd;
	char *line = NULL;

	cmd = _getline(STDIN_FILENO, &line, &bufsize);
	if (line == NULL)
	{
		perror("memory error");
		return (NULL);
	}
	if (cmd == -1)
	{
		if (feof(stdin))
		{
			if (isatty(STDIN_FILENO))
			{
				write(STDOUT_FILENO, "\n", 1);
			}
			free(line);
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("error during reading");
			free(line);
			exit(EXIT_FAILURE);
		}
	}
	return (line);
}
