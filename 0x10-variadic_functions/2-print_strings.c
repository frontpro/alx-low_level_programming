#include "variadic_functions.h"
/**
 * print_strings -  a function that prints strings, followed by a new line.
 * @separator: string
 * @n: argument numbers
 * @...: int
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
int i = n;
char *str;
va_list ap;

if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (i--)
printf("%s%s", (srt = va_arg(ap, char *)) ? str : "(nil)", i ? (separator ? separator : "") : "\n");
va_end(ap);
}
