#include <stdio.h>

/**
 * main - print the name of the program
 *@argc: the arguement count
 *@argv: arguement vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
