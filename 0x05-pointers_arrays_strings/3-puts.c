#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string parameter to input
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_put(char(*str + 0));
			str++;
	}
	_puts(char('\n'));
}
