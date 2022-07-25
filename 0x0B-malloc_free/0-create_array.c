#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c) {
	char *arr;
	int n;

	if (size == 0) return (NULL);

	p = (char *)malloc(sizeof(char) * size);
	n = size;

	if (arr == NULL) return (NULL);

	while (n >= 0) {
		*(arr + n) = c;
		n -= 1;
	}
	return (arr);
}
