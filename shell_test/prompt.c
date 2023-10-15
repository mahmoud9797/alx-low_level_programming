#include "unix.h"

void dis_prompt()
{
	char *prompt = "our_shell$";
	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, prompt, strlen(prompt));
	}
}
