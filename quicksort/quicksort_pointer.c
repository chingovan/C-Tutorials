/*
 * quicksort.c
 *
 *  Created on: Jul 17, 2015
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

void quicksort(int *mylist, int size) {

	if (size <= 1) {

		return;
	} else {
		int pivot = *(mylist + (size - 1) / 2);

		int i = 0;
		int j = size - 1;

		while (i < j) {
			while (*(mylist + i) < pivot && i <= j) {
				i++;
			}

			while (*(mylist + j) > pivot && j >= i) {
				j--;
			}

			if (i < j) {

				int temp = *(mylist + i);
				*(mylist + i) = *(mylist + j);
				*(mylist + j) = temp;
				i++;
				j--;
			} else {
				break;
			}
		}

		if (i == j) {
			if (*(mylist + i) <= pivot) {
				quicksort(mylist, i + 1);
				quicksort(mylist + i + 1, size - i - 1);
			} else {
				quicksort(mylist, i);
				quicksort(mylist + i - 1, size - i + 1);
			}
		} else {
			quicksort(mylist, j + 1);
			quicksort(mylist + i, size - i);
		}
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

	quicksort(a, n);
	printf("Day sau khi sap xep: ");
	printArray(a, n);

	return 0;
}
