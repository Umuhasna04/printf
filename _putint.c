#include "main.h"

/**
 * _putint - function that prints integer
 * @num: the number to be printed
 *
 * Return: number of characters printed
 */
int _putint(long int num)
{
	int count;

	if (num < 0)
	{
		_putchar('-');
		return (1 + _putint(-num));
	}

	if (num / 10 == 0)
	{
		_putchar(num + '0');
		return (1);
	}

	count = _putint(num / 10);
	_putchar(num % 10 + '0');

	return (count + 1);
}
