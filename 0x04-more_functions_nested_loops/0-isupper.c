#include"main.h"
/**
 * _isupper - checks if char c is uppercase
 * returns 1 if c is uppercase
 * otherwise returns 0
 * @c: char to check if uppercase
 * Return: 1 if uppercase or 2 if not
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
