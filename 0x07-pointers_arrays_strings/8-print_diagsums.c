/**
 * print_diagsums - prints the sum of the two diagonals
 *  of a square matrix of integers
 *  @a: integer pointer parameter to be used
 *  @size: integer parameter to be used
 *  Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
	}

	for (i = 0; i < size; i++)
	{
		sum2 += a[(i * size) + size - (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
