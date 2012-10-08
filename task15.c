#include <stdio.h>

#define max 10

void array_fill(long array[], int x);

int fibonacci_check(int x, long result);

void print_array(long array[]);

void main() {
	int x;
	long array[max];	

	do {
		printf("Enter number between 0 and 10: ");
		scanf("%d", &x);
	}while (x<=0 || x>=10);
	
	array_fill(array, x);
	print_array(array);
}

void array_fill(long array[], int x) {
	int index, i=1;
	int fnum1=0;
	int fnum2=1;
	long result=1;
	for(index=0; index<max; index++) {
		while(i==1) {
			result=fnum1+fnum2;
			fnum1=fnum2;
			fnum2=result;
			i=fibonacci_check(x, result);
		}
		array[index]=result;
		i=1;
	}
}

int fibonacci_check(int x, long result) {
	if(result%10==x){
		return 0;
	}
	return 1;
}

void print_array(long array[]) {
	int index;
	for(index=0; index<max; index++) {
		printf("Element %d = %ld\n", index, array[index]);
	}
}
