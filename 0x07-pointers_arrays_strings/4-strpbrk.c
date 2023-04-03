#include "main.h"
/**
**_strpbrk -  a function that searches a string for any of a set of bytes
*@accept: pointer
*@s: pointer
*Return: string
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int n = 0;
int x;

while (*s)
{
for (x = 0; accept[0]; x++)
{
if (*s == accept[x])
{
n++;
break;
}
else if (accept[x + 1] == '\0')
return (n);
}
x++;
}
return (n);
}
