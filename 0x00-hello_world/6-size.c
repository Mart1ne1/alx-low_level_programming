#include <stdio.h>
/**
 * main -a program that prints the size of types on the computer it is compiled and run on
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("Size of a char: %u byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %u byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %u byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(e));
return (0);
}

