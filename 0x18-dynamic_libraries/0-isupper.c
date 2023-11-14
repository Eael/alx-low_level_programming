#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: charactr to be checked
 * Return: returns 1 if lowercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
