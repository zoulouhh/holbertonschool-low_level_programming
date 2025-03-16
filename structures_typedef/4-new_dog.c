#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Counts the number of chars
 * @str: String to be count
 * Return: Amount of chars
 */
int _strlen(char *str)
{
	int total = 0;

	while (str[total] != '\0')
		total++;

	return (total);
}

/**
 * _strcpy - Copies a string from destination to src
 * @destination: Destination of src
 * @src: Source
 * Return: ptr to destination
 */
char *_strcpy(char *destination, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		destination[i] = src[i];
	}
	destination[i] = '\0';

	return (destination);
}

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nDog;

	nDog = malloc(sizeof(dog_t));
	if (nDog == NULL)
		return (NULL);

	nDog->name = malloc(_strlen(name) + 1);
	if (nDog->name == NULL)
	{
		free(nDog);
		return (NULL);
	}
	nDog->name = _strcpy(nDog->name, name);

	nDog->age = age;

	nDog->owner = malloc(_strlen(owner) + 1);
	if (nDog->owner == NULL)
	{
		free(nDog->name);
		free(nDog);
		return (NULL);
	}
	nDog->owner = _strcpy(nDog->owner, owner);

	return (nDog);
}
