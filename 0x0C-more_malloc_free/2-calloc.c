#include "main.h"
/**
 * *_memset - a function that allocates memory for an array,
 * @s: pointer
 * @b: char
 * @n: int
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while (n--)
*s++ = b;

return (ptr);
}

/**
 * *_calloc - a function that allocates memory for an array,
 * @nmemb: int
 * @size: int
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *x;

if (size == 0 || nmemb == 0)
return (NULL);
x = malloc(sizeof(int) * nmemb);
if (x == 0)
return (NULL);
_memset(x, 0, sizeof(int) * nmemb);

return (x);
}
