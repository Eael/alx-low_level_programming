#include "main.h"
/**
 * puts - prints every other string
 * @s: pointer to the string
 *
 * Return: string
 */

void _puts(char *s)
{
	int l;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (l = 0; l < i; l += 2)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}

