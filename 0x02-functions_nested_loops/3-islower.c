#include "main.h"

/**
 * _islower -short description, sigle line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int_islower(int c)

{

	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
