#include "holberton.h"
/**
 * print_num - prints numbers to stdout
 * @list: va_list we need to step through
 * Return: count of each number and signs printed
 */
int print_number(va_list list)
{
	int num = va_arg(list, int);
	unsigned int n;
	int count = 0, x = 1;

	if (num < 0)
	{
		n = num * -1;
		_putchar('-');
		count++;
	}
	else
		n = num;
	while ((n / x) > 9)
		x *= 10;
	while (x >= 1)
	{
		_putchar(((n / x) % 10) + '0');
		x /= 10;
		count++;
	}
	return (count);
}
