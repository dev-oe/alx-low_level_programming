#include "main.h"
/**
 * *_memset - fills memory with constant byte
 * @s: pointer to the block of memory to fill
 * @b: constant byte
 * @n: the number of bytes to be filled
*/
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
