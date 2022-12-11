#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0 as success
 */

int main(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
	{
		putchar (i + '0');
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
