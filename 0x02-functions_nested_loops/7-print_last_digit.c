#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
        int d;

        d = n % 10;

        if (d < 0)
        {
                d = -d;
                _putchar(d + 48);
                return (d);
        }
        else
        {
                _putchar(d + 48);
                return (d);
        }
}
