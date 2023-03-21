#include "main.h"

/**
 * _islower - controls if a character is in lowercase
 * @c: character to be verified
 * Return: 1 for lowercase or else 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
