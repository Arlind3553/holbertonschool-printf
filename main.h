#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdef.h>
/**
 * *struct print - struct print
 *@f: identifier of the function
 *@print: function associated with the identifier
 */
typedef struct print_struct
{
	char *var_type;
	int (*f)(va_list arg_list);
} p_struct;

int _putchar (char c);
int print_char (va_list char_li);
int print_string(va_list string_li);
int print_int (va_list int_li);
int _printf(const char *format, ...);


#endif MAIN_H
