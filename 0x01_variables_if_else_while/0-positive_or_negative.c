#include <stdio.h>


/**
 * main - Entry point.
 *
 * Return: 0 always as success.
 */


int main(void)
{
	int n;

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero");
	}
	return (0);

}
