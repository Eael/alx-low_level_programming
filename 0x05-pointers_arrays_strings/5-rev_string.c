#include "main.h"
/**
 * rev_string - prints a string in reversee
 * @s: pointer to the string  we want to reverse
 *
 * Return: nothingg
 */

void rev_string(char *s)
{
	int l;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i - 1;
	for (; l >= 0; l--)
	{
		putchar(s[l]);
	}
	putchar('\n');
}

