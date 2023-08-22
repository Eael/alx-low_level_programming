#include "main.h"
/**
 * print_rev - prints a string in reversee
 * @s: pointer to the string  we want to reverse
 *
 * Return: reversed string
 */

void print_rev(char *s)
{
	int len;

	len = _strlen(*s);
	for (len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

