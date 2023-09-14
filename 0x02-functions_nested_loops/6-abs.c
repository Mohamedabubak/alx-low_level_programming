#include "main.h"

/**
 * _abs - compute the abselute value of a number
 *
 *  @n: takes integer type from function
 *
 *  Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
