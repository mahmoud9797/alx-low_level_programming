#include "unix.h"
char **split_cmd(char *s)
{
    char **arr_tokens;
    char *token;
    char *str_copy;
    char *tok_d = " ";
    int c = 0;
    int i = 0;
    int j;

    str_copy = _strdup(s);
    if (str_copy == NULL)
    {
        return NULL;
    }

    token = strtok(str_copy, tok_d);
    while (token != NULL)
    {
        c++;
        token = strtok(NULL, tok_d);
    }

    arr_tokens = malloc(sizeof(char *) * (c + 1));
    if (arr_tokens == NULL)
    {
        free(str_copy);
        return NULL;
    }

    token = strtok(str_copy, tok_d);
    while (token != NULL)
    {
        arr_tokens[i] = _strdup(token);
        if (arr_tokens[i] == NULL)
        {
            for (j = 0; j < i; j++)
            {
                free(arr_tokens[j]);
            }
            free(arr_tokens);
            free(str_copy);
            return NULL;
        }
        i++;
        token = strtok(NULL, tok_d);
    }

    arr_tokens[c] = NULL;
    free(str_copy);

    return arr_tokens;
}

