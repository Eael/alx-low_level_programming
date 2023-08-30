#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to chessboard array
 *
 * Return: Return chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
