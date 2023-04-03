#include "main.h"
#include<stdio.h>
/**
*_strspn - a function that gets the length of a prefix substring
*@s: pointer
*@accept: input
*Return: value
*/
unsigned int _strspn(char *s, char *accept)
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
