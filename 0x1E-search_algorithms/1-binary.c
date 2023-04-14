#include <stdio.h>

size_t middleIndex(int size);
size_t _size(int *array);

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
	size_t middle = middleIndex(size);
	size_t right = 0;
	size_t left = 0;
	
	if (array != NULL)
	{
		if (value > middle)
		{
			left = middle + 1;
			right = size;
		}
		else if (value < middle)
		{
			right = middle - 1;
		}
		else if (middle == value)
		{
			return (middle);
		}
	}
}


/**
 * middleIndex - gets the index of the middle number
 * @size: length of the array
 * Return: The middle index of array
 */

size_t middleIndex(int size)
{
	size_t result = (size / 2);

	return (result);
}

/**
 * _size - gets the size of an array
 * @array: array whose size is to be gotten
 * Return: The size of an array
 */

size_t _size(int *array)
{
	size_t size = *(&array + 1) - array;

	return (size);
}

