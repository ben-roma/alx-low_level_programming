#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at
 * index of a listint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next->next;
	free(current->next);
	current->next = temp;

	return (1);
}

