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
va_list ss;
char charr;
char* strr;
int counter = 0;
size_t i;

va_start(ss,format);

while (*format != '\0')
{
if (*format == '%')
{
format++;

switch (*format)
{
case 's':
strr = va_arg(ss, char*);
for (i = 0; i < strlen(strr); i++)
{
_putchar(strr[i]);
counter++;
}
break;

case 'c':
charr = va_arg(ss, int);
_putchar(charr);
counter++;
break;

case '%':
_putchar('%');
counter++;
break;

default:
_putchar('%');
_putchar(*format);
counter += 2;
break;


}
format++;
}

else
{
_putchar(*format);
counter++;
format++;
}
}

va_end(ss);

return(counter);

}

