#include <stdio.h>

/**
 * main - performs the function of returing the name of the program
 * @argc: number of arguments at the command line
 * @argv: array of string arguments to the command line.
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	(void)(argc);
	printf("%s\n", argv[0]);
	return (0);
}
