#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always Sucessful
 */

int main(int argc, char **argv)
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	else
	{
		printf("Error\n");
		return (1);
	}
		return (0);
}
