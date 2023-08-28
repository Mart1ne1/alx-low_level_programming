#include "main.h"

/**
 * _memset -Entry point.
 * @s: the pointed address
 * @b: the constant byte
 * @n: the bytes
 * Return: Always 0(Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
