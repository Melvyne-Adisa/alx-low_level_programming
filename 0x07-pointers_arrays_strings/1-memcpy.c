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
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
	dest[r] = src[r];
	n--;
	}
	return (dest);

}
