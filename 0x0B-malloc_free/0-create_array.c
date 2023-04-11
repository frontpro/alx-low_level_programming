#include "main.h"
/**
 * *create_array - a function that creates an array of chars
 * @size: array
 * @c: char
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	for (i = size; i > 0; i--)
		n[i] = c;
	return (n);
}
