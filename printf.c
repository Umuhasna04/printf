#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args, args_copy;
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
					va_copy(args_copy, args);
					count += _puts(args_copy);
				}
				else if (format[i] == '%')
					count += _putchar('%');
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

	return (count);
}
