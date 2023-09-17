#include "main.h"

/**
* Description: get_sp - get the specifire
* @s: string
* Return: function
*/


int (*get_sp(char *s))(va_list ss)
{
spt sps[] = {
{"s", print_s},
{"c", print_c}
};

int i = 0;

while (sps[i].sp[0])
{
if (*s == sps[i].sp[0])
return (sps[i].f);
i++;
}
return (0);
}


