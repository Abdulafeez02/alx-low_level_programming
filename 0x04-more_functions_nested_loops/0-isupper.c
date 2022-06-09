#include "main.h"

/**
 * @c: the character to be checked
 * _isupper - returns 1 if an alphabet is upper case
 * Return: 1 if character is upper , 0 otherwise
 * Auth: Brennan D Barban
 * File: 0-isupper.c
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 80)
		return (1);
	else
		return (0);
}
