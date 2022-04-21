#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n element of array of int
 *@n: a pointer to an int that will be updated/changed
 *@n: return value n
 *return: void
 */

void print_array(int *a, int n)

{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");
}
