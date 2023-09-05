#include <stdio.h>
/**
 * main - print all arguments)
 * @argc: argument count
 * @argv: argument vector. array of argument
 *
 * Return: name of program with path
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
