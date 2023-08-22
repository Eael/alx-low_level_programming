#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: first integer
 * @b: seconde integert
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;

}

