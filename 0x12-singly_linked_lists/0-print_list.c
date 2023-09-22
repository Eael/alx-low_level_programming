#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: name of list
 *
 * Return:elements of the list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

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
