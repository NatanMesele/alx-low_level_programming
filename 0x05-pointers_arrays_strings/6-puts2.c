#include "main.h"
/**
 * puts2- prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: string to be eval
 * Return: void
 */
void puts2(char *str)
{
int c;

c = 0;
while (*str != '\0')
{
if (c % 2 == 0)
{
_putchar(*str);
}
c++;
str++;
}
_putchar('\n');
}
