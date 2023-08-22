#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: pointer to the string
 *
 * Return: string
 */

void puts_half(char *str)
{
	int l;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (l = i / 2; str[l] != '\0'; l++)
		{
			_putchar(str[l]);
		}
	}
	else
	{
		for (l = (i - 1) / 2; str[l - 1] != '\0'; l++)
		{
			_putchar(str[l]);
		}
	}
	_putchar('\n');
}

