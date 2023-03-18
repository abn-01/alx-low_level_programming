#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Base sixteenprogram
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowCase;
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (lowCase = 'a'; lowCase <= 'f'; lowCase++)
		putchar(lowCase);
	putchar('\n');

	return (0);
}
