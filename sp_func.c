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
int i = 0, count = 0, j = 0;
char buffer[BUFFER_SIZE];

while (str[i] && j < BUFFER_SIZE)
{
for (i = 0; str[i] != '\0'; i++)
{
buffer[j] = str[i];

j++;
}

}


count += j;

return (write(1, buffer, j));
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
return (write(1, &ch, 1));
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


/**
* Description: print_id - print string
* @ss: argument
* Return: int
*/

int print_id(va_list ss)
{
int i, j;
int num = va_arg(ss, int);
char buffer[12];
int len = 0;
int is_negative = 0;

if (num < 0)
{
is_negative = 1;
num = -num;
}

do {
buffer[len++] = (num % 10) + '0';
num /= 10;
} while (num != 0);

if (is_negative)
{
buffer[len++] = '-';
}

for (i = 0, j = len - 1; i < j; i++, j--)
{
char temp = buffer[i];
buffer[i] = buffer[j];
buffer[j] = temp;
}

buffer[len] = '\0';

return (write(1, buffer, len));
}
