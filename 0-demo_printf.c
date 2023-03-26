#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - a function that prints a data type with its corresponding input
 * to the stdout and finishes with a new line
 * @format: a pointer to the format specifier
 * Return: the number of bytes - the null terminating character
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter, i;
	char c;
	char *s;

	i = 0;
	counter = 0;
	va_start(args, format);
	while (format[i])
	{
		if (*format == '%')
		{
			counter++;
		}
		if (*format == 'c')
		{
			c = va_arg(args, int);
			write(1, &c, 1);
			counter++;
		}
		else if (*format == 's')
		{
			s = va_arg(args, char *);
			while (s[i] != '\0')
			{
				i++;
			}
			counter += i;
			write(1, s, i);
		}
		else if (*format == '%')
		{
			write(1, &format[i], 1);
			counter++;
		}
		else
		{
			write(1, &format[i], 1);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}
