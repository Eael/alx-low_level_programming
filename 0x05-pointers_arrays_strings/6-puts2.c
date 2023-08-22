#include "main.h"
/**
 * puts2 - prints every other string
 * @str: pointer to the string 
 *
 * Return: string
 */

void puts2(char *str)
{
	int l;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (l = 0; l < i; l += 2)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}

