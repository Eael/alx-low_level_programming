#include "main.h"
/**
 * jack_bauer - prints every minute of the day of JB,
 * starting from 00:00 to 23:59
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int h, m;

	h = m = 0;
	for  (; h < 24; h++)
	{
		for (; m < 60; m++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
		m = 0;
	}
}
