/**
 * factorial - returns the factorial of a given number.
 * @n: integer parameter to be used
 * Return: an integer
 */
int factorial(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
