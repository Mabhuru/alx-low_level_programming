#include "main.h"

/**
 * print_chessboard - print chessboard given set 2D array
 * @a: 2D array
 */

void print_chessboard(char (*a)[8])
{

	int l;
	int s;

	for (l = 0; l < 8; l++)
	{
		for (s = 0; s < 8; s++)
		{
			_putchar(a[l][s]);
		}
		_putchar('\n');
	}


}
