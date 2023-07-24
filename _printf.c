#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

int print_char (va_list char_li);
{
	char ch = va_arg(char_li, int);
	_putchar(ch);
	return (1);
}

