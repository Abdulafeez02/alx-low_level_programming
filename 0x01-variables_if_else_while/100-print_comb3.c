#include<stdio.h>

/**
 * main - prints some dual digits
 *
 * Return: Always 0 (Success)
 *
 */


int main(void)
{
	int num, numm;
	for (num = 0; num < 9; num++)
	{
		for (numm = num + 1; numm < 10; numm++)
		{
			putchar((num % 10) + '0');
			putchar((numm % 10) + '0');
			if (num == 8 && numm == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
