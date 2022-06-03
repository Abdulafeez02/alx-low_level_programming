#include<stdio.h>

/**
 * main - prints out all single digit starting from 0 , 
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(vioid)
{
	int num;

	for (num = 0; num < 10; num++ )
		putchar((num%10) + '0');
	putchar("\n");
	return (0);
}
