#include "main.h"

/**
 * _isupper - checks for uppercase chracter.
 * @c: c - variable
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
