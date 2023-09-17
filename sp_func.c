#include "main.h"

/**
* Description: print_s - print string
* @ss: argument
* Return: int
*/

int print_s(va_list ss)
{
char* str = va_arg(ss, char*);
int i;


for (i = 0; i < strlen(str); i++)
{
write(1, &str[i], 1);
counter++;
}

return(counter);
}
