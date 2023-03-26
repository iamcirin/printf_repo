#include "main.h"


int print_char(va_list arg_list){

    _write_char(va_arg(arg_list, int));

    return (1);
    

}


int print_str(va_list arg_list){

    int i;

    char *s = va_arg(arg_list, char *);

    if (s == NULL){

        s = "(null)";
    }

    for ( i = 0; s[i] != '\0'; i++)
    {
    _write_char(s[i]);

    }


    return (i);


}

int print_percent(__attribute__((unused))va_list arg_list)
{
    _write_char('%');

    return (1);

}

int print_int(va_list arg_list){
    
    int n;
    int len = 0;

    n = va_arg(arg_list, int);


    if (n < 0){
        _write_char('-');
        n = n * -1;
    }
    if ( n / 10){
      print_int(n / 10);
    }
    _write_char(n % 10 + '0');

    len++;

    return (len);


}


