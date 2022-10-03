#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
* @size: integer parameter to be used
* @c: character parameter to be used
* Return: a character pointer
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
