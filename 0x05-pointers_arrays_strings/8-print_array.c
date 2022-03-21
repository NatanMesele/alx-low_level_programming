#include "main.h"

/**
 * print_array-prints n elements of an array of integers,
 * * followed by a new line.
 * @n: is the number of elements of the array to be prpinted
 * @a: array
 * Return: void
*/
void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}

		printf("\n");
}
