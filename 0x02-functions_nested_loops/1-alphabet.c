#include<main.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)	
{
	char letter;

	for (letter='a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
