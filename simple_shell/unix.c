#include "unix.h"
int main(void)
{
   char *line;
   char *command;
   char *path;

   while (1)
   {
       dis_prompt();

       line = takeinput();
       if (line == NULL)
           break;

       command = split_cmd(line)[0];
       printf("%s\n", command);

       path = get_path(command);

       printf("Path: %s", path);

       free(path);
       free(line);
       free(command);
   }

   return 0;
}

