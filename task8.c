#include <stdio.h>

#define max 10

void array_fill(int array[], int x);
void print_array(int array[]);

void main() {
	int array[max];
	int x;
	do {
		printf("Enter 0<=x<10: ");
		scanf("%d", &x);
	} while(x<0 || x>=10);
	array_fill(array, x);
	print_array(array);
}

void array_fill(int array[], int x) {
	int index=0;
	int fnum1=0;
	int fnum2=1;
	long result=1;
	while(index<max) {
		if(result%x==0) {
			array[index]=result;
			index++;
		}
		result=fnum1+fnum2;
		fnum1=fnum2;
		fnum2=result;
	}
}

void print_array(int array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("%d\n", array[index]);
	}
}
