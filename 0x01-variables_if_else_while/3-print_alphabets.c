#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet followed by the uppercase
 * alphabet, followed by a new line, using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
