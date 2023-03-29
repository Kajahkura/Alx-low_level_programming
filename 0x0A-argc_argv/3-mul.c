#include <stdio.h>

/**
 * main - write a program that multiplies two numbers
 * @argc: argument count
 * @argv: arguement vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, y;

	if (argc < 3)
	{
		printf("Error\n");
		return 1;
	}

	i = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", i*y);

	return 0;
}
