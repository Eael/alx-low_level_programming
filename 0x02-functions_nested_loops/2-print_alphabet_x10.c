#include "main.h"

/**
 * print_alphabet_x10 - prints 10x
 *
 * Return: 10x of alphabets.
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
