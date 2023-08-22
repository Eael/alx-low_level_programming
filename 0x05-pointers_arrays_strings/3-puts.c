#include "main.h"
/**
 * _puts - takes a pointer to a string and prints it
 * @str: pointer to string we want to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

