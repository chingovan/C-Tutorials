/*
 * quicksort.c
 *
 *  Created on: Jul 17, 2015
 *      Author: chinv
 */

#include "stdio.h"

void printArray(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {

		printf("%d \t", a[i]);
	}
}

void quicksort(int mylist[], int sIndex, int eIndex) {

	//Neu chi co mot phan tu hoac eIndex < sIndex
	if (eIndex <= sIndex) {
		return;
	} else {
		int pivot = mylist[(eIndex + sIndex) / 2];

		int i = sIndex;
		int j = eIndex;

		while (i < j) {
			while (mylist[i] < pivot && i <= j) {
				i++;
			}

			while (mylist[j] > pivot && j >= i) {
				j--;
			}

			if (i < j) {
				int temp = mylist[i];
				mylist[i] = mylist[j];
				mylist[j] = temp;
				i++;
				j--;
			} else {
				break;
			}
		}

		if (i == j) {
			if (mylist[i] <= pivot) {
				quicksort(mylist, sIndex, i);
				quicksort(mylist, i + 1, eIndex);
			} else {
				quicksort(mylist, sIndex, i - 1);
				quicksort(mylist, i, eIndex);
			}
		} else {
			quicksort(mylist, sIndex, j);
			quicksort(mylist, i, eIndex);
		}
	}
}

int main(int argc, char **argv) {

	int n = 12;
	int a[] = { 3, 6, 9, 2, 6, 8, 9, 1, 7, 21, 7, 12 };

	quicksort(a, 0, n - 1);
	printf("Day sau khi sap xep: ");
	printArray(a, n);

	return 0;
}
