#include "main.h"

/**
 * _isdigit - checks for uppercase character
 * @c: charactr to be checked
 * Return: returns 1 if lowercase and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
