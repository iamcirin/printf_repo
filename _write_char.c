#include "main.h"


int _write_char(char c)
{
	return (write(1, &c, 1));
}

