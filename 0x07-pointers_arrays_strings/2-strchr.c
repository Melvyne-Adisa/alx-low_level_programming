#include "main.h"

/**
 **_strchr - function that locates a character in a strin
 *
 * @s: pointer to search
 * @c: Input to search for
 *
 * return: pointer to the first occurrence of c in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] > '\0'; i++)
	{
	if (s[i] == c)
	return &s[i];
	}
	return (0);
}
