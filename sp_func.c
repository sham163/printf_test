#include "main.h"



/**
* Description: print_s - print string
* @ss: argument
* Return: int
*/

int print_s(va_list ss)
{
char *st = va_arg(ss, char*);
int cou = 0;
int s = 0;
char buffer[BUFFER_SIZE];

if (st == NULL)
{
st = "(null)";
}
else
{
while (st[s])
{
if (cou % BUFFER_SIZE == 0)
{
int t = 0;
while (st[s] && t < BUFFER_SIZE)
{
buffer[t] = st[s];
s++;
t++;
}
write(1, buffer, t);
cou += t;
}
else
{
write(1, &st[s], 1);
s++;
cou++;
}
}
}
return (cou);
}


/**
* Description: print_c - print string
* @ss: argument
* Return: int
*/

int print_c(va_list ss)
{
char sham;

sham = va_arg(ss, int);
return (write(1, &sham, 1));
}


/**
* Description: print_mod - print string
* @ss: argument
* Return: int
*/

int print_mod(va_list ss)
{
(void)ss;

return (write(1, "%", 1));
}


/**
* Description: print_id - print string
* @ss: argument
* Return: int
*/

int print_id(va_list ss)
{
int s, t;
int nu = va_arg(ss, int);
char buffer[12];
int le = 0;
int isn = 0;

if (nu < 0)
{
isn = 1;
nu = -nu;
}
if (nu == 0)
{
buffer[le] = (nu % 10) + '0';
le++;
nu /= 10;
}
while (nu != 0)
{
buffer[le] = (nu % 10) + '0';
le++;
nu /= 10;
}
if (isn > 0)
{
buffer[le] = '-';
le++;
}

for (s = 0, t = le - 1; s < t; s++, t--)
{
char te = buffer[s];
buffer[s] = buffer[t];
buffer[t] = te;
}

buffer[le] = '\0';

return (write(1, buffer, le));
}


/**
* Description: print_u - deal whith %s format specifier
* @ss: the arguments in va_list
* Return: count of characters printed
*/
int print_u(va_list ss)
{
int i;
unsigned int num = va_arg(ss, unsigned int);
char buffer[32];

int len = 0;

if (num == 0)
{
buffer[len] = (num % 10) + '0';
len++;
num /= 10;

}

while (num > 0)
{
buffer[len] = (num % 10) + '0';
len++;
num /= 10;
}
for (i = len - 1; i >= 0; i--)
{
write(1, &buffer[i], 1);
}

return (len);

}
