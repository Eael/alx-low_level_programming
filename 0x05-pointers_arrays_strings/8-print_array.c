#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to array
 * @n: number of elements to print
 *
 * Return: returns array
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i == 0)
		{
		printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	putchar('\n')
}
