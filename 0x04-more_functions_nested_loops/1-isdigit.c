/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: integer parameter to be used
 * Return: An integer
 */
int _isdigit(int c)
{
	if (c <= '9')
		return (1);
	else
		return (0);
}
