#include "main.h"
/**
 * print_numbers - prints numbers 0 - 9 and new line
 *
 * Return: numbers 0 - 9 
 */

void print_numbers(void)
{
	char alp;

	for (alp = 48; alp <= 57; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
