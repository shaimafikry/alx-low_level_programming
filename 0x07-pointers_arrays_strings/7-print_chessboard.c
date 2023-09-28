#include "main.h"
/**
 * print_chessboard - func to print chess board
 * @a: pointer
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	int i, m;

	i = 0;
	m = 0;
	for (i = 0, m = 0; a[i][m] != '\0'; i++, m++)
	{
		_putchar(a[i][m]);
	}
}
