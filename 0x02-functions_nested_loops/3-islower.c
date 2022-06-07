#include "main.h"

/**
 * Return: lower case  values of c
 * @c: the parameter
 * _islower - checks for lowercase character
 */

int _islower(int c)
{
	char letter;
	int lower = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
			lower = letter;
	}
	return (lower);
}
