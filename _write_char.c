#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int _write_char(char c)
{
	return (write(1, &c, 1));
}

