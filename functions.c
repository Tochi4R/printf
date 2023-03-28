#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - a function that produces output
 * according to a format
 *
 * @format: is a character string
 *
 * return: count
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c;

	va_start(args, format);
	while ((c = *(format++)))
	{
		if (c == '%')
		{
			c = *(format++);
			switch (c)
			{
				case 'c':
					putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					count += printf("%s", va_arg(args, char *));
					break;
				case '%':
					putchar('%');
					count++;
					break;
			}
		}
		else
		{
			putchar(c);
			count++;
		}
	}
	va_end(args);
	return (count);
}
