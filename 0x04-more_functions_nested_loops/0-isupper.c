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
		if (c == letter)
			return (1);
		else
			return (0)
	}
	letter++;
}
