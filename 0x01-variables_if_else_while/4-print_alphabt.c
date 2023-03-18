#include<stdio.h>
/**
*main -  alphabet soup
*Return: 0
int main(void)
{
int x, e, q;
e = "e";
q = "q";
for(x = 97; x <= 122; x++)
{
if (x != e && x != q)
putchar(x);
putchar('\n');
}

return (0);
}
