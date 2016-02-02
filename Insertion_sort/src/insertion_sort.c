/*
 ============================================================================
 Name        : insertion_sort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * insertion sort solution
 */
void insert(int *data, int size) {

	int i, temp;

	for (i = 1; i < size; i++) {
		if (data[i] < data[i - 1]) {
			temp = data[i];
			int j = i;
			while (j > 0 && temp < data[j - 1]) {
				data[j] = data[j - 1];
				j--;
			}
			data[j] = temp;
		}
	}
}

int main(void) {
	int a[] = {9,7,6,8,5,4,3,1,2};
	for(int i =0;i<9;i++){
		printf("%d",a[i]);
		printf(" ");
	}
	printf("\n");
	insert(a,9);
	for(int i =0;i<9;i++){
		printf("%d",a[i]);
		printf(" ");
	}
	return EXIT_SUCCESS;
}
