#include "holberton.h"
/**
 * print_char - prints a char to stdout
 * @list: the va_list we want to increment through
 * Return: 1 if one char is printed
 */
int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	write(1, &c, 1);
	return (1);
}
