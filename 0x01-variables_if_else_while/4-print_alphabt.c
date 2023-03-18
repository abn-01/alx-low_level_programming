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

	x = 'e';
	y = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != x && low != y)
			putchar(low);
	}
	putchar('\n');

	return (0);
}
