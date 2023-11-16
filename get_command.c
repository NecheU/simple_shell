#include "shellheader.h"

/**
 * get_command - Reads command from user
 * @com: command
 * @size: suze of command
 * Return: void
 */

void get_command(char *com, size_t size)
{
	if (fgets(com, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			cstm_print("\n");

			exit(EXIT_SUCCESS);
		}
		else
		{
			cstm_print("Error while reading input.\n");

			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(commnd, "\n")] = '\0';
}
