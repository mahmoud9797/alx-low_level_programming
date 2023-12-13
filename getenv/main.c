#include "unix.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
   char *command = "ls";
   char *full_path = get_path(command);

   if (full_path != NULL) {
       printf("The full path of %s is %s\n", command, full_path);
       free(full_path); 
   } else {
       printf("The command %s was not found in the PATH\n", command);
   }

   return 0;
}

