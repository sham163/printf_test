#include "main.h"


/**
* Description: ro13_char - rotate the string
* @c: character
* Return: char
*/


char ro13_char(char c)
{
char b;

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
if ((c >= 'a' && c <= 'z'))
{
b = 'a';
}
else
{
b = 'A';
}

return ((c - b + 13) % 26 + b);
}
return (c);
}

/**
* Description: print_ro13 - rotate the str
* @ss: argument
* Return: int
*/

int print_ro13(va_list ss)
{
char *st = va_arg(ss, char *);
int s;
int le = _strlen(st);

for (s = 0; s < le; s++)
{
_putchar(ro13_char(st[s]));
}

return (le);
}
