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

va_start(ss, format);

while (*format != '\0')
{
if (*format == '%')
{


ptr = (char *)format++;

get_sp(ptr);
sum += 1;
}
}
return (sum);
}


