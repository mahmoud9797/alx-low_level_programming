#include "unix.h"
/**
 *split_cmd - use to toknize a string according space dilimiter
 *@s: is the string will be tokenized
 *Return: array of tokens
 */
char **split_cmd(char *s)
{
	char **arr_tokens;
	char *token;
	char *str_copy;
	char *tok_d = {" "};
	int c = 0;
	int i = 0;

	str_copy = _strdup(s);
	token = strtok(str_copy, tok_d);
	while (token != NULL)
	{
		strtok(NULL, tok_d);
		c++;
	}
	arr_tokens = malloc(sizeof(char *) * (c + 1));
	if (arr_tokens == NULL)
	{
		return (NULL);
	}
	token = strtok(s, tok_d);
	while (token != NULL)
	{
		arr_tokens[i] = _strdup(token);
		i++;
	}
	arr_tokens[c] = NULL;
	free(str_copy);
	return (arr_tokens);
}
