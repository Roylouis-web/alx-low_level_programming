/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: integer pointer parameter
 * @size: unsigned integer parameter
 * @action: function pointer parameter
 * Return : void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
