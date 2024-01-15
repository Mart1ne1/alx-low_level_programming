#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper -Prints alphabet in uppercase
 * @c: the character to check
 *
 * Return: Always success
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
