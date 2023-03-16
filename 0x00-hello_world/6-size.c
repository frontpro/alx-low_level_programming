#include <stdio.h>
/**
 * main - Size is not grandeur, and territory does not make a nation
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float g;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(g));
	return (0);
}
