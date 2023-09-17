#include "main.h"



/**
 * Description: _strlen - a function that returns the length of a string.
 *
 * @s: string parameter
 *
 * Return: length the length of string
 */

int _strlen(char *s)
{
int i = 0;
int length = 0;


while (s[i] != '\0')
{
length += 1;
i++;
}
return (length);
}


/**
* Description: print_s - print string
* @ss: argument
* Return: int
*/

int print_s(va_list ss)
{
char *str = va_arg(ss, char *);
int len = 0;

while (str[len] != '\0')
len++;
return (write(1, str, len));
}


/**
* Description: print_c - print string
* @ss: argument
* Return: int
*/

int print_c(va_list ss)
{
char ch;

ch = va_arg(ss, int);
return(write(1, &ch, 1));
}


/**
* Description: print_mod - print string
* @ss: argument
* Return: int
*/

int print_mod(va_list ss)
{
(void)ss;

return (_putchar('%'));
}
