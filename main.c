#include "shellheader.h"

/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
	char com[200];

	while (true)
	{
		print_prompt();

		read_command(com, sizeof(com));

		exec_command(com);
	}

	return (0);
}
