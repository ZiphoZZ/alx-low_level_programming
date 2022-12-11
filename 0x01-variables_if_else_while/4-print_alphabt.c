#include <stdio.h>

/**
 * main - prints alphabets in lowercase except 'e' and 'q'.
 *
 * Return: 0 as success.
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		alphabet != 'e' && alphabet != 'q';
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}

