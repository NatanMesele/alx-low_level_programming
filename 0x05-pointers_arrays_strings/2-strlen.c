#include "main.h"

/**
 * _strlen- returns length of string
 * @s: string to be counted
 * Return: int number of s
 */
int _strlen(char *s)
{
int c;

c = 0;
while (*s != '\0')
{
c++;
s++;
}
return (c);
}
