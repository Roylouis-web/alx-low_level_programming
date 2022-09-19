/**
 * _strlen -  function that returns the length of a string.
 * @s: pointer parameter to be used int the function
 * Return: an integer.
 */
int _strlen(char *s)
{
	int count;

	count = 0;

		for (; *s != '\0'; s++)
		{
			count++;
		}
		return (count);
}
