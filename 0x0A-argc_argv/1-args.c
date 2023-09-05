#include <stdio.h>
/**
 * main - print the number of argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{

	printf("%d\n", argc - 1);

	return (0);
}

