#include "holberton.h"
/**
 * print_string - prints one character at a time
 * @list: the list char in the string
 * Return: the count of char printed
 */
int print_string(va_list list)
{
	char c, *str;
	int i;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		write(1, &c, 1);
	}
	return (i);
}
