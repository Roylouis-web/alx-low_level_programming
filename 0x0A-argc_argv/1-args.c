#include <stdio.h>
/**
 * main - print a number, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0) Successful
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
