#include "function_pointers.h"
/**
 * array_iterator -  a function that executes a function given
 * @array: array
 * @size: size
 * @action: pointer
 * Return: 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *x = array + size - 1;

if (array && size && action)
while (array <= x)
action(*array++);
}
