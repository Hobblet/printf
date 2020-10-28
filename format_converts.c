#include "holberton.h"
/**
 * get_func - function pointer with a struct that allows to scan for characters
 * and choose the fitting function to pass back
 * @ch: character to be checked
 * Return: a pointer to the function we need or NULL if it fails
 */
int (*get_func(char ch))(va_list)
{
	comb_thru my_oper[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_number},
		{'i', print_number},
		{'\0', NULL}
	};
	int i = 0;

	while (my_oper[i].sym != '\0')
	{
		if (ch == my_oper[i].sym)
			return (my_oper[i].func);
		i++;
	}
	return (NULL);
}
