#include "main.h"

/**
 * _islower - checkes wheater its lowercase or not
 * @c: accepts chars and int to eval
 * Return: 1 or 0
 */
int _islower(int c)
{
return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
