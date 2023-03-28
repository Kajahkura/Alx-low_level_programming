#include <stdio.h>

/**
 * main - print the number of arguments passed to it
 *@argc - arguments count in main
 *@argv - arguments passed to the main function
 *
 * Return: 0
 */
int main(int agrc, char **agrv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
