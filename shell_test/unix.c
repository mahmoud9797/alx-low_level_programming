#include "unix.h"

int main(int argc, char **argv)
{
	char *command_path;
	char *input;
	char **args;
	int status;
	(void)argc;
	(void)argv;

	for (;;)
	{
		dis_prompt();
		input = takeinput();
		if (input == NULL)
		{
			continue;
		}
		args = split_cmd(input);
		if (args == NULL)
		{
			free(input);
			continue;
		}
		command_path = get_path(args[0]);
		if (command_path == NULL)
		{
			perror("command nt found");
			free(args);
			free(input);
		}
		status = excute_command(command_path, args);
		if (status != 0)
		{
			perror("excution failure");
		}
		free(command_path);
		free(input);
		free(args);
	}
	return (0);
}
