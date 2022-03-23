#include "main.h"

/**
 * *_strncat-appends the src string to the dest string, over‐
 * writing the terminating null byte ('\0') at the end of dest, and  then
 * adds  a  terminating  null byte.  The strings may not overlap, and the
 * dest string must have enough space for the result.   If  dest  is  not
 * large enough, program behavior is unpredictable; buffer overruns are a
 * favorite avenue for attacking secure programs.
 *
 * @dest:String that will be appended.
 * @src:String to be concatenated upon.
 * @n:integer parameter to compare index to
 *
 * Return:a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
