#include"main.h"
/**
* rev_string -  a function that reverses a string
* @s: string
* Return: string
*/
void rev_string(char *s)
{
	char revArray = s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
	i++;
	for (j = 0; j < i; j++)
	{
		i--;
		revArray = s[j];
		s[j] = s[i];
		s[i] = revArray;
	}	
}
