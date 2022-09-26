/**
 * _strchr - a simlilar function to strchr
 * @s: character pointer parameter to be used
 * @c: characeteer parameter to be used
 * Return: a character pointer
 */
char *_strchr(char *s, char c)
	for (;; s++)
{
	if (*s == c)
		return (s);
	if (!*s)
		return (NULL);
}
