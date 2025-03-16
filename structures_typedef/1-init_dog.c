#include <stdio.h>
#include "dog.h"

/**
 * main - Programme principal
 * 
 * Retourne 0 si tout fonctionne correctement.
 */
int main(void)
{
    dog_t my_dog;

    /* Initialisation du chien */
    init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");

    /* Affichage des informations du chien */
    printf("Nom du chien: %s\n", my_dog.name);
    printf("Âge du chien: %.2f\n", my_dog.age);
    printf("Propriétaire: %s\n", my_dog.owner);

    return (0);
}

