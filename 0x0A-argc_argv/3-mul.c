#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x, y = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (x = 1; x < argc; x++)
	{
		y = y * atoi(argv[x]);
	}

	printf("%d\n", y);

	return (0);
}
