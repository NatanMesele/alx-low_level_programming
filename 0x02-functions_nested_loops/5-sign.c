#include "main.h"

/**
 * print_sign - checkes wheater its -ve, +ve or 0
 * @c: accepts int to eval
 * Return: 1, -1 or 0
 */
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
