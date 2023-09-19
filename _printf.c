#include "main.h"

/**
* Description: _printf - print func
* @format: string
* Return: num of bytes
*/

int _printf(const char *format, ...)
{
int (*func)(va_list);
int printed_chars = 0;
va_list args;

va_start(args, format);

if (format == NULL)
return (-1);

while (*format)
{
if (*format == '%')
{
format++;
if (*format == '\0')
return (-1);

func = get_sp((char *)format);
if (func)
{
printed_chars += func(args);
format++;
}
else
{
printed_chars += write(1, "%", 1);
printed_chars += write(1, format, 1);
format++;
}

}
else
{
printed_chars += write(1, format, 1);
format++;
}
}

va_end(args);
return (printed_chars);
}
