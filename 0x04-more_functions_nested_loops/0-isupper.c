/**
 *_isupper - a function that checks for uppercase character.
 *@c: integer parameter for the below function
 *Return: Always Successful
 */
int _isupper(int c)
{
	int result;

	if (c <= 'Z')
		result = 1;
	else
		result = 0;
	return (result);
}
