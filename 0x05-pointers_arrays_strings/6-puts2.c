#include"main.h"
/**
* puts2 - a function that prints every other character of a string
* @str: string
* Return: string
*/
void puts2(char *str)
{
	int i = 0;
	int j;
	char *x = str;

	while (*x != '\0')
	{
		x++;
		i++;
	}
	for (j = 0; j <= (i - 1); j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
