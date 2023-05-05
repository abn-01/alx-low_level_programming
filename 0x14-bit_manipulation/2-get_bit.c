#include "mainh"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to get the bit from.
 * @index: the index, starting from 0, of the bit to get.
 *
 * Return: the value of the bit at index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = sizeof(unsigned long int) * 8;
	char bits[len];
	unsigned int i;

	for (i = 0; i < len; i++)
	{
		bits[i] = (n & (1 << i)) ? '1' : '0';
	}

	if (index >= len)
	{
		return (-1);
	}

	return (bits[index] - '0');
}
