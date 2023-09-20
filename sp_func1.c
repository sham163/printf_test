#include "main.h"


/**
* Description: print_b - print binary
* @ss: argument
* Return: int
*/

int print_b(va_list ss)
{
int s, t;
unsigned int nu = va_arg(ss, unsigned int);
char bi[32];
int le = 0;
char te;


while (nu > 0)
{
bi[le++] = (nu % 2) + '0';
nu = nu / 2;
}


for (s = 0, t = le - 1; s < t; s++, t--)
{
te = bi[s];
bi[s] = bi[t];
bi[t] = te;
}




return (write(1, bi, le));
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



while (s >= 2)
{
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

return (write(1, buffer, 18));
}


/**
* Description: print_re - reverse string
* @ss: argument
* Return :int
*/

int print_re(va_list ss)
{
char *st = va_arg(ss, char *);
int s;
int le = _strlen(st);

for (s = le - 1; s >= 0; s--)
{
_putchar(st[s]);
}

return (le);
}


/**
* Description: print_o - deal whith %b format specifier
* @ss: the arguments in va_list
* Return: count of characters printed
*/
int print_o(va_list ss)
{
int i;
unsigned int digit = va_arg(ss, unsigned int);
char buffer[12];

int lenght = 0;
if (digit == 0)
{
buffer[lenght] = (digit % 8) + '0';
lenght++;
digit /= 8;

}

while (digit > 0)
{
buffer[lenght] = (digit % 8) + '0';
lenght++;
digit /= 8;
}

for (i = lenght - 1; i >= 0; i--)
{
write(1, &buffer[i], 1);
}

return (lenght);
}
