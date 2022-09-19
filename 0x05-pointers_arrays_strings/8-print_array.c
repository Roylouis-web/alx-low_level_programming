#include <stdio.h>
/**
 *  print_array -  prints n elements of an array of integers,
 *   followed by a new line
 *@a: integer pointer parameter to be used
 * @n: integer parameter to be used
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);


	if (j != (n - 1))
			printf(", ");
	}

	printf("\n");

}
