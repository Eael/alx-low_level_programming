#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to a struct list_h
 *
 * Return: always 0
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
