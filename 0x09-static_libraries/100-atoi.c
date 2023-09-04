#include "main.h"
/**
 * _atoi - takes a pointer to a string and converts it to an integer
 * @s: pointer to string we want to convert
 *
 * Return: converted integert
 */

int _atoi(char *s)
{
	int a, b, c, d, len, digit;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	len = 0;
	digit = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (a < len && d == 0)
	{
		if (s[a] == 45)
		{
			++b;
		}
		if (s[a] >= 48 && s[a] <= 57)
		{
			digit = s[a] - 48;
			if (b % 2)
			{
				digit = -digit;
			}
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < 48 || s[a + 1] > 57)
			{
				break;
			}
			d = 0;
		}
		a++;
	}
	if (d == 0)
	{
		return (0);
	}
	return (c);
}
