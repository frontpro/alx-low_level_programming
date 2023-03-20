#include<stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase
* Return: 0
*/
int main(void)
{
	int hex;

	for (hex = 48; hex <= 57; hex++)
	putchar(hex);
	for (hex = 97; hex <= 102; hex++)
	putchar(hex);
	putchar('\n');

	return (0);
}
