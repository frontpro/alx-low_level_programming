#include<stdio.h>
/**
* main - program that prints all possible combinations of single-digit numbers.
* Return: 0
*/
int main(void)
{
	int x = 0;

	while (x <= 9)
	putchar(x);
	putchar(',');
	putchar(' ');
	x++;
	putchar('\n');

	return (0);
}
