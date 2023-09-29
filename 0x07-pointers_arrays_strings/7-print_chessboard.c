#include "main.h"
/**
 * print_chessboard - func to print chess board
 * @a: pointer
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	int i, m;

	for (i = 0; a != 0; i++, a++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[i][m]);
		_putchar('\0');
	}
}
