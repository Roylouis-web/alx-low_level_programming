/**
 * print_name - function that prints a name.
 * @name: character pointer parameter
 * @f: function pointer parameter
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
