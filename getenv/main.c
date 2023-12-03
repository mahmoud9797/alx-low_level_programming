#include "unix.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Include the get_path function here

int main() {
   char *command = "ls"; // The command you want to find the full path of
   char *full_path = get_path(command);

   if (full_path != NULL) {
       printf("The full path of %s is %s\n", command, full_path);
       free(full_path); // Don't forget to free the memory
   } else {
       printf("The command %s was not found in the PATH\n", command);
   }

   return 0;
}

