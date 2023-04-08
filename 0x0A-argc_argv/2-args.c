#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argv: array
 * @argc: int
 * Return: 0
 */
int main(int argc, char *argv[])
{
int count;
for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
