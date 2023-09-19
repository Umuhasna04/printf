#include "main.h"

/**
 * _putstr - prints the string
 * @str: the string
 *
 * Return: number of characters printed
 */
int _putstr(char *str)
{
	int i = 0, count = 0;

	if (!str)
		return (-1);

	while (str[i])
	{
		if (str[i] >= 127 || (str[i] < 32 && str[i] > 0))
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar(((int) str[i] / 16) < 10 ?
					((int) str[i] / 16) + '0' : ((int) str[i] / 16) - 10 + 'A');
			count += _putchar(((int) str[i] % 16) < 10 ?
					((int) str[i] % 16) + '0' : ((int) str[i] % 16) - 10 + 'A');
		}
		else
			count += _putchar(str[i]);

		i++;
	}

	return (count);
}
