#include "main.h"

/**
 *_strncat - concatenates n strings
 *@dest: destination
 *@src: source
 *@n: maximum number of characters to be concatenated
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[j])
	{dest[i] = src[j];
		i++;
		j++;
	}

	dest[i + n + 1] = '\0';

	return (dest);
}
