#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program for exclude e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != q && low != e)
			putchar(low);
	}
	putchar('\n');

	return (0);
}
