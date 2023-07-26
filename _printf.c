#include "main.h"

#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - function to print char
 * @cha: argument char to print
 * Return: len of 1
 */
int print_char(va_list cha)
{
	char ch;

	ch = va_arg(cha, int);
	_putchar(ch);
	return (1);
}
/**
 * print_string - function to print string
 * @string: string to print
 * Return: len of str
 */
int print_string(va_list string)
{
	char *str;

	int i = 0;

	str = va_arg(string, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
<<<<<<< HEAD
/**
 * intt - main function
 * @n:number
 * @count: number length
 * Return: (new) if succesful
 */
int intt(long int n, int count)
{
	int new = count;

=======
int intt(long int n, int count)
{
	int new = count;
>>>>>>> b31998ac4ca9b329a25d34cd99f00608b4f138a5
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if (n / 10)
<<<<<<< HEAD
		new = intt(n / 10, count + 1);
	_putchar(n % 10 + '0');
	return (new);
}
/**
 * print_int - function that prints int from va_list
 * @arg_list: argument list
 * Return: (intt(i, 2)); if succesful
 */
int print_int(va_list arg_list)
{
	long int i;

=======
		new = intt(n/10, count + 1);
	_putchar(n % 10 + '0');
	return (new);
}
int print_int(va_list arg_list)
{
	long int i;
>>>>>>> b31998ac4ca9b329a25d34cd99f00608b4f138a5
	i = va_arg(arg_list, int);
	if (i < 0)
		return (intt(i, 2));
	return (intt(i, 1));
}
<<<<<<< HEAD
/**
 * _printf - print everything
 * @format: what to print
 * Return: 0 if succesful
 */
=======
>>>>>>> b31998ac4ca9b329a25d34cd99f00608b4f138a5
int _printf(const char *format, ...)
{
	int i = 0, j, count = 0;
	va_list arg_list;
	p_struct print_var[] = {
	{"c", print_char},
	{"s", print_string},
	{"i", print_int},
	{"d", print_int},
	{NULL, NULL}};
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
