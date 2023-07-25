#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>



int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int i;

	specified func_list[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_u},
		{"b", print_b},
		{"u", print_u},
		{"o", print_x},
		{"X", print_X},
		{NULL, NULL}
	}

	for (i = 0; func_list.symbol != NULL; i++)
	{
		if (*(func_list[i].symbol) == *format)
		{
			break;
		}
	}
	return (func_list[i].func);
}


int _printf(const char *format, ...)
{
	va_list print_string;
	unsigned int i = 0, count = 0;
	int (*function)(va_list);
	
	if (format == NULL)
		return (-1);
	
	va_start(print_string, format);

	while (format[i])
	{

		for (; format[i] != '%' && format[i], i++)
		{
			_putchar(format[i]);
			count++;
		}

		if (!format[i])
			return (count);

		function = check_for_specifiers(&format[i + 1]);
		if (function != NULL)
		{
			count += function(print_string);
			i += 2;
			continue;
		}
		if (!format[i + 1])
				return (-1);
		_putchar(format[i]);
		count++;

		if (format[i + 1] = '%')
		       i += 2;
		else
			i++;	

	}
	
	va_end(print_string);

	
	return (count);

}
