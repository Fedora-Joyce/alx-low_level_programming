/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer where we will copy to
<<<<<<< HEAD
 * @src: what are we to copy
 * @n: n bytes of @src
 *
 * Return: always 0 success
 */
{
	unsigned= ;i < n; i++)
	       dest[i] = src[i];
return (dest);
}int i;

	for (i = 0
char *_memcpy(char *dest, char *src, unsigned int n)

=======
 * @src: what we are to copy
 * @n: n bytes of @src
 *
 * Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
>>>>>>> 8f2cf121140b0692e8415ccb2af67f077d71312b
