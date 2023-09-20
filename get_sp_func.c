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
{"%", print_mod},
{"d", print_id},
{"i", print_id},
{"b", print_b},
{"x", print_hex},
{"X", print_hex},
{"p", print_poin},
{"r", print_re},
{"R", print_ro13},
{"o", print_o},
{"u", print_u},
{NULL, NULL}
};

int sh = 0;

while (sps[sh].sp != NULL)
{
if (*s == sps[sh].sp[0])
return (sps[sh].f);
sh++;
}
return (NULL);
}


