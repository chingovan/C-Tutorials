/*
 * bubble_sort_array_3.c
 *
 *  Created on: Jul 1, 2015
 *      Author: chinv
 */

#include "stdio.h"

#define N 100

void printArray(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {

		printf("%d \t", a[i]);
	}
}

int main(int argc, char **argv) {

	int n;
	int a[N];
	int i, j;

	printf("Nhap vao so phan tu: ");
	scanf("%d", &n);

	printf("Nhap cac phan tu cua mang\n");
	for (i = 0; i < n; ++i) {

		printf("a[%d] = ", (i + 1));
		scanf("%d", &a[i]);
	}

	printf("Mang vua nhap la: ");
	printArray(a, n);

	int co = 0;
	for (j = 0; j < n; j++) {

		co = 0;
		for (i = n - 1; i > j; i--) {

			if (a[i] < a[i - 1]) {

				int t = a[i];
				a[i] = a[i - 1];
				a[i - 1] = t;
				co = 1;
			}
		}
		
		if( co == 0) {
			
			break;
		}
	}

	printf("\nMang sau khi thuc hien thuat toan: ");
	printArray(a, n);

	return 0;
}

