#include "main.h"

/**
 * print_alphabet - prints the alpha in lowercase followed be a new line
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
		putchar(letter);
	putchar('\n');
}
