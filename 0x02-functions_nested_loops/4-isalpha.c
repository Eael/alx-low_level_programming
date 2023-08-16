#include "main.h"

/**
 * _isalpha - checks if c is  lowercase or uppercase character
 * @c: character to check
 *
 * Return: returns 1 if c is a letter
 */
int _isalpha(int c)
{
	if (c >= 65  && c <= 90) ||  (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
