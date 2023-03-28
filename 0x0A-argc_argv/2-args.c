#include <stdio.h>

/**
 * main - print all arguement it receives
 * @argc: arguement count
 * @argv: arguement itself(vector)
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
