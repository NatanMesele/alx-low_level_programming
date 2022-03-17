#include "main.h"

/**
 * print_square - Print square line dependent on the integer n.
 * @size : The number of lines using '#' characters to use per row and column
 * Return: Void.
 */
void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
