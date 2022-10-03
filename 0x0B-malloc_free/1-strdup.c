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
	int len, i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	ptr = malloc(sizeof(char * len) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] == str[i];
	}

	ptr[len] = '\0';
	return (ptr);
}
