/**
 * _memset - a function that fills
<<<<<<< HEAD
 * 	memory with a constant byte
 *
 * @s: input pointer to char type
 * 	represents the pointer to the block of memory to fil
 *
 * @n: unsigned int variable
 * 	the number of bytes to be filled
 *
 * Return: A pointer to the filled memory
 * 	area @s
 */
=======
 *         memory with a constant byte
 *
 * @s: input pointer to char type
 *    represents the pointer to the
 *    block of memory to fill
 * @b: input variable of char type
 *    represents the character to
 *    fill s
 * @n: unsigned int variable
 *    the number of bytes to be filled
 *
 * Return: A pointer to the filled memory
 *         area @s
*/
>>>>>>> 8f2cf121140b0692e8415ccb2af67f077d71312b

char *_memset(char *s, char b, unsigned int n)
{
	/**
<<<<<<< HEAD
	 * declare an unsigned int 
	 * because we are storing a value
	 * that will always be 
	 * non-negative (zero or positive)
	 */
       unsigned int i;

	for (i = 0; i < n; i++)
 		s[i] = b;
=======
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
>>>>>>> 8f2cf121140b0692e8415ccb2af67f077d71312b

	return (s);
}
