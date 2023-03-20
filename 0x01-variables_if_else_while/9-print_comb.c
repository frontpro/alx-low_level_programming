#include<stdio.h>
/**
* main - program that prints all possible combinations of single-digit numbers.
* Return: 0
*/
int main(void)
{
	int x = 0;

	while (x < 10)
{
	putchar(x);
	putchar(',');
	putchar(' ');
	x++;
}
	putchar('\n');

	return (0);
}
