#include "main.h"
/**
*Description: A function that prints the alphabet, in lowercase, followed by a new line
*print_alphabet - prints the alphabet in lowercase, followed by a new line.
*/
void print_alphabet(void)	
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
