#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

char print_alphabet(void)	
{
	char letter;

	for (letter='a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

int main(void)
{
	print_alphabet();
	return (0);
}
