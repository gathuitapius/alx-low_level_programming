#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @letter: the character to be tracked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int letter)
{
	if (letter >= 'A' && letter <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
