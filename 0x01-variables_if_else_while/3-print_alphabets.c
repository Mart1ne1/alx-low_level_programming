#include <stdio.h>

/**
 * main -prints thye alphabet
 * Returns: always 0 (Success)
 */
int main(void)
{
	char ch = "a";
	char CH = "A"
	/*prints a to z*/
	while (ch <= "z")
	{
		putchar(ch);
		ch++;
	}
	/*prints A to Z*/
	while (CH <= "Z")
	{
		putchar(CH);
		CH++;
	}
	putchar("\n");

	return (0);
}
