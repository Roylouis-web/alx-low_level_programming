#include <stdio.h>

int procedure(int low, int high, int *array, int value);
/**
 *  binary_search -  a function that searches for a value in a sorted
 *  array of integers using the Binary search algorithm
 *  @array: a pointer to the first element of the array to search in
 *  @size: the number of elements in array
 *  @value:  the value to search for
 *  Return: The index of the searched value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;

	return (procedure(low, high, array, value));
}


/**
 * procedure - recursive helper function
 * to find the index of the number being searched
 * @low: lower bound of the array
 * @high: upper bound of the array
 * @array: an array of integers
 * @value: value in the array whose index is to be retrieved
 * Return: The index of the value
 */

int procedure(int low, int high, int *array, int value)
{
	if (low <= high)
	{
		int i = low;
		int mid = (low + high) / 2;
		
		printf("Searching in array: ");
		for (; i <= high; i++)
		{
			if (i != high)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d", array[i]);
			}
		}
		printf("\n");

		if (value > array[mid])
		{
			return (procedure(mid + 1, high, array, value));
		}
		else if (value < array[mid])
		{
			return (procedure(low, mid - 1, array, value));
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
	}

	return (-1);
}
