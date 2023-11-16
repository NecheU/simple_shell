#include "shellheader.h"

/**
 * cstm_print - Custom funtion to print
 * strings to the stdout
 * @str: string to be printed
 *
 * Return: 0
 */

void cstm_print(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
}
