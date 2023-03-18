#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program for lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
