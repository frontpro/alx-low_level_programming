#include "main.h"
/**
* *_strcat - a function that concatenates two strings.
* @*dest: string
* @*src: string
*/
char *_strcat(char *dest, char *src)
{
int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
