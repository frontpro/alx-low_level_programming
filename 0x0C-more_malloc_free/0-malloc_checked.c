#include "main.h"
/**
 * *malloc_checked - a function that allocates memory
 * @b: int
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
int *x = malloc(b);

if (x == 0)
exit(98);

return (x);
}
