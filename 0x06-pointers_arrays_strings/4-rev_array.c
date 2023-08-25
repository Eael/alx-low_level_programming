#include "main.h"

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, m;
	int temp;

	i = 0;
	m = n -1;
	for (; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[m];
		a[m--] = temp;
	}
}
