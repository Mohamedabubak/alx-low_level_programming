#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: parameter input to reverse
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int o, i;
	char temp;

	for (o = 0; s[o] != '\0'; ++o)

	for (i = 0; i < o / 2; i++)
	{
		temp = s[i];
		s[i] = s[o - 1 - i];
		s[o - 1 - i] = temp;
	}
}
