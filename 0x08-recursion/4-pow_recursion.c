#include "main.h"
/**
 * _pow_recursion - raises value of x by the value of y
 * @x: base intager
 * @y: exponent int
 * Return: exponential
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
