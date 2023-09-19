#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @args: the string
 *
 * Return: number of characters printed
 */
int _puts(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
