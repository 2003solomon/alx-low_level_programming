#include "main.h"

/**
 * main - starting point of execution
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int count, sum;

	sum = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
			sum += atoi(argv[count]);

		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
