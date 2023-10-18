#include "unix.h"

int main()
{
	char *command;
	char **args;

	for (;;)
	{
		dis_prompt();
		 command = takeinput();
		 args = split_cmd(command);
		 printf("%s", *args);
		 free (command);
		 free(args);
	}
	return (0);
}
