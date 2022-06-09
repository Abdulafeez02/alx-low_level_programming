#include "main.h"

/**
 * _isupper - returns 1 if an alphabet is upper case
 * Return: 0
 */

int _isupper(int c)
{
	char letter;

	letter = 'A';
	while (letter < 'Z')
	{
		if (letter == ((c % 10)+ '0'))
			_putchar(49);
		else
			_putchar(48);
		return (0)
	}
}
