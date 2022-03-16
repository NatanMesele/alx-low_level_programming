#include "main.h"

/**
 * print_last_digit - givies the value of last digit
 * * @num: Number ot be eval
 * Return: last digit of num
*/
int print_last_digit(int num)
{
int last = num % 10;
last = (last < 0) ? last * -1 : last;
_putchar(last + '0');
return (last);
}
