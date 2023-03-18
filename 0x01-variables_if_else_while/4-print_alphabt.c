#include<stdio.h>
/**
*main -  alphabet soup
*Return: 0
*/
int main(void)
{
int x, e, q;
e = 113;
q = 101;
for(x = 97; x <= 122; x++)
{
if (x != e && x != q)
putchar(x);
putchar('\n');
}

return (0);
}
