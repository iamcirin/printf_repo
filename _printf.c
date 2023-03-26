#include "main.h"


int _printf(const char *format, ...){

    	int printed_chars;
	s_printf func_arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
        {NULL, NULL}
        };

        va_list arg_list;

        if (format == NULL)
		    return (-1);
        
      va_start(arg_list, format);
	/*Calling parser function*/
	printed_chars = select_f(format, func_arr, arg_list);
	va_end(arg_list);
	return (printed_chars);

        


}
