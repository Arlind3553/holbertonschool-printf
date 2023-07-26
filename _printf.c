#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>


int print_char(va_list cha)
{
<<<<<<< HEAD
	char ch = va_arg(char_li, int);

	putchar (ch);

	return (1);
}

int print_string(va_list string_li)
=======
	char ch;

	ch = va_arg(cha, int);
	_putchar(ch);
	return (1);
}

int print_string(va_list string)
>>>>>>> 88b8fa6fe4c661385bc4118ae8306e558b145f4c
{
	char *str;
	int i = 0;

<<<<<<< HEAD
	str = va_arg(string_li, char*);
	for (i = 0; str[i] != '/0'; i++)
		putchar (str[i]);
=======
	str = va_arg(string, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
>>>>>>> 88b8fa6fe4c661385bc4118ae8306e558b145f4c
	return (i);
}

int _printf(const char *format, ...)
{
	int i = 0, j, count = 0;
	va_list arg_list;
<<<<<<< HEAD
	print print_var[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};
=======
	p_struct print_var[] = {
		{"c", print_char}, 
		{"s", print_string},
		{NULL, NULL}};
>>>>>>> 88b8fa6fe4c661385bc4118ae8306e558b145f4c

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
<<<<<<< HEAD
	for (i = 0; format[i] != '\0'; i++)
=======
	for (i = 0; format != NULL && format[i] != '\0'; i++)
>>>>>>> 88b8fa6fe4c661385bc4118ae8306e558b145f4c
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
