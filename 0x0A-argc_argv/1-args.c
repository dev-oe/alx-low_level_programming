#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 on success
*/
int main(int argc, char **argv  __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
