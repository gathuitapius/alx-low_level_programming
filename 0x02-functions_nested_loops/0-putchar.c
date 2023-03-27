#include "main.h"

/**
 * main - Entry point
 *
 * Return: nothing, or void
 */

int main(void)
{
	char *p = "_putchar\n";

	while (*p)
	{
		_putchar(*p);
		p++;
	}
	return (0);
}
