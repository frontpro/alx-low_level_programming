#include "main.h"
/**
* *_strcat - a function that concatenates two strings.
* @*dest: string
* @*src: string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char first_string[20];
	char second_string[20];
	dest = first_string;
	src = second_string;

	while (first_string[i] != '\0')
	{
		++dest;
		i++;
	}
	while (second_string[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	_putchar(first_string);
}
