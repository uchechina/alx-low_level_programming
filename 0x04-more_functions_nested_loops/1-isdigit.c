#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: digit
 * Return: (0)
 */
int _isdigit(int c)
{
int i;
for (int i = 0; i < 10; i++)
if (c == i)
return (1);
return (0);
}
