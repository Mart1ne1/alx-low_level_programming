#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -prints all single digit numbers of base 10 from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	putchar(d);
	putchar('\n');

	return (0);
}
