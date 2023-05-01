#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: a pointer to a pointer to the first node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
