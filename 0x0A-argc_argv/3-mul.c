#include <stdio.h>
/**
 * main -   a program that multiplies two numbers.
 * @x: int
 * @y: int
 * Return: 0
 */
int main(int x, int y)
{
if (x == NULL || y == NULL)
{
printf("Error \n");
}
else
{
int z = x * y;
printf("%d \n", z);
}
return (0);
}
