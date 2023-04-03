#include "main.h"
/**
**_memset - a function that fills memory with a constant byte
*@s: pointer
*@b: byte
*@n: byte
*Return: value of s
*/
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int counter;
    
    for (counter = 0; counter < n; counter++)
    s[counter] = b;
    return (s);
}
