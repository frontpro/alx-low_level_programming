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
 * *argstostr - a function that concatenates all the arguments of your program
 * @ac: int
 * @av: char
 * Return: void
 */
char *argstostr(int ac, char **av)
{
int i, j;
int z = 0;
int cmpt = 0;
char *size;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++, z++)
z += _strlen(av[i]);
size = malloc(sizeof(char) * z + 1);
if (size == 0)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, cmpt++)
size[cmpt] = av[i][j];

size[cmpt] = '\n';
cmpt++;
}
size[cmpt] = '\0';
return (size);
}
