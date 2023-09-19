#include "main.h"

/**
* Description: _printf - print func
* @format: string
* Return: num of bytes
*/

int _printf(const char *format, ...)
{
int (*func)(va_list);
int prin = 0;
va_list ss;

va_start(ss, format);

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
prin += func(ss);
format++;
}
else
{
prin += write(1, "%", 1);
prin += write(1, format, 1);
format++;
}

}
else
{
prin += write(1, format, 1);
format++;
}
}

va_end(ss);
return (prin);
}
