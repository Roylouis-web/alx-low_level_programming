/**
 * _strcat - appends the src string to the dest string
 * @dest: character pointer parameter to be used
 * @src: character pointer parameter to be used
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}

	dest[count] = '\0';

	return (dest);
}
