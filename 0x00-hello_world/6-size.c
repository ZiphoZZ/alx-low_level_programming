#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int a;
	long int li;
	long long int ll;
	char c;
	float f;

	printf("Size of an int: %lu byte\n", sizeof(a));
	printf("Size of a long int: %lu byte\n", sizeof(li));
	printf("Size of a long long int: %lu byte\n", sizeof(ll));
	printf("Size of a char: %lu byte\n", sizeof(c));
	printf("Size of a float: %lu bytes\n", sizeof(f));

	return (0);

}


