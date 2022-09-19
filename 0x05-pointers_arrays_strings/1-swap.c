/**
 * swap_int -  function that swaps the values of two integers.
 * @a: integer pointer parameter
 * @b: integer pointer parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
