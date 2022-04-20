#include "main.h"

/**
 * _puts - print a string
 * @str: a pointer to an integer that will be chnaged
 *
 * return: void which means correct answer
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}
