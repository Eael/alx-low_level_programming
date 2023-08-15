#include "main.h"

/**
 * print_alphabet - prints the alphabe
 *
 * Return: On success 0
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
		_putchar('\n');
	}
}
