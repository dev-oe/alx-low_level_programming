#include "main.h"
/**
 * factorial - returns factorial of an intager
 * @n: integer to calculate its factorial
 * Return: on success factorial
 * on failure -1
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
