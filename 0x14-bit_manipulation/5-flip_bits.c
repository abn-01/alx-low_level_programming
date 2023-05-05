#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits required to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor > 0)
	{
		if (xor & 1)
			count++;

		xor >>= 1;
	}

	return (count);
}
