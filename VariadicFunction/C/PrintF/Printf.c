#include <stdarg.h>
#include "printf.h"

/**
 * _printf - prints to standard output according to format
 * @format: character string
 *
 * Return: number of characters printed
 * 
 * Description: _printf return -1 if NULL or only single
 * character is supplied. 
 * It invokes function to expand a format specfier if a 
 * specifier is found like %c otherwise print the character
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL || !format[i + 1])
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				if (format[i + 1] != 'c' && format[i + 1] != 's'
				&& format[i + 1] != '%' && format[i + 1] != 'd'
				&& format[i + 1] != 'i')
				{
					j += _putchar(format[i]);
					j += _putchar(format[i + 1]);
					i++;
				}
				else
				{
					f = get_func(&format[i + 1]);
					j += f(args);
					i++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
		i++;
	}
	va_end(args);
	return (j);
}
