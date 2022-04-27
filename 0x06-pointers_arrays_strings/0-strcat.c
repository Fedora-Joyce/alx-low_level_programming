#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte(\0) at the end
 * of dest, and adds a terminating null byte.
 * @dest: the destination.
 * @src: the source to be concatenated to @dest.
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;
	c = 0;
	/*find the size of dest array*/
	while (dest[c])
	c++;
	/*iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2]; c2++)	
	/*append src[c2 to dest[c] while overwritting the null byte in dest*/
	dest[c++] = src[c2];

	return (dest)
}


