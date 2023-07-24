#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
/**
 * *struct print - struct print
 *@format: identifier of the function
 *@print: function associated with the identifier
 */
typedef struct print
{
	char *format;
	int (*print)(va_list list);
} print;

int _putchar (char c);
int print_char (va_list char_li);
int print_string(va_list string_li);
int print_int (va_list int_li);
int print_float (va_list float_li);
int _printf(const char *format, ...);


#endif MAIN_H
