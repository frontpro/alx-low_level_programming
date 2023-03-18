#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - The last digit
* Return: 0
*/
int main(void)
{
	int n, lastint;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastint = n % 10;
	/* your code goes there */
	if (lastint > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastint);
	}
	if (lastint == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastint);
	}
	if (lastint != 0 && lastint < 6)
	{
	printf("Last digit of %d is %d and is ;ess than 6 and not 0\n", n, lastint);
	}

	return (0);
}
