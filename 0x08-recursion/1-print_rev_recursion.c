#include "main.h"

/**
 * _print_rev_recursion - 1-print_rev_recursion.c.
 * @s: string
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
