#include "main.h"
/**
* prime - a function calculate the prime
* @n: int
* @x: int
* Return: int
*/
int prime(int n, int x)
{
if (x >= n && n >= 2)
return (1);
else if (n % x == 0 || n <= 1)
return (0);
else
return (prime(n, x + 1));
}
/**
* is_prime_number - a function that returns 1 or 0
* @n: int
* Return: int
*/
int is_prime_number(int n)
{
return (prime(n, 2));
}

