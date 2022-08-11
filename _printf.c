#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string, The format string is composed of zero
 * or more directives. This conversion specifiers 'c', 's', '%' are
 * handled here.
 *
 * Return: number of characters printed(excluding the null byte used
 * to end output to strings)
 */

int _printf(const char *format, ...)
{
	const char *ptr;
	va_list ap;
	unsigned int i;

	i = 0;
	va_start(ap, format);

	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr != '%')
		{
			i += _putchar(*ptr);
			continue;
		}
		switch (*++ptr)
		{
			case 'c':
				i += _putchar(va_arg(ap, int));
				break;
			case 's':
				i += _puts(va_arg(ap, char *));
				break;
			case '%':
				i += _putchar('%');
				break;
			case 'd':
				i += print_number(va_arg(ap, int));
				break;
			case 'i':
				i += print_number(va_arg(ap, int));
				break;
			default:
				i += _putchar('%');
				i += _putchar(*ptr);
				break;
		}
	}
	va_end(ap);
	return (i);
}
