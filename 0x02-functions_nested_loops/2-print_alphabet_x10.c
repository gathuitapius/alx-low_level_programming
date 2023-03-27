#include "main.h"
/**
 * print_alphabet_x10 - print a-z 10 times
 *
 *
 */
void print_alphabet_x10(void)
{
	int alpha;
	int count;
	

	for(alpha = 'a'; alpha <= 'z'; alpha++)
	{
		for(count = 1; count <= 10; count++)
		{
			_putchar(alpha);
		}
		_putchar('\n);
	}
}
