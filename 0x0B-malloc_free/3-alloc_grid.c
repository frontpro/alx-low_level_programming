#include "main.h"
/**
 * **alloc_grid - a function that returns a pointer to a 2 dimensional
 * @width: int
 * @height: int
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int **arr;
int i, j;

arr = malloc(sizeof(*arr) * height);
if (width <= 0 || height <= 0 || arr == 0)
{
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(**arr) * width);
if (arr[i] == 0)
{
while (i--)
free(arr[i]);
free(arr);
return (NULL);
}
for (j = 0; j < width; j++)
arr[i][j] = 0;
}
}
return (arr);
}
