#include "main.h"

/**
 * factorial - 3-factorial.c.
 * @n: input number.
 * Return: returns the factorial of a given number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
