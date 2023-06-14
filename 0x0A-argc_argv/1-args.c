#include <stdio.h>

/**
* main - print the name of the program
* @argc: number of arguments to the program's function
* @argv: array of pointers to each command line argument
* Return: 0 as success
*/

int main(int argc, char *argv[])
{
	(void)(argv);
	printf("%d\n", argc - 1);
	return (0);
}
