#include "main.h"

/**
 * main - listing the arguments
 * @argc: number of arguments passed when excuted
 * @argv: the arguments passed when excuted
 * Return: 0 on succusfull compltion
*/
int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
