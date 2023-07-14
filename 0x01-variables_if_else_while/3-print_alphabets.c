#include <stdio.h>
/**
*main - Prints an alphabet in lowercase then uppercase
*Return: Always (Success)
*/
int main(void)
{
char low, upp;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (upp = 'A'; upp <= 'Z'; upp++)
putchar(upp);
putchar('\n');
return (0);
}
