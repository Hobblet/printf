#include "holberton.h"
/**
 * _printf - uses a "format string" that includes instructions
 * to mix several strings to write a final string on stdout
 * @format: the first parameter which is the formatted string
 * Return: count of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	int (*f)(va_list);
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			f = get_func(format[i + 1]);
			if (f == NULL)
				count += print_after(format[i], format[i + 1]);
			else
				count += f(list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}
