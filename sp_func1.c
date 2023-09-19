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


/**
* Description: print_hex - prints hexadecimal
* @ss: argument
* Return: int
*/

int print_hex(va_list ss)
{
unsigned int nu = va_arg(ss, unsigned int);
char buffer[9];
int s = 0, t;

do {
buffer[s++] = "0123456789abcdef"[nu % 16];
nu /= 16;
} while (nu > 0);

for (t = s - 1; t >= 0; t--)
{
write(1, &buffer[t], 1);
}

return (s);
}



/**
* Description: print_poin - print pointer
* @ss: argument
* Return: int
*/

int print_poin(va_list ss)
{
void *ptr = va_arg(ss, void *);
unsigned long int nu = (unsigned long int)ptr;
char buffer[18];
int s = 16;

buffer[0] = '0';
buffer[1] = 'x';



while (s >= 2) {
int hex_dig = nu & 0xF;
if (hex_dig < 10)
{
buffer[s] = '0' + hex_dig;
}
else
{
buffer[s] = 'a' + hex_dig - 10;
}
nu >>= 4;
s--;
}

return write(1, buffer, 18);
}
