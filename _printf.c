#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

int print_char (va_list char_li);
{
	char ch = va_arg(char_li, int);

	putchar (ch);

	return (1);
}

int print_string(va_list string_li)
{
	char *str;
	int i;

	str = va_arg(string_li, char*);
	for (i = 0; str[i] != '/0'; i++)
		putchar (str[i]);
	return (i);

}
int _printf(const char *format, ...)
{
	int i = 0; j, count = 0;
	va_list arg_list;
	print print_var[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);


	va_start(arg_list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; print_var[j].Format != '\0'; j++)
			{
				if (format[i + 1] == print_var[j].Format[i])
					count += print_var[j].Format[i];
			}
		}
	if (format[i + 1])
	}

}
