#include "main.h"
#include <stdio.h>
/**
*print_diagsums - a function that prints the sum of the two diagonals
*@a: pointer
*@size: byte
*Return: value
*/
void print_diagsums(int *a, int size)
{
int sumX = 0;
int sumY = 0;
int i;

for (i = 0; i < size; i++)
{
sumX = sumX + a[i * size + i];
}
for (i = size - 1; i >= 0; i--)
{
sumY = sumY + a[i * size + (size - i - 1)];
}
printf("%d, %d\n", sumX, sumY);
}
