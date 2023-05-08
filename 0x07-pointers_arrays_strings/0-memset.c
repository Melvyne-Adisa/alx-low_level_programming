#include "main.h"

/**
 * _memset - Function that fills memory with constant byte
 * @s: adress of memory to be filled
 * @b: the byte to fill with
 * @n: number of bytes to be changed
 * Return: Changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{

	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s)

}
