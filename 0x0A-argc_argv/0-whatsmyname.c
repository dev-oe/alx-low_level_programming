#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: numbner of arguments
 * @argv: array of arguments
 * Return: always 0 success
*/
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
