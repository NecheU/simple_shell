#include "shellheader.h"

/**
* exec_command - Interprete and executes
* commands inputed by a user
* @com: command
* Return: 0
*/

void exec_command(const char *com)
{

pid_t child_pid = child = fork();

if (child_pid == -1)
{
perror("fork");

exit(EXIT_FAILURE);
}
else if (child_pid == 0)
{
execve(com, com, (char *) NULL);
perror("execve");

exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}



#include "shellheader.h"

/**
* exec_command - Interpretes and excutes
* @com: command
* Return: 0
*/
void exec_command(const char *com)
{
int args_count;
char *tokn, *args[300];
pid_t child_pid;

child_pid = fork();

if (child_pid == -1)
{
cstm_print("Error forking process.\n");

exit(EXIT_FAILURE);
}
else if (child_pid == 0)
{
args_count = 0;

tokn = strtok((char *) com, " ");

while (tokn != NULL)
{
args[args_count++] = tokn;
tokn = strtok(NULL, " ");
}
args[args_count] = NULL;

execve(args[0], args);

cstm_print("Error executing command.\n");

exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}
