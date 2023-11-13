#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all elemetns of a doubly linked list
 * @h: pointer to the header of the list
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	
	while (h->prev != NULL)
		h = h->prev;

	while (h)
	{
		printf("%d/n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
