/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: character pointer parameter to be used
 * @b: character parameter to be used
 * @n: integer parmeter to be used
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *ptr = s, charac = b;

	for (i = 0; i < n; i++)
		ptr[i] = charac;

	return (ptr);
}
