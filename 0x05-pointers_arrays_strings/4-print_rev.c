#include "main.h"
/**
 * print_rev - prints a string in reversee
 * @s: pointer to the string  we want to reverse
 *
 * Return: reversed string
 */

void print_rev(char *s)
{
	int l;

	l = _strlen(s);
	for (; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}

