#include "unix.h"
/**
 *get_path - function to get vaild path of unix command
 *@command: is linux command
 *Return: command in path
 */
char *get_path(char *command)
{
	char *envp = NULL, *token = NULL;
	char *full_path = NULL;
	int len_command;
	char *path_d = ":";
	struct stat info;

	envp = _getenv("PATH");
	if (envp == NULL)
	{
		return (NULL);
	}
	len_command = _strlen(command);
	token = strtok(envp, path_d);
	while (token != NULL)
	{
		full_path = malloc(len_command + _strlen(token) + 2);
		if (full_path == NULL)
		{
			return (NULL);
		}
		path_append(full_path, token, command);
		if (stat(full_path, &info) == 0 && access(full_path, X_OK) == 0)
		{
			return (full_path);
		}
		else
		{
			free(full_path);
			token = strtok(NULL, path_d);
		}
	}
	if (stat(command, &info) == 0)
	{
		return (command);
	}
	return (NULL);
}
/**
 *path_append - function to append path with command
 *@full_path: it is a pointer to a full path
 *@dir: it is a program directory
 *@command: it is a linux command
 */
void path_append(char *full_path, char *dir, char *command)
{
	strcpy(full_path, dir);
	strcat(full_path, "/");
	strcat(full_path, command);
	strcat(full_path, "\0");
}
