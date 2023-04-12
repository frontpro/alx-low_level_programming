#include "main.h"
/**
 * *_strdup - a function that returns a pointer
 * @str: pointer
 * Return: char
*/
char *_strdup(char *str)
{
int i;
int s;
char *x;

if (str  == NULL)
return (NULL);

for (s = 0; str[s] != '\0'; s++)
x = malloc(s * sizeof(*str) + 1);

if (x == 0)
return (NULL);
else
{
for (i = 0; i < s; i++)
x[i] = str[i];
}
return (x)
}
