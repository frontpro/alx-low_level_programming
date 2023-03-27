#include"main.h"
/**
* _strlen -  a function that returns the length of a string
* @s: array of string
* Return: value of i
*/
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
