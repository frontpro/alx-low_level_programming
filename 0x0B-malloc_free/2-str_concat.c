#include "main.h"
/**
 * _strlen - the length of string
 * @s: pointer
 * Return: int
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
/**
 * *str_concat - a function that concatenates two strings
 * @s1: pointer
 * @s2:pointer
 * Return: char
*/
char *str_concat(char *s1, char *s2)
{
int sizeA, sizeB, i;
char *x;

if (s1 == NULL)
s1 = '\0';
if (s2 == NULL)
s2 = '\0';

sizeA = _strlen(s1);
sizeB = _strlen(s2);
x = malloc((sizeA + sizeB) * sizeof(char) + 1);
if (x == 0)
return (0);

for (i = 0; i <= sizeA + sizeB; i++)
{
if (i < sizeA)
x[i] = s1[i];
else
x[i] = s2[i - sizeA];
}
x[i] = '\0';
return (x);
}
