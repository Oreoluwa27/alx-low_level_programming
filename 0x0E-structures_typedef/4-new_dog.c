#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog 
 * @owner: owner of dog
 *
 * return: pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
