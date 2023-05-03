#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: array name
 * @n: number of elements of the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)

{

	int x;

	for (x = 0; x < n; x++)
	if (x != n - 1)
	printf("%d, ", a[x]);
	else
	printf("%d", a[x]);
	printf("\n");
}
