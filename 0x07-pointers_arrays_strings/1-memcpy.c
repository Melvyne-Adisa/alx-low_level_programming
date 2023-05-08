#include "main.h"

/**
 * _memcpy - a function that copies n bytes src to dest memory area
 *
 * @dest: pointer to destination memory area
 * @src: memory area where to copy from
 * @n: number of bytes to be copied
 *
 * return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}

	return (dest);

}
