#include <stdio.h>
/**
 * main - prints the name of the file it was compiled from
 *
 * Return: name of file and new line
*/
int main()
{
	printf("%s\n", __FILE__ );
	return (0);
}