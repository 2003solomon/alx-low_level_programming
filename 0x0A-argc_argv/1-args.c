#include "main.h"

/**
 * main - Entry point
 * 
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
 */

int main(int argc, int *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
	}
	return(0);
}
