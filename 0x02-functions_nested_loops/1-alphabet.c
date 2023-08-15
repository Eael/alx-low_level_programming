#include "main.h"
/**
 * print_alphabet - prints the alphabets
 *
 * Return: alphabets in lowercase
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
