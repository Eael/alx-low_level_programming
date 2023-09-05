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
	int i, num;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = _atoi(argv[i]);
		if (num == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		result += num;
	}
	printf("%d\n", result);
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
	int i, n, sign;

	i = 0;
	n = 0;
	sign = 1;
	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (sign * n);
}

