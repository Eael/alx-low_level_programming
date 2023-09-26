#include "lists.h"
/**
 * add_nodeint - adds a new node to the beginning of a list
 * @head: pointer to the pointer of head
 *
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (!temp)
		return NULL;
	
	temp->n = n;
	temp->next = *head;
	*head = temp;


	return (*head);
}
