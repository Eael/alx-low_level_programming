#include <stdio.h>

int _atoi(char *s);
/**
 * main - multiplies the two arguments passed itt
 * @argc: argument count
 * @argv: argument vector. array of argument
 *
 * Return: a result then a new line
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", result);
	}
	else 
	{
		printf("Error\n");
	}

	return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
