#include "main.h"
/**
* _puts_recursion - a function that prints a string, followed by a new line
* @s: pointer
* Return: string
*/
void _puts_recursion(char *s)
{
_putchar(*s);
_puts_recursion(s + 1);

if (*s == '\0')
{
_putchar('\n');
}
}
