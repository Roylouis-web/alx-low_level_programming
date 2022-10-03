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
	int i = 0;
	int len = strlen(str);
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(len * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);

}
