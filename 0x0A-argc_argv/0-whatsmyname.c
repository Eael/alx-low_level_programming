#include <stdio.h>
/**
 * main - print name of program (argv[0])
 * @argc: argument count
 * @argv: argument vector. array of argument
 *
 * Return: name of program with path
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
