#include"main.h"
/**
* puts_half - a function that prints half of a string
* @str: string
*/
void puts_half(char *str)
{
	int i = 0;
	int last;

	while (str[i] != '\0')
	{
		i++;
	}
	last = (i + 1) / 2;
	for (i = last; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
