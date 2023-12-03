#include "unix.h"
char *get_path(char *command)
{
    char *envp = _getenv("PATH");
    int command_length = _strlen(command);
    char *token = NULL;
    char *full_path = NULL;
    struct stat info;

    if (envp == NULL)
    {
        return (NULL);
    }
    token = strtok(envp, ":");
    while (token != NULL)
    {
        full_path = malloc(command_length + strlen(token) + 3);
        if (full_path == NULL)
        {
            return (NULL);
        }
        strcpy(full_path, token);
        strcat(full_path, "/");
        strcat(full_path, command);
        strcat(full_path, "\0");

        if (stat(full_path, &info) == 0 && access(full_path, X_OK) == 0)
        {
            return (full_path);
        }
        else
        {
            free(full_path);
            token = strtok(NULL, ":");
        }
    }
    if (stat(command, &info) == 0)
    {
        return (_strdup(command));
    }

    return (NULL);
}
