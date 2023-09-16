#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "main.h"


/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

int _printf(const char *format, ...)
{

int count = 0;
int i = 0;
va_list sham;
int num, num1;

va_start(sham, format);

if (format && format[i])
{
for (; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
switch(format[i])
{
case 'i':
{
num = va_arg(sham, int);
putchar(num);
count += 1;
}
break;

case 'd':
{
num1 = va_arg(sham, int);
putchar(num1);
count += 1;
}
break;
default:
{
putchar(format[i]);
count += 1;
}
break;
}
}
else
{
putchar(format[i]);
count += 1;
}
}
}
va_end(sham);

return (count);


}
