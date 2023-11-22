#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t size = 0;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		size++;

		if (current >= next)
		{
			*h = NULL;
			break;
		}

		current = next;
	}

	return (size);
}

