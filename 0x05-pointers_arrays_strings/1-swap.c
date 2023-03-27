#include "main.h"
/**
* swap_int - a function that swaps the values of two integers
* Return: a,b
* @a: input
* @b: input
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
