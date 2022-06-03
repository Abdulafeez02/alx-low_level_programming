#include<stdio.h>

/**
 * main - prints out all possivle combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + ', ');
	return (0);
}
