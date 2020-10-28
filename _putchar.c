#include "holberton.h"
/**
 * _putchar - writes characters to stdout
 * @c: character to be printed
 * Return: 1 if one char is found and printed
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
