#include "main.h"
/**
*main- Entry point
*print_alphabet- print alphabet in lowercase, followed by a new line.
*Description: print alphabet in lowercase
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
