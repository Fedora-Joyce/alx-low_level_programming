#include "main.h"
/**
 * _strcmp - compares two strings.
 *@s1: pointer to first string.
 *@s2: pointer to second string.
 *Return: value less than 0 if strings less than the other.
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);

}
