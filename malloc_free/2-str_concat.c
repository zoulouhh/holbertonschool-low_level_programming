nclude "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * str_concat - Concatenate two strings
 *   * @s1: String one
 *    * @s2: String two
 *     * Return: Ptr
 *      */
char *str_concat(char *s1, char *s2)
{
		int s_s1 = 0, s_s2 = 0, total_size = 0, i;
			char *ptr;

				if (s1 == NULL)
							s1 = "";

					if (s2 == NULL)
								s2 = "";

						while (s1[s_s1] != '\0')
									s_s1++;

							while (s2[s_s2] != '\0')
										s_s2++;

								total_size = s_s1 + s_s2;
									ptr = malloc(sizeof(char) * (total_size + 1));
										if (ptr == NULL)
													return (NULL);

											for (i = 0; i < s_s1; i++)
													{
																ptr[i] = s1[i];
																	}

												for (i = 0; i < s_s2; i++)
														{
																	ptr[s_s1 + i] = s2[i];
																		}

													return (ptr);
}
