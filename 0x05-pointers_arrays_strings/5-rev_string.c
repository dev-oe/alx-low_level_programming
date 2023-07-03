#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string to reverse
*/
void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
