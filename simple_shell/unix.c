#include "unix.h"
int main(void)
{
    char *input;
    char **args;

    while (1) {
        dis_prompt();
        input = takeinput();
        args = split_cmd(input);
	printf("%s\n", args[0]);
        }

        free(input);

            free(args);


    return 0;
}
