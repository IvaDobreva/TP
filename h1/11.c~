#include <stdio.h>
#include <math.h>

#define max 10

void fill_array(double array[], int x);

void print_array(double array[]);

void main() {
	int x;
	double array[max];
	do {
		printf("Enter number between 0 and 10: ");
		scanf("%d", &x);
	} while(x<=0 || x>=10);
	fill_array(array, x);
	print_array(array);
}

void fill_array(double array[], int x) {

	double sum=0;
	int index, i;
	int n=0;
	for (index=0; index<max; index++) {
		for(i=n*x; i<((n+1)*x); i++) {
			sum+=cos(i);
			
		}
		n++;
		array[index]=sum;
		
	}
}

void print_array(double array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("Element %d = %f\n", index, array[index]);
	}
}
