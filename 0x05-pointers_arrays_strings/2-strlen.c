#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: stores pointer to a string.
 * Return: Always 0.
 */
int _strlen(char *s)
{

	int len = 0;

	while (*s++)

	{
		len++;
	}

	return (len);
}
