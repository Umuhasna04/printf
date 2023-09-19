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

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
