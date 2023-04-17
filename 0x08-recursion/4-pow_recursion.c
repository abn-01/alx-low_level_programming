#include "main.h"

/**
 * _pow_recursion - 4-pow_recursion.c.
 * @x: base.
 * @y: exponent.
 * Return:  returns the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
