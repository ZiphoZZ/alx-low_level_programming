#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse.
 *
 * Return: 0 as successful
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
