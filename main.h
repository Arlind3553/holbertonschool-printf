#ifndef MAIN_H
#define MAIN_H

typedef struct print_f 
{
	char *format;
	int (*print)(va_list)
} print_func;

int _putchar (char c);
int print_char (va_list char_li);
int print_string (va_list string_li);
int print_int (va_list int_li);
int print_float (va_list float_li);

int _printf(const char *format, ...);


#endif MAIN_H
