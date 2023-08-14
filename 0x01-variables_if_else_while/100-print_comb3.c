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

	while (n <= 56)
	{
		while (m <= 57)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
		m = 49;
	}
	putchar('\n');
	return (0);
}
