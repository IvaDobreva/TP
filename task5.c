#include <stdio.h>
#include <math.h>

#define max 10

void array_fill(double array[], int max_elements);

void print_array(double array[], int max_elements);

void sort(double array[], int max_elements);

void main() {
	int max_elements;
	double array[max];
	
	printf("Enter max elements:");
	scanf("%d", &max_elements);
	array_fill(array, max_elements);
	printf("Elements:\n");
	print_array(array, max_elements);
	printf("Sorted elements:\n");
	sort(array, max_elements);
	print_array(array, max_elements);
}

void array_fill(double array[], int max_elements) {
	int index;

	for(index=0; index<max_elements; index++) {
		array[index] = cos(index);
	}
}

void print_array(double array[], int max_elements) {
	int index;

	for(index=0; index<max_elements; index++) {
		printf("%f\n", array[index]);
	}
	printf("\n");
}

void sort(double array[], int max_elements) {
	int a, b;
	double x;
	for( a = 1; a < max_elements; a++ ) {
		for( b = 0; b < max_elements - 1; b++ ) {
			if( array[b] < array[b + 1] ) {
				x = array[ b ];
				array[b] = array[b + 1];
				array[b + 1] = x;
			}
		}
	}
}
