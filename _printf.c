#include "main.h"

/**
* Description: _printf - print func
* @format: string
* Return: num of bytes
*/

int _printf(const char *format, ...)
{
int (*func)(va_list);
int printed = 0;
va_list args;

va_start(args, format);

if (format == NULL)
return (-1);

while (*format != NULL)
{
if (*format == '%')
{
format++;

func = get_sp((char *)format);
if (func)
{
printed += func(args);
format++;
}
else
{
printed += write(1, "%", 1);
printed += write(1, format, 1);
format++;
}
}
else
{
printed += write(1, format, 1);
format++;
}
}
va_end(args);
return (printed);
}
