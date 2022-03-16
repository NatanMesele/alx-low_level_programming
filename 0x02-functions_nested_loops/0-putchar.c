#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int i;
for (i = 0; i < sizeof(putchar); i++)
{
_putchar(putchar[i]);
}
_putchar(10);
return (0);
}
