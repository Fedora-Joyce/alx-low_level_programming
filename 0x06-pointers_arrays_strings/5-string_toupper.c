#include "main.h"
/**
 * string_touuper - converts string to uppercase
 * @s: string
 * return: s
/

upper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] -= 32;
		}
	}
	return (s);
}
