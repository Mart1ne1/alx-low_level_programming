#include "main.h"

/**
 * _strncat -Concatates two strings using an inputted number of bytes from src
 * @dest: The string to be appended upon
 * @src: The string to be appended on dest
 * @n: The number of bytes from src to appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
