/*
 * selection_sort_pointer_2.c
 *
 *  Created on: Jul 9, 2015
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
	int *a; // = { 3, 6, 9, 2, 6, 8, 9, 1, 7, 21, 7, 12 };
	int i, j, minValue, k;

	a = (int *) calloc(n, sizeof(int));
	a[0] = 3;
	a[1] = 6;
	a[2] = 9;
	a[3] = 2;
	a[4] = 6;
	a[5] = 8;
	a[6] = 9;
	a[7] = 1;
	a[8] = 7;
	a[9] = 21;
	a[10] = 7;
	a[11] = 12;

	printf("Mang ban dau la: ");
	printArray(a, n);

	for (i = 0; i < n - 1; i++) {

		minValue = *(a + i);
		k = i;
		for (j = i + 1; j < n; j++) {

			if (minValue > *(a + j)) {

				minValue = *(a + j);
				k = j;
			}
		}

		if (k != i) {

			int t = *(a + i);
			*(a + i) = *(a + k);
			*(a + k) = t;
		}
	}

	printf("\nMang sau khi thuc hien thuat toan: ");
	printArray(a, n);

	return 0;
}

