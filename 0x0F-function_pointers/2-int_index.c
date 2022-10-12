#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: integer pointer parameter
 * @cmp: function pointer parameter
 * @size: integer parameter
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}

	return (-1);
}
