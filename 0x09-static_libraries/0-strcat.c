<<<<<<< HEAD
=======
/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

>>>>>>> 8f2cf121140b0692e8415ccb2af67f077d71312b
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/* iterate through each src array value without the null byte*/
<<<<<<< HEAD
	for (c2 = 0; src[2]; c2++)
		/*append src[c2] to dest[c] while overwriting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);

=======
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
>>>>>>> 8f2cf121140b0692e8415ccb2af67f077d71312b
}
