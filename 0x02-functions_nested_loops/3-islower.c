#include "main.c"
/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)
{
	if(islower(c) != true)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
