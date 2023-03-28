#include <stdarg.h>
#include <stdio.h>

/**
 * print_int - function that print the a format
 *
 * @arg: input
 *
 * return: n
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);

	return (printf("%d", n));
}
