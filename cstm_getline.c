#include "shellheader.h"


ssize_t store_buf(store_t *line, char **buf, size_t len)
{
	ssize_t rd = 0;
	size_t len_f = 0;

	if (! *len)
	{
		free(*buf);
		*buf == NULL;

