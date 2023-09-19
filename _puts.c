#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string
 *
 * Return: number of characters printed
 */
int _puts(char *str)
{
	int count = 0;

	if (str)
		str = str;
	else
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
