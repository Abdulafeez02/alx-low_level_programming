#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets a..z in 10 rows
 *
 */

void print_alphabet_x10(void)
{
	int num;
	char letter;

	for (num = 1; num <= 10; num++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');
}
