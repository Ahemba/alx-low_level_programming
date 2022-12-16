#include "main.h"

/**
  *print_diagonal - draw diagonal  line in a terminal
  *print newline if 0 or less is entered
  *@n: number of lines to be printed
  *
  *Return: void
  */

void print_diagonal(int n)
{
	int c, d;

	c = 0;

	while (n > 0)
	{
		d = c;
		while (d > 0)
		{
			_putchar(32);
			d--;
		}
		_putchar(92);
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar(10);
}
