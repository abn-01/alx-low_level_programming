#include <stdio.h>

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - prints a sentence before the main
 * function is executed
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - the entry point of the program
 * This function is the entry point of the program
 * Return: 0 on success
 */

int main(void)
{
	printf("This is the main function\n");
	return (0);
}
