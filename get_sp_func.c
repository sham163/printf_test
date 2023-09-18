#include "main.h"


/**
* Description: _strcmp - a function that compares two strings.
*
* @s1: char input parameter.
* @s2: char input parameter.
*
* Return: 0 if s1 and s2 are the same;
* less than 0 if s1<s2; greater than 0 if s1>s2.
*/

int _strcmp(char *s1, char *s2)
{
int equal = 0;

while (*s1)
{
if (*s1 != *s2)
{
equal = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (equal);
}



/**
* Description: get_sp - get the specifire
* @s: string
* Return: function
*/


int (*get_sp(char *s))(va_list ss)
{
spt sps[] = {
{"s", print_s},
{"c", print_c},
{"%", print_mod}
};

int i = 0;

while (sps[i].sp[0])
{
if (_strcmp(s, sps[i].sp) == 0)
return (sps[i].f);
i++;
}
return (NULL);
}


