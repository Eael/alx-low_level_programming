#include "lists.h"
/**
 * print_listint - prints the elements of listint
 * @h: pointer to list
 *
 * Return: returns element
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
