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
unsigned int x;
unsigned int n;
unsigned int v;
unsigned int y;

v = 0;

for (x = 0; s[i] != '\0'; x++)
{
y = 0;
for (n = 0; accept[n] != '\0'; n++)
{
if (accept[n] == s[i])
{
value++;
y = 1;
}
}
}
}
