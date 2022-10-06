#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: void pointer parameter
 * @old_size: integer pointer parameter
 * @new_size: integer pointer parameter
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *rmemb;
	char *old_p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	rmemb = malloc(new_size);
	if (rmemb == NULL)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			rmemb[i] = old_p[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			rmemb[i] = old_p[i];
	}
	free(ptr);
	return (rmemb);

