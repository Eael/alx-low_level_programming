#include "main.h"
/**
 * print_times_table - prints n times table,
 * starting with 0 if n > 15 or = 0
 * prints nothing
 * @n: number to print
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, cur_num;

	i = j = 0;
	if (n > 15 || n == 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			cur_num = i * j;
			if (j == 0)
				_putchar(cur_num + 48);
			else if (cur_num < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(cur_num + 48);
			}
			else if (cur_num >= 10 && cur_num < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((cur_num / 10) + 48);
				_putchar((cur_num % 10) + 48);
			}
			else if (cur_num >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((cur_num / 100) + 48);
				_putchar(((cur_num / 10) % 10) + 48);
				_putchar((cur_num % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
