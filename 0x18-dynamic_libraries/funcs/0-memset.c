#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset- Function to set memory
 * @s: ...
 * @b: ...
 * @n: ...
 *
 * Return: Success
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
