#include "main.h"
/**
 * print_buffer -  C function that prints the content of an
 *  inputted number of bytes from a buffer.
 *  @b: number of bytes
 *  @size: size of the bytes
 *Return: void
 */

void print_buffer(char *b, int size)
{
	int = 0, j;

	if (size < 0)
	{
		printf("\n");
		return;
	}

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);

		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x%02x: ", b[j], b[j + 1]);
			else
			{
				while (++j <= i + 10)
					printf(" ");
			}
		}

		for (j = i; j < i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
		i += 10;
	}
}
