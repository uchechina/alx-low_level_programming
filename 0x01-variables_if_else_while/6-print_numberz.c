#include <stdio.h>
/**
*main - Entry point
*Description:'output base 10 numbers using putchar'
*Return: Always 0 (Success)
*/
int main(void)
{
int ch = '0';
for (ch = '0'; ch <= '9'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
