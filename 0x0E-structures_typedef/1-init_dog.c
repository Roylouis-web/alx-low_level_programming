#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type
 * @dog: character pointer parameter
 * @name: character pointer parameter
 * @age: float parameter
 * @owner: character pointer parameter
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d ->name = name
	d ->age = age
	d ->owner = owner
}
