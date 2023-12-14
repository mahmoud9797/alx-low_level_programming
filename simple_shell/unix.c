#include "unix.h"
int main(int argc, char *argv[]) {
  char *command;
  char *args[3];
  (void)argv;
  (void)argc;

  command = "ls";
  args[0] = "ls";
  args[1] = "-l";
  args[2] = NULL;

  if (execute_command(command, args) == -1) {
      perror("Failed to execute command");
      return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
