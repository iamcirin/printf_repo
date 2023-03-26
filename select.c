#include "main.h"

int select_f(const char *format, s_printf func_arr[], va_list arg_list)
{
	int i, j, retrn, printed_c = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; func_arr[j].spe_c != NULL; j++)
			{
				if (format[i + 1] == func_arr[j].spe_c[0])
				{
					retrn = func_arr[j].func(arg_list);
					if (retrn == -1)
						return (-1);
					printed_c = printed_c + retrn;
					break;
				}
			}
			i++;
		}
		else
		{
			_write_char(format[i]);
			printed_c++;
		}
	}
	return (printed_c);
}
