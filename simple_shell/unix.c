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
       if (command == NULL)
       {
           fprintf(stderr, "Failed to split command.\n");
           free(line);
           continue;
       }

       path = get_path(command);
       if (path == NULL)
       {
           fprintf(stderr, "Command not found.\n");
           free(line);
           free(command);
           continue;
       }

       printf("Path: %s\n", path);

       free(path);
       free(line);
       free(command);
   }

   return 0;
}

