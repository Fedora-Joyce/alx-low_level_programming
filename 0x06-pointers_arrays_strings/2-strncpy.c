#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: strings to copy to
 * @src:strings to copy from
 * @n: int that determines number of bytes to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; n > x; x++)
		dest[x] = '\0';

	return (dest);
}
