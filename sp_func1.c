#include "main.h"


/**
* Description: print_b - print binary
* @ss: argument
* Return: int
*/

int print_b(va_list ss)
{
unsigned int num = va_arg(ss, unsigned int);
int printed_chars = 0;
unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

if (num == 0)
{
_putchar('0');
return (1);
}

while (mask > 0)
{
if (num & mask)
_putchar('1');
else
_putchar('0');

mask >>= 1;
printed_chars++;
}

return (printed_chars);
}
