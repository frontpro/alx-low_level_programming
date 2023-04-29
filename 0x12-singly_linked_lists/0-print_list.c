#include "lists.h"
/**
 * _strlen - returns lenght
 * @s: the string
 * Return: integer
*/
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}
/**
 * print_list - a function that prints all the elements of list
 * @h: the pointer
 * Return: size
*/
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
i++;
}
return (i);
}
