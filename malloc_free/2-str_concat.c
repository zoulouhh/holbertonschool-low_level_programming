#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
    char *concat;
    int len1, len2;

    // Treat NULL as empty string
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    // Get lengths of strings
    len1 = strlen(s1);
    len2 = strlen(s2);

    // Allocate memory for concatenated string
    concat = malloc(sizeof(char) * (len1 + len2 + 1));
    if (concat == NULL)
        return NULL;

    // Copy s1 and s2 into new string
    strcpy(concat, s1);
    strcat(concat, s2);

    return concat;
}                                               
