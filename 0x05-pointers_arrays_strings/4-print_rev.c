#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: pointer to char to be printed
*/
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
