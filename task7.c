#include <stdio.h>
#include <math.h>

#define max 10

void array_fill(double array[], int x);

void print_array(double array[]);

void main() {
	int x;
	double array[max];
	do {
		printf("Enter number 0<=x<10: ");
		scanf("%d", &x);
	} while (x<0 || x>10);
	array_fill(array, x);
	print_array(array);
}

void array_fill(double array[], int x) {
	int index=0;
	int number=0;
	double result, decResult;
	do {
		result=cos(number);
		decResult=result*1000;
		if((int) decResult%10 == x) {
			array[index]=result;
			index++;
		}
		
		number++;
	} while(index<max);
}

void print_array(double array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("%f\n", array[index]);
	}
}
