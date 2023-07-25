#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

int print_char (va_list char_li);
{
	char ch = va_arg(char_li, int);
	putchar(ch);
	return (1);
}
int print_string(va_list string_li)
{
	char *str;
	int i;

	str = va_arg(string_li, char*);
	for(i = 0; str[i] != '/0'; i++)
		putchar(str[i]);
	return (i);

}
int _printf(const char *format, ...)
{
	int i = 0, j, count = 0;
	va_list arg_list;
	p_struct print_var[] = {{"c", print_char}, {"s", print_string},
	{"i", change_int}, {"d", change_int}, {NULL, NULL}};

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; print_var[j].var_type != NULL; j++)
			{
				if (format[i + 1] == print_var[j].var_type[0])
				{
					count += print_var[j].f(arg_list);
				}
			}
			if (format[i + 1] == '%')
				count += _putchar('%');
			else if (format[i + 1] != 'c' && format[i + 1] != 's' &&
			format[i + 1] != 'd' && format[i + 1] != 'i' &&
			format[i + 1] != '\0')
			{
				count += _putchar(format[i]);
				count += _putchar(format[i + 1]);
			}
			else if (format[i + 1] == '\0')
				return (-1);
			i++;

		}
		else
			count += _putchar(format[i]);
	}
	va_end(arg_list);
	return (count);
}
