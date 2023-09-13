#include "main.h"
/**
 * int_index - searches an integer
 * @array: array to search
 * @size: number of elements in array
 * @cmp: pointer to function to be used for compare
 *
 * Return: On success 0 or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL || array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
