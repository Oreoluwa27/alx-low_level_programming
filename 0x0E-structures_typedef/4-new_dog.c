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
	int i ,j, cnt;

	dog_t *dog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	if (dog == NULL)
	{
		return (NULL);
	}
	for (i  = 0; name[i] != '\0'; i++)
	{
		continue;
	}
	i++;

	dog->name = malloc(i * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (cnt = 0; cnt < i; cnt++)
	{
		dog->name[cnt] = name[cnt];
	}

	dog->age = age;

	for (j  = 0; owner[i] != '\0'; j++)
	{
                continue;
	}
	j++;

	dog->owner = malloc(j * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (cnt = 0; cnt < j; cnt++)
	{
		dog->owner[cnt] = owner[cnt];
	}

	return (dog);
}
