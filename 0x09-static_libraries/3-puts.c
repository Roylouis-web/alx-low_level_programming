#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: character pointer parameter
 * Return: void
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%c", *(s + i));
	}
	printf("\n");
}
