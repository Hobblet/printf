#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct comb - a structure that allows us to evaluate format modifiers,
 * and chooses the fitting function
 * @sym: which we are comparing
 * @func: address of function associated with matched symbols
 */
struct comb
{
	char sym;
	int (*func)(va_list);
};
typedef struct comb comb_thru;

int _printf(const char *format, ...);
int _putchar(char c);
int (*get_func(char ch))(va_list);
int print_char(va_list list);
int print_string(va_list list);
int print_after(char ch1, char ch2);
int print_number(va_list list);

#endif /* Holberton_H */
