#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -prints the alphabet in lowercase and uppercase
 * Return: always 0 (Success)
 */

int main(void)
{
	char low;
	/*prints a to z lowercase*/
	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	/*prints A to Z uppercase*/
	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
