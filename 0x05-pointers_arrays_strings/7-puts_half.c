#include "main.h"

/**
 * puts_half - prints every pther char of a str
 * @str: a pointer to an int that will be changed
 *
 * return: void which means correct
 */

void puts_half(char *str)

{
	int i, last;

	i = 0;
	while (str[1] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');

}
