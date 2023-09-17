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
format++;
ptr = (char *)format;
if (*ptr != '\0')
{
int (*func)(va_list) = get_sp(ptr);
if (func)
{
sum += func(ss);
format += 1;
}
else
{
_putchar('%');
sum += 1;
}
}
}
else
{
_putchar(*format);
sum += 1;
}
format++;
}
va_end(ss);
return (sum);
}
