#include "main.h"
/*
 * print_int - Prints an integer to stdout
 *
 * print_int - input
 *
 * @n the integer to print
 *
 * return: void
 */
void print_int(int n)
{
	printf("%d", n);
}

/**
 * _printf - Prints formatted output to stdout according to a format string.
 *
 * @format: the format string
 *
 * return: count
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'd':
				case 'i':
					{
						int n = va_arg(args, int);

						print_int(n);
						count++;
						break;
					}
				default:
					putchar(*format);
					count++;
					break;
			}
		}
		else
		{
			putchar(*format);
			count++;

			format++;
		}
		va_end(args);
		return (count);
}

/**
 * main -  entry point for the program
 *
 * return: the exit status of the program
 */
int main(void)
{
	int n = 42;

	_printf("The answer is %d\n", n);
	return (0);
}
