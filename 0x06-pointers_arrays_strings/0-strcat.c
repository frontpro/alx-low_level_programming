#include "main.h"
/**
* *_strcat - a function that concatenates two strings.
* @*dest: string
* @*src: string
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
