#include "main.h"
/**
 * array_range -  creates an array of integers.
 * @min: starts from min
 * @max: through to max
 *
 * Return: pointer to new array
*/

int *array_range(int min, int max)
{
    int *ptr;
    int num_element, i;

    if (min > max)
    {
        return (NULL);
    }
    num_element = (max - min) + 1;
    ptr = malloc(sizeof(int) * num_element);
    if (ptr == NULL)
	{
		return (NULL);
	}
    for (i = 0; i < num_element; i++)
    {
        ptr[i] = min + i;
    }
    return (ptr);
}
