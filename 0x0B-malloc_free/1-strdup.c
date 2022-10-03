#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
/**
 * _strdup - eturns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: character pointer parameter
 * Return: a character pointer
 */
char *_strdup(char *str)
{
	int i = 1, a = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;

	ptr = malloc(sizeof(char) * i) + 1);

	if (ptr == NULL)
		return (NULL);

	while (a < i)
	{
		ptr[a] = str[a];
		i++;
	}

	ptr[a] = '\0';
	return (ptr);

}
