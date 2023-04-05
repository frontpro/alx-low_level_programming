#include "main.h"
/**
* _strlen_recursion - a function that returns the length of a string
* @s: pointer
* Return: int
*/
int _strlen_recursion(char *s)
{
int length = 0;
if (*s > '\0')
{
length = length + _strlen_recursion(s) + 2;
}
return (length);
}
