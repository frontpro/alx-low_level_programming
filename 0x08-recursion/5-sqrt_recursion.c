#include "main.h"
/**
* squ - the returns of natural square root
* @n: int
* @x: int
* Return: int
*/
int squ(int n, int x)
{
if (x * x < n)
return (squ(n, x + 1));
else if (x * x == n)
return (x);
else
return (-1);
}
/**
* _sqrt_recursion - a function that returns the natural square root of a number
* @n: int
* Return: int
*/
int _sqrt_recursion(int n)
{
return (squ(n, 1));
}


