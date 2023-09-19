#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	char *str;
	va_list args;
	int i, count = 0;

	if (format)
	{
		va_start(args, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == 'c')
					count += _putchar(va_arg(args, int));
				else if (format[i] == 's')
				{
					str = va_arg(args, char *);
					count += _puts(str);
				}
				else if (format[i] == 'd' || format[i] == 'i')
					count += _putint(va_arg(args, int));
				else if (format[i] == '%')
					count += _putchar('%');
				else if (format[i] == '\0')
					return (-1);

				else
				{
					count += _putchar(format[i - 1]);
					count += _putchar(format[i]);
				}
			}
			else
				count += _putchar(format[i]);
		}
		va_end(args);
	}
	else
		return (-1);
	return (count);
}
