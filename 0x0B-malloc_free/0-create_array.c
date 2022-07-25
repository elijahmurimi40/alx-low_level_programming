#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c) {
	char *arr;
	int n;

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
