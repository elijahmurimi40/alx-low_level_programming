#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c) {
	char *arr;
	unsigned int n;

	if (size == 0) return (NULL);

	arr = (char *)malloc(sizeof(char) * size);
	n = 0;

	if (arr == NULL) return (NULL);

	while (n < size) {
		*(arr + n) = c;
		n += 1;
	}
	return (arr);
}
