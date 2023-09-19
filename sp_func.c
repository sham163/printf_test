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

do {
buffer[le++] = (nu % 10) + '0';
nu /= 10;
} while (nu != 0);

if (isn)
{
buffer[le++] = '-';
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
