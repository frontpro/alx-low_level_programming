#include "main.h"
/**
 * *_strdup - a function that returns a pointer
 * @str: pointer
 * Return: char
*/
char *_strdup(char *str)
{
int i;
int size;
char *x;

if (str  == NULL)
return (NULL);

for (size = 0; str[size] != '\0'; size++)
;
x = malloc(size * sizeof(*str) + 1);

if (x == 0)
return (NULL);
else
{
for (i = 0; i < size; i++)
x[i] = str[i];
}
return (x);
}
