#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prograam base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
