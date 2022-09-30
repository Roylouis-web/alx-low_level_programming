#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: character pointer parameter
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}
