#include "holberton.h"
/**
 * print_after - prints any character after '%'
 * if it does NOT match anyting in our struct
 * @ch1: this will always be our '%' sign
 * @ch2: the character that will succeed our first char
 * Return: 1 if ch2 is a symbol (%), 2 if anything else
 */
int print_after(char ch1, char ch2)
{
	if (ch2 == '%')
	{
		write(1, &ch2, 1);
		return (1);
	}
	else
	{
		write(1, &ch1, 1);
		write(1, &ch2, 1);
		return (2);
	}
}
