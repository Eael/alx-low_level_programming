#include <stdio.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector. array of argument
 *
 * Return: a number then a new line
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
