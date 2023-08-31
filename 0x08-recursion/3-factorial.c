#include "main.h"
/**
 * factorial - prints factorial of a number
 * n: number we want to print factorial of
 *
 * Return: returns string
 */

int factorial (int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
