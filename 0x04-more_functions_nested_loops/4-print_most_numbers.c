#include "main.h"
/**
 * print_numbers - prints numbers 0 - 9 and new line except 2 and 4
 *
 * Return: numbers 0 1 3 5 6 7 8 9
 */

void print_numbers(void)
{
	char alp;

	for (alp = 48; alp <= 57; alp++)
	{
		if ( alp != 50 && alp != 52)
		{	
			_putchar(alp);
		}
	}
	_putchar('\n');
}
