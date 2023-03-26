#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

typedef struct s_printf
{
    char spe_c;
    int (*func)(va_list);
} sprintf;

int _printf(const char *format, ...);

int print_char(va_list);
int print_int(va_list);
int print_str(va_list);
int print_percent(va_list);

int _write_char(char);

int select_f(const char *format, sprintf func_arr[], va_list arg_list);







#endif /* MAIN_H */
