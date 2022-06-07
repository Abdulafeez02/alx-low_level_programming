#include "main.h"

/**
 * _isalpha - prints 1 when it discovers an alphabet
 *
 */

int _isalpha(int c)
{
	char letter2,letter;
	int num = 0;

	letter = 'a' ;
	letter2 = 'A';
	while (letter <= 'z' && letter2 <= 'Z')
	{
		if ((letter == c) or (letter2 == c))
		{
			num = 1;
		}
		else
		{
			continue;
		}
	}
	return (num);
}
