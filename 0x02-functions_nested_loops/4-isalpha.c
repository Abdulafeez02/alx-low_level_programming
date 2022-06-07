#include "main.h"

/**
 * _isalpha - prints 1 when it discovers an alphabet
 *
 */

int _isalpha(int c)
{
	char letter;
	int num;

	for (letter='a'; letter <= 'z'; letter++)
	{
		if (letter == c )
			num = 1;
	}
	return (num);
}
