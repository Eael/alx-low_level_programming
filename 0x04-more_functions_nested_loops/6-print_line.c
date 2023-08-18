#include "main.h"
/**
 * print_line - prints _ as line n number of times
 * @n: number of times to print
 *
 * Return: returns printed line
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l <= n; l++)
		{
			_putchar(95);
		}
		_putchar ('\n');
	}
}
