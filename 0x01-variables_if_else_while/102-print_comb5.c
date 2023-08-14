#include <stdio.h>
/**
 * main - Print a combination of two two digits numbers eg 01 09
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int m = 0;

	while (n < 100)
	{
		while (m < 100)
		{
			if (m > n)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
		m = 0;
	}
	putchar('\n');
	return (0);
}
