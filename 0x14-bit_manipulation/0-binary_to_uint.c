#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
			num = (num << 1) | (*b++ - '0');
		else
			return (0);
	}

	return (num);
}
