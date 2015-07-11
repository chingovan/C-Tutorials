/*
 * insertion_sort.c
 *
 *  Created on: Jul 12, 2015
 *      Author: chinv
 */

#include "stdio.h"

void printArray(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {

		printf("%d \t", a[i]);
	}
}

int main(int argc, char **argv) {

	int n = 12;
	int a[] = { 3, 6, 9, 2, 6, 8, 9, 1, 7, 21, 7, 12 };
	int i, j, t, index;

	for (i = 1; i < n; ++i) {

		t = a[i];
		index = i;

		for (j = i - 1; j >= 0; --j) {

			if (a[j] > t) {

				a[j + 1] = a[j];
				index = j;
			} else {
				break;
			}
		}

		if (index != i) {
			a[index] = t;
		}

	}

	printf("Day sau khi sap xep: ");
	printArray(a, n);

	return 0;
}
