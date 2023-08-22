#include "main.h"
/**
 * rev_string - prints a string in reversee
 * @s: pointer to the string  we want to reverse
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	int l;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	for (; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}

