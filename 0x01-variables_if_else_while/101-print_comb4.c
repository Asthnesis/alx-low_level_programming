#include <stdio.h>
/**
*main - Prints all the numbers of base 16 in lowercase
*Return: Always (Success)
*/
int main(void)
{
int i, j, k;
for (i = '0'; i < '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
for (k = k + j; k <= '9'; k++)
{
if ((j != i) != k)
{
putchar(i);
putchar(j);
if (i == '7' && j == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
