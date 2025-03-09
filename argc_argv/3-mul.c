#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints amount of args
 * @argc: Amount of arguments
 * @argv: Array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	sum = n1 * n2;

	printf("%d\n", sum);
	return (0);

