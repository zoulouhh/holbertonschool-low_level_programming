#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's basic information
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);

#endif /* DOG_H */

