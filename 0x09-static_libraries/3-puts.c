#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @s: character pointer parameter
 * Return: void
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
	{
		printf("%c", *(s + i));
	}
	
	printf("\n");
}
