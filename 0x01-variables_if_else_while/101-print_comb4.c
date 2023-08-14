#include <stdio.h>
/**
 * main - Print a combination of 99 and 89
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int m = 49;
	int k = 50;

	while (n <= 56)
	{
		while (m <= 57)
		{
			while (k < 58)
			{
				if (k > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(k);
					if (n != 56 || m != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			m++;
			k = 50;
		}
		n++;
		m = 49;
	}
	putchar('\n');
	return (0);
}
