/**
 * _strncat -  function that concatenates two strings.
 * @dest : character pointer parameter
 * @src: character pointer parameter
 * @n: integer parameter to be used
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, i = 0;

	while (dest[count])
	{
		count++;
	}

	while (i < n && src[i])
	{
		dest[count] = src[i];
		count++;
		i++;
	}

	dest[count + n + 1] = '\0';

	return (dest);
}
