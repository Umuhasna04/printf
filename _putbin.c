#include "main.h"

/**
 * _putbin - prints the binary represetation of the given number
 * @num: the integer
 *
 * Return: number of printed character
 */
int _putbin(unsigned int num)
{
	unsigned int i, count = 0;
	int zeros = 1;

	for (i = 1 << 31; i > 0; i /= 2)
	{
		if (num & i)
		{
			zeros = 0;
			count += _putchar('1');
		}
		else if (!zeros)
			count += _putchar('0');
	}

	if (zeros)
		count += _putchar('0');

	return (count);
}
