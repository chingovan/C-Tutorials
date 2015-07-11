/*
 * insertion_sort.c
 *
 *  Created on: Jul 12, 2015
 *      Author: chinv
 */

#include "stdio.h"
#include "stdlib.h"

void printArray(int *a, int n) {
	int i;
	for (i = 0; i < n; i++) {

		printf("%d \t", *(a + i));
	}
}

int main(int argc, char **argv) {

	int n = 12;
	int *a = (int*) calloc(n, sizeof(int));

	*(a + 0) = 3;
	*(a + 1) = 6;
	*(a + 2) = 9;
	*(a + 3) = 2;
	*(a + 4) = 6;
	*(a + 5) = 8;
	*(a + 6) = 9;
	*(a + 7) = 1;
	*(a + 8) = 7;
	*(a + 9) = 21;
	*(a + 10) = 7;
	*(a + 11) = 12;

	int i, j, t, index;

	for (i = 1; i < n; ++i) {

		t = *(a + i);
		index = i;

		for (j = i - 1; j >= 0; --j) {

			if (*(a + j) > t) {

				*(a + j + 1) = *(a + j);
				index = j;
			} else {
				break;
			}
		}

		if (index != i) {
			*(a + index) = t;
		}

	}

	printf("Day sau khi sap xep: ");
	printArray(a, n);

	return 0;
}
