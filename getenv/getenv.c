#include "unix.h"
/**
 *_getenv - srearchs environment variables
 *@name: is the target environment var we need it
 *Return: a pointer to string of the target var
 */
char *_getenv(char *name)
{
       int i = 0;
       char *envo;
       int len = strlen(name);

       while (environ[i] != NULL)
       {
               envo = _strchr(environ[i], '=');
               if (envo != NULL && strncmp(environ[i], name, len) == 0)
               {
		      envo = envo + 1;
                      return (envo);
               }
               i++;
       }
       return (NULL);
}
