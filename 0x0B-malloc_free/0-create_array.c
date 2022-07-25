#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c) {
	if (size == 0) return NULL;

	char *arr;
	int n;

	arr = malloc(sizeof(char) * size);
	n = size;

	while (n >= 0) {
		*(arr + n) = c;
		n -= 1;
	}
	return *arr;
}
