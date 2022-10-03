#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - eturns a pointer to a newly allocated space in memory, 
 * which contains a copy of the string given as a parameter.
 * @str: character pointer parameter
 * Return: a character pointer
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len = strlen(str);
	char *ptr;

	ptr = malloc(len * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);

}
