#include "dog.h"

/**
 * main - main function
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	return (0)
}
