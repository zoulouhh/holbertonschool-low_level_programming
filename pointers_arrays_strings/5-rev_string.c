#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères
 * @s: pointeur vers la chaîne de caractères
 */
void rev_string(char *s)
{
    int start = 0;
    int end = 0;
    char temp;

    // Premièrement, on trouve la longueur de la chaîne
    while (s[end] != '\0') {
        end++;
    }
    
    // On décrémente `end` pour pointer sur le dernier caractère (avant le caractère nul)
    end--;

    // Ensuite, on échange les caractères du début à la fin jusqu'à atteindre le centre
    while (start < end) {
        // On échange les caractères aux indices `start` et `end`
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        // On déplace les indices vers le centre
        start++;
        end--;
    }
}

