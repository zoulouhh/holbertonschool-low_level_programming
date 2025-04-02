#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of dlistint_t linked list
 * @head: pointer to the head of the lsit
 * @index: index of the node to return
 * Return: pointer to the nth node, or NULL if the node doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
