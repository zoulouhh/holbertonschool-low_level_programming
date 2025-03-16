#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure représentant un chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Déclaration de la fonction init_dog */
void init_dog(dog_t *d, char *name, float age, char *owner);

#endif /* DOG_H */

