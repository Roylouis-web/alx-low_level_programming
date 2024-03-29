/**
 * linear_search - a function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array:  a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: The index of the value searched or -1
 */

#include <stdio.h>

int linear_search(int *array, size_t size, int value)
{
	int present = 0;
	size_t i = 0;

	if (array)
	{
		for (; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]", i, array[i]);
			printf("\n");
			if (array[i] == value)
			{
				present = 1;
				return (i);
			}
		}

		if (!present)
		{
			return (-1);
		}
	}

	return (-1);
}
