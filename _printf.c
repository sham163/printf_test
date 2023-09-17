#include "main.h"

/**
* Description: _printf - print func
* @format: string
* Return: num of bytes
*/

int _printf(const char *format, ...)
{
va_list ss;
char *ptr;
int sum = 0;
int (*func)(va_list);

va_start(ss, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;
ptr = (char *)format;

func = get_sp(ptr);
if (func)
{
sum += func(ss);
format += 1;
}
else
{

write(1, "%%", 2);
sum += 2;
}
}
else
{
write(1, format, 1);
sum++;
}
format++;
}

va_end(ss);
return (sum);
}
