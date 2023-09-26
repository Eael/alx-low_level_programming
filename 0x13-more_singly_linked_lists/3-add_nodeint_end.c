#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end of a list
 * @head: pointer to the pointer of head
 *
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head, *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return NULL;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
