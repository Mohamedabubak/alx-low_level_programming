#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints the alphbet from a to z in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, i;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
