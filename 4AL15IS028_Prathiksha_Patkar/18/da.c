#include "array.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	struct ArrayData *array;
	array = initArray();

	int get;

	int i;
	for (i = 0; i < 5000; i++) {
		addElement(array, rand() % 50000);
		get = getElement(array, i);
  		printf("%d\n", get);
	}

	free(array->pointer);
	free(array);
	return 0;
}