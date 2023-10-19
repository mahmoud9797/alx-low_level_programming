#include "unix.h"
/**
 *excute_command - function used to excute command from shell
 *@command: shell command
 *@args: command plus options
 *Return: 0 if success
 */

int excute_command(char *command, char **args)
{
	pid_t child_pid = fork();
	int status;

	if (child_pid < 0)
	{
		perror("fork failure");
		return (1);
	}
	else if (child_pid == 0)
	{
		if (execve(command, args, NULL) < 0)
		{
			perror("execve failure");
			return (1);
		}
	}
	else
	{
		waitpid(child_pid, &status, 0);
		if (WIFEXITED(status))
		{
			return (WEXITSTATUS(status));
		}
		else
		{
			return (-1);
		}
	}
	return (0);
}
