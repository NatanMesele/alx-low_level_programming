#include "main.h"

/**
 * _isalpha - checkes wheater its uppercase or not
 * @c: accepts chars or int to eval
 * Return: 1 or 0
 */
int _isalpha(int c)
{
return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
