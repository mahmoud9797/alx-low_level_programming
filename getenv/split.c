#include "unix.h"
char **split_cmd(char *s)
{
    char **arr_tokens;
    char *token;
    char *str_copy = strdup(s);
    int c = 0;
    char *tok_d = " ";
    int i;

    token = strtok(str_copy, tok_d);
    while (token != NULL)
    {
        c++;
        token = strtok(NULL, tok_d);
    }

    arr_tokens = malloc(sizeof(char *) * (c + 1));

    token = strtok(str_copy, tok_d);
    for (i = 0; i < c; i++)
    {
        arr_tokens[i] = strdup(token);
        token = strtok(NULL, tok_d);
    }

    arr_tokens[c] = NULL;

    free(str_copy);

    return arr_tokens;
}
