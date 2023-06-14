#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns the name of the program among other functions
 * @argc: counts the number of arguments in the command line
 * @argv: array of string arguments to the command line.
 * Return: 1 if there is an error and 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);
	return (0);
}
