#include "main.h"

/**
 * print_alphabet_x10 - prints 10x
 *
 * Return: On success 1.
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i <= 9; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
		}
		ch++;
	}
}
