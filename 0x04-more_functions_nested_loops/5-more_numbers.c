#include "main.h"

/**
 * more_number - prints from 0 - 14
 *
 * Return: numbers 0 - 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for  (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
	}
	_putchar('\n');
}
