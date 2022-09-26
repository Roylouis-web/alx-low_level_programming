/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: character pointer parameter to be used
 * @src: character pointer parameter to be used
 * @n: integer parameter to be used
 * Return: a character pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = dest[i]; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
