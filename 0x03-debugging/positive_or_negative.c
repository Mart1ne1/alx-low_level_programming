#include "main.h"

/**
 * main - entry point
 * @i: the value to be checked
 * positive_or_negative -Determine if number is positive or negative
 * Return: 0 on success
 */

void positive_or_negative(int i)

{
	if (i < 0)
	{
	printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
	printf("%d is %s\n", i, "positive");
	}
	else
	{
	printf("%d is %s\n", i, "zero");
	}
	return;
}
